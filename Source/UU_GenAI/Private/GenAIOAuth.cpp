// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "GenAIOAuth.h"
#include "GenAISettings.h"
#include "Misc/Base64.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/App.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"
#include "Misc/SecureHash.h"
#include "HAL/PlatformProcess.h"

// ─────────────────────────────────────────────────────────────────────────────
//  OAuth endpoint defaults
//  These point to Anthropic's console OAuth. If Anthropic changes URLs or
//  you need a custom proxy, override via GenAISettings (future extension).
// ─────────────────────────────────────────────────────────────────────────────

const FString FGenAIOAuth::AuthorizeUrl = TEXT("https://console.anthropic.com/oauth/authorize");
const FString FGenAIOAuth::TokenUrl     = TEXT("https://console.anthropic.com/oauth/token");
const FString FGenAIOAuth::ClientId     = TEXT("unreal-genai-plugin");
const FString FGenAIOAuth::RedirectUri  = TEXT("http://localhost:17548/callback");

// ─────────────────────────────────────────────────────────────────────────────
//  Compact SHA-256 implementation (no external dependency needed)
// ─────────────────────────────────────────────────────────────────────────────

namespace
{
    static const uint32 K256[64] = {
        0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,
        0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,
        0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,
        0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,
        0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,
        0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,0xd192e819,0xd6990624,0xf40e3585,0x106aa070,
        0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,
        0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2
    };

    inline uint32 RightRotate(uint32 V, int N) { return (V >> N) | (V << (32 - N)); }

    void ComputeSHA256(const uint8* Data, uint64 Len, uint8 OutHash[32])
    {
        uint32 H[8] = {
            0x6a09e667,0xbb67ae85,0x3c6ef372,0xa54ff53a,
            0x510e527f,0x9b05688c,0x1f83d9ab,0x5be0cd19
        };

        // Pre-processing: pad message
        uint64 BitLen = Len * 8;
        uint64 PaddedLen = ((Len + 9 + 63) / 64) * 64;
        TArray<uint8> Padded;
        Padded.SetNumZeroed(PaddedLen);
        FMemory::Memcpy(Padded.GetData(), Data, Len);
        Padded[Len] = 0x80;
        // Big-endian 64-bit length at end
        for (int i = 0; i < 8; ++i)
            Padded[PaddedLen - 1 - i] = (uint8)(BitLen >> (i * 8));

        // Process 64-byte blocks
        for (uint64 Offset = 0; Offset < PaddedLen; Offset += 64)
        {
            uint32 W[64];
            const uint8* Block = &Padded[Offset];
            for (int i = 0; i < 16; ++i)
                W[i] = (Block[i*4] << 24) | (Block[i*4+1] << 16) | (Block[i*4+2] << 8) | Block[i*4+3];
            for (int i = 16; i < 64; ++i)
            {
                uint32 S0 = RightRotate(W[i-15], 7) ^ RightRotate(W[i-15], 18) ^ (W[i-15] >> 3);
                uint32 S1 = RightRotate(W[i-2], 17) ^ RightRotate(W[i-2], 19) ^ (W[i-2] >> 10);
                W[i] = W[i-16] + S0 + W[i-7] + S1;
            }

            uint32 A=H[0], B=H[1], C=H[2], D=H[3], E=H[4], F=H[5], G=H[6], HH=H[7];
            for (int i = 0; i < 64; ++i)
            {
                uint32 S1 = RightRotate(E, 6) ^ RightRotate(E, 11) ^ RightRotate(E, 25);
                uint32 Ch = (E & F) ^ (~E & G);
                uint32 Tmp1 = HH + S1 + Ch + K256[i] + W[i];
                uint32 S0 = RightRotate(A, 2) ^ RightRotate(A, 13) ^ RightRotate(A, 22);
                uint32 Maj = (A & B) ^ (A & C) ^ (B & C);
                uint32 Tmp2 = S0 + Maj;
                HH=G; G=F; F=E; E=D+Tmp1; D=C; C=B; B=A; A=Tmp1+Tmp2;
            }
            H[0]+=A; H[1]+=B; H[2]+=C; H[3]+=D; H[4]+=E; H[5]+=F; H[6]+=G; H[7]+=HH;
        }

        for (int i = 0; i < 8; ++i)
        {
            OutHash[i*4]   = (H[i] >> 24) & 0xFF;
            OutHash[i*4+1] = (H[i] >> 16) & 0xFF;
            OutHash[i*4+2] = (H[i] >> 8)  & 0xFF;
            OutHash[i*4+3] =  H[i]        & 0xFF;
        }
    }
} // anonymous namespace

// ─────────────────────────────────────────────────────────────────────────────
//  Singleton
// ─────────────────────────────────────────────────────────────────────────────

FGenAIOAuth& FGenAIOAuth::Get()
{
    static FGenAIOAuth Instance;
    return Instance;
}

FGenAIOAuth::FGenAIOAuth()
{
    LoadTokens();
}

FGenAIOAuth::~FGenAIOAuth()
{
    StopCallbackServer();
}

// ─────────────────────────────────────────────────────────────────────────────
//  PKCE helpers
// ─────────────────────────────────────────────────────────────────────────────

FString FGenAIOAuth::GenerateCodeVerifier()
{
    // 32 random bytes → 43 base64url chars
    TArray<uint8> Random;
    Random.SetNum(32);
    for (int32 i = 0; i < 32; ++i)
        Random[i] = (uint8)FMath::RandRange(0, 255);
    return Base64UrlEncode(Random);
}

TArray<uint8> FGenAIOAuth::SHA256(const FString& Input)
{
    FTCHARToUTF8 Converter(*Input);
    TArray<uint8> Result;
    Result.SetNum(32);
    ComputeSHA256((const uint8*)Converter.Get(), Converter.Length(), Result.GetData());
    return Result;
}

FString FGenAIOAuth::Base64UrlEncode(const TArray<uint8>& Data)
{
    FString B64 = FBase64::Encode(Data);
    // Base64 → Base64URL: replace +→-, /→_, remove =
    B64.ReplaceInline(TEXT("+"), TEXT("-"));
    B64.ReplaceInline(TEXT("/"), TEXT("_"));
    B64.ReplaceInline(TEXT("="), TEXT(""));
    return B64;
}

FString FGenAIOAuth::GenerateCodeChallenge(const FString& Verifier)
{
    TArray<uint8> Hash = SHA256(Verifier);
    return Base64UrlEncode(Hash);
}

// ─────────────────────────────────────────────────────────────────────────────
//  Login
// ─────────────────────────────────────────────────────────────────────────────

void FGenAIOAuth::Login()
{
    // Generate PKCE pair
    CodeVerifier = GenerateCodeVerifier();
    FString CodeChallenge = GenerateCodeChallenge(CodeVerifier);

    // Build authorization URL
    FString Url = FString::Printf(
        TEXT("%s?response_type=code&client_id=%s&redirect_uri=%s&code_challenge=%s&code_challenge_method=S256&scope=user:read"),
        *AuthorizeUrl, *ClientId,
        *FPlatformHttp::UrlEncode(RedirectUri),
        *CodeChallenge);

    UE_LOG(LogTemp, Log, TEXT("[GenAI][OAuth] Opening browser for login..."));

    // Start callback server before opening browser
    StartCallbackServer();

    // Open browser
    FPlatformProcess::LaunchURL(*Url, nullptr, nullptr);
}

// ─────────────────────────────────────────────────────────────────────────────
//  Logout
// ─────────────────────────────────────────────────────────────────────────────

void FGenAIOAuth::Logout()
{
    AccessToken.Empty();
    RefreshTokenValue.Empty();
    TokenExpiry = FDateTime::MinValue();

    FString FilePath = FPaths::ProjectSavedDir() / TEXT("GenAI/OAuthTokens.json");
    IFileManager::Get().Delete(*FilePath);

    UE_LOG(LogTemp, Log, TEXT("[GenAI][OAuth] Logged out."));
    OnLoginStatusChanged.Broadcast(false);
}

// ─────────────────────────────────────────────────────────────────────────────
//  Status
// ─────────────────────────────────────────────────────────────────────────────

bool FGenAIOAuth::IsLoggedIn() const
{
    return !AccessToken.IsEmpty() && FDateTime::UtcNow() < TokenExpiry;
}

FString FGenAIOAuth::GetAccessToken() const
{
    return AccessToken;
}

// ─────────────────────────────────────────────────────────────────────────────
//  Local callback server (minimal HTTP on TCP)
// ─────────────────────────────────────────────────────────────────────────────

void FGenAIOAuth::StartCallbackServer()
{
    StopCallbackServer(); // cleanup any previous

    ISocketSubsystem* SocketSub = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
    if (!SocketSub) return;

    ListenSocket = SocketSub->CreateSocket(NAME_Stream, TEXT("OAuthCallback"), false);
    if (!ListenSocket)
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OAuth] Failed to create listen socket."));
        return;
    }

    ListenSocket->SetReuseAddr(true);
    ListenSocket->SetNonBlocking(true);

    TSharedRef<FInternetAddr> Addr = SocketSub->CreateInternetAddr();
    Addr->SetIp(0x7F000001); // 127.0.0.1
    Addr->SetPort(CallbackPort);

    if (!ListenSocket->Bind(*Addr))
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OAuth] Failed to bind to port %d."), CallbackPort);
        StopCallbackServer();
        return;
    }

    if (!ListenSocket->Listen(1))
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OAuth] Failed to listen."));
        StopCallbackServer();
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("[GenAI][OAuth] Listening on port %d for callback..."), CallbackPort);

    // Poll via ticker
    TickerHandle = FTSTicker::GetCoreTicker().AddTicker(
        FTickerDelegate::CreateRaw(this, &FGenAIOAuth::PollForConnection), 0.1f);
}

void FGenAIOAuth::StopCallbackServer()
{
    if (TickerHandle.IsValid())
    {
        FTSTicker::GetCoreTicker().RemoveTicker(TickerHandle);
        TickerHandle.Reset();
    }

    if (ListenSocket)
    {
        ListenSocket->Close();
        ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(ListenSocket);
        ListenSocket = nullptr;
    }
}

bool FGenAIOAuth::PollForConnection(float /*DeltaTime*/)
{
    if (!ListenSocket) return false;

    bool bPending = false;
    if (!ListenSocket->HasPendingConnection(bPending) || !bPending)
        return true; // keep ticking

    FSocket* ClientSocket = ListenSocket->Accept(TEXT("OAuthClient"));
    if (!ClientSocket) return true;

    // Read the HTTP request
    ClientSocket->SetNonBlocking(false);
    TArray<uint8> Buffer;
    Buffer.SetNumZeroed(4096);
    int32 BytesRead = 0;
    ClientSocket->Recv(Buffer.GetData(), Buffer.Num() - 1, BytesRead);
    Buffer[BytesRead] = 0;

    FString Request = UTF8_TO_TCHAR((const char*)Buffer.GetData());

    // Parse auth code from "GET /callback?code=XXXXX HTTP/1.1"
    FString AuthCode;
    FString ErrorStr;
    int32 CodeStart = Request.Find(TEXT("code="));
    if (CodeStart != INDEX_NONE)
    {
        CodeStart += 5;
        int32 CodeEnd = Request.Find(TEXT("&"), ESearchCase::IgnoreCase, ESearchDir::FromStart, CodeStart);
        if (CodeEnd == INDEX_NONE)
        {
            CodeEnd = Request.Find(TEXT(" "), ESearchCase::IgnoreCase, ESearchDir::FromStart, CodeStart);
        }
        if (CodeEnd == INDEX_NONE) CodeEnd = Request.Len();
        AuthCode = Request.Mid(CodeStart, CodeEnd - CodeStart);
    }

    int32 ErrorStart = Request.Find(TEXT("error="));
    if (ErrorStart != INDEX_NONE)
    {
        ErrorStart += 6;
        int32 ErrorEnd = Request.Find(TEXT("&"), ESearchCase::IgnoreCase, ESearchDir::FromStart, ErrorStart);
        if (ErrorEnd == INDEX_NONE) ErrorEnd = Request.Find(TEXT(" "), ESearchCase::IgnoreCase, ESearchDir::FromStart, ErrorStart);
        if (ErrorEnd == INDEX_NONE) ErrorEnd = Request.Len();
        ErrorStr = Request.Mid(ErrorStart, ErrorEnd - ErrorStart);
    }

    // Send HTTP response
    FString ResponseHtml;
    if (!AuthCode.IsEmpty())
    {
        ResponseHtml = TEXT("<html><body style=\"font-family:sans-serif;text-align:center;padding:40px\">"
            "<h2>Login Successful!</h2>"
            "<p>You can close this tab and return to Unreal Engine.</p>"
            "</body></html>");
    }
    else
    {
        FString ErrMsg = ErrorStr.IsEmpty() ? TEXT("Unknown error") : ErrorStr;
        ResponseHtml = FString::Printf(
            TEXT("<html><body style=\"font-family:sans-serif;text-align:center;padding:40px\">"
            "<h2>Login Failed</h2>"
            "<p>Error: %s</p>"
            "<p>Please try again.</p>"
            "</body></html>"), *ErrMsg);
    }

    FString HttpResponse = FString::Printf(
        TEXT("HTTP/1.1 200 OK\r\nContent-Type: text/html\r\nConnection: close\r\nContent-Length: %d\r\n\r\n%s"),
        ResponseHtml.Len(), *ResponseHtml);

    FTCHARToUTF8 ResponseUtf8(*HttpResponse);
    int32 Sent = 0;
    ClientSocket->Send((const uint8*)ResponseUtf8.Get(), ResponseUtf8.Length(), Sent);

    ClientSocket->Close();
    ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(ClientSocket);

    // Stop server
    StopCallbackServer();

    if (!AuthCode.IsEmpty())
    {
        UE_LOG(LogTemp, Log, TEXT("[GenAI][OAuth] Received authorization code."));
        ExchangeCodeForToken(AuthCode);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OAuth] Authorization failed: %s"), *ErrorStr);
        OnLoginStatusChanged.Broadcast(false);
    }

    return false; // stop ticker
}

// ─────────────────────────────────────────────────────────────────────────────
//  Token exchange
// ─────────────────────────────────────────────────────────────────────────────

void FGenAIOAuth::ExchangeCodeForToken(const FString& AuthCode)
{
    TSharedPtr<FJsonObject> Body = MakeShared<FJsonObject>();
    Body->SetStringField(TEXT("grant_type"), TEXT("authorization_code"));
    Body->SetStringField(TEXT("code"), AuthCode);
    Body->SetStringField(TEXT("client_id"), ClientId);
    Body->SetStringField(TEXT("redirect_uri"), RedirectUri);
    Body->SetStringField(TEXT("code_verifier"), CodeVerifier);

    FString BodyStr;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&BodyStr);
    FJsonSerializer::Serialize(Body.ToSharedRef(), Writer);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(TokenUrl);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetContentAsString(BodyStr);

    Request->OnProcessRequestComplete().BindLambda(
        [this](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid())
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OAuth] Token exchange failed: network error."));
                OnLoginStatusChanged.Broadcast(false);
                return;
            }

            const int32 Code = Response->GetResponseCode();
            const FString ResponseStr = Response->GetContentAsString();

            if (Code != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OAuth] Token exchange failed: HTTP %d: %s"), Code, *ResponseStr);
                OnLoginStatusChanged.Broadcast(false);
                return;
            }

            HandleTokenResponse(ResponseStr, false);
        });

    Request->ProcessRequest();
}

void FGenAIOAuth::RefreshToken()
{
    if (RefreshTokenValue.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("[GenAI][OAuth] No refresh token available."));
        return;
    }

    TSharedPtr<FJsonObject> Body = MakeShared<FJsonObject>();
    Body->SetStringField(TEXT("grant_type"), TEXT("refresh_token"));
    Body->SetStringField(TEXT("refresh_token"), RefreshTokenValue);
    Body->SetStringField(TEXT("client_id"), ClientId);

    FString BodyStr;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&BodyStr);
    FJsonSerializer::Serialize(Body.ToSharedRef(), Writer);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(TokenUrl);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetContentAsString(BodyStr);

    Request->OnProcessRequestComplete().BindLambda(
        [this](FHttpRequestPtr /*Req*/, FHttpResponsePtr Response, bool bConnected)
        {
            if (!bConnected || !Response.IsValid() || Response->GetResponseCode() != 200)
            {
                UE_LOG(LogTemp, Error, TEXT("[GenAI][OAuth] Token refresh failed."));
                Logout();
                return;
            }
            HandleTokenResponse(Response->GetContentAsString(), true);
        });

    Request->ProcessRequest();
}

void FGenAIOAuth::HandleTokenResponse(const FString& JsonResponse, bool bIsRefresh)
{
    TSharedPtr<FJsonObject> Root;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonResponse);
    if (!FJsonSerializer::Deserialize(Reader, Root) || !Root.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("[GenAI][OAuth] Failed to parse token response."));
        OnLoginStatusChanged.Broadcast(false);
        return;
    }

    Root->TryGetStringField(TEXT("access_token"), AccessToken);

    FString NewRefresh;
    if (Root->TryGetStringField(TEXT("refresh_token"), NewRefresh))
    {
        RefreshTokenValue = NewRefresh;
    }

    int32 ExpiresIn = 3600; // default 1 hour
    Root->TryGetNumberField(TEXT("expires_in"), ExpiresIn);
    TokenExpiry = FDateTime::UtcNow() + FTimespan::FromSeconds(ExpiresIn - 60); // 1 min buffer

    UE_LOG(LogTemp, Log, TEXT("[GenAI][OAuth] %s successful. Token expires in %d seconds."),
        bIsRefresh ? TEXT("Token refresh") : TEXT("Login"), ExpiresIn);

    SaveTokens();
    OnLoginStatusChanged.Broadcast(true);
}

// ─────────────────────────────────────────────────────────────────────────────
//  Token persistence (saved to ProjectSaved/GenAI/OAuthTokens.json, obfuscated)
// ─────────────────────────────────────────────────────────────────────────────

static const uint8 OAuthXorKey = 0x7B;

static FString ObfuscateOAuth(const FString& Plaintext)
{
    if (Plaintext.IsEmpty()) return FString();
    FTCHARToUTF8 Converter(*Plaintext);
    TArray<uint8> Bytes((const uint8*)Converter.Get(), Converter.Length());
    for (uint8& B : Bytes) B ^= OAuthXorKey;
    return FBase64::Encode(Bytes);
}

static FString DeobfuscateOAuth(const FString& Obfuscated)
{
    if (Obfuscated.IsEmpty()) return FString();
    TArray<uint8> Bytes;
    if (!FBase64::Decode(Obfuscated, Bytes)) return Obfuscated;
    for (uint8& B : Bytes) B ^= OAuthXorKey;
    Bytes.Add(0);
    return FString(UTF8_TO_TCHAR((const char*)Bytes.GetData()));
}

void FGenAIOAuth::SaveTokens()
{
    TSharedPtr<FJsonObject> Root = MakeShared<FJsonObject>();
    Root->SetStringField(TEXT("access_token"), ObfuscateOAuth(AccessToken));
    Root->SetStringField(TEXT("refresh_token"), ObfuscateOAuth(RefreshTokenValue));
    Root->SetStringField(TEXT("expiry"), TokenExpiry.ToIso8601());

    FString JsonStr;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonStr);
    FJsonSerializer::Serialize(Root.ToSharedRef(), Writer);

    FString FilePath = FPaths::ProjectSavedDir() / TEXT("GenAI/OAuthTokens.json");
    FFileHelper::SaveStringToFile(JsonStr, *FilePath);
}

void FGenAIOAuth::LoadTokens()
{
    FString FilePath = FPaths::ProjectSavedDir() / TEXT("GenAI/OAuthTokens.json");
    FString JsonStr;
    if (!FFileHelper::LoadFileToString(JsonStr, *FilePath)) return;

    TSharedPtr<FJsonObject> Root;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonStr);
    if (!FJsonSerializer::Deserialize(Reader, Root) || !Root.IsValid()) return;

    FString ObfAccess, ObfRefresh, ExpiryStr;
    Root->TryGetStringField(TEXT("access_token"), ObfAccess);
    Root->TryGetStringField(TEXT("refresh_token"), ObfRefresh);
    Root->TryGetStringField(TEXT("expiry"), ExpiryStr);

    AccessToken = DeobfuscateOAuth(ObfAccess);
    RefreshTokenValue = DeobfuscateOAuth(ObfRefresh);
    FDateTime::ParseIso8601(*ExpiryStr, TokenExpiry);

    // Auto-refresh if expired but we have a refresh token
    if (!AccessToken.IsEmpty() && FDateTime::UtcNow() >= TokenExpiry && !RefreshTokenValue.IsEmpty())
    {
        UE_LOG(LogTemp, Log, TEXT("[GenAI][OAuth] Token expired, refreshing..."));
        RefreshToken();
    }
    else if (!AccessToken.IsEmpty() && FDateTime::UtcNow() < TokenExpiry)
    {
        UE_LOG(LogTemp, Log, TEXT("[GenAI][OAuth] Loaded saved OAuth session."));
    }
}
