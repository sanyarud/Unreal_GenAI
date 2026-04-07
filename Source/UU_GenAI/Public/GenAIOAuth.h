// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Containers/Ticker.h"

/**
 * Manages OAuth 2.0 PKCE login flow for Anthropic Claude.
 *
 * Flow:
 *   1. Login() generates PKCE codes, opens browser to auth URL
 *   2. Local TCP server on localhost:PORT catches the redirect with auth code
 *   3. ExchangeCodeForToken() POSTs the code to the token endpoint
 *   4. Access token stored (obfuscated) and used as Bearer header
 *   5. Token refreshed automatically when expired
 *
 * Singleton — access via FGenAIOAuth::Get().
 */
class UU_GENAI_API FGenAIOAuth
{
public:
    static FGenAIOAuth& Get();

    /** Start the OAuth login flow — opens browser */
    void Login();

    /** Clear tokens and mark as logged out */
    void Logout();

    /** True when we have a valid (non-expired) access token */
    bool IsLoggedIn() const;

    /** Returns the current access token for API calls (empty if not logged in) */
    FString GetAccessToken() const;

    /** Refresh the token if we have a valid refresh token */
    void RefreshToken();

    /** Delegate fired when login status changes */
    DECLARE_MULTICAST_DELEGATE_OneParam(FOnLoginStatusChanged, bool /*bLoggedIn*/);
    FOnLoginStatusChanged OnLoginStatusChanged;

private:
    FGenAIOAuth();
    ~FGenAIOAuth();

    // ─── PKCE helpers ────────────────────────────────────────────────────────
    static FString GenerateCodeVerifier();
    static TArray<uint8> SHA256(const FString& Input);
    static FString Base64UrlEncode(const TArray<uint8>& Data);
    static FString GenerateCodeChallenge(const FString& Verifier);

    // ─── Callback server ─────────────────────────────────────────────────────
    void StartCallbackServer();
    void StopCallbackServer();
    bool PollForConnection(float DeltaTime);

    // ─── Token exchange ──────────────────────────────────────────────────────
    void ExchangeCodeForToken(const FString& AuthCode);
    void HandleTokenResponse(const FString& JsonResponse, bool bIsRefresh);

    // ─── Token persistence ───────────────────────────────────────────────────
    void SaveTokens();
    void LoadTokens();

    // ─── State ───────────────────────────────────────────────────────────────
    FString AccessToken;
    FString RefreshTokenValue;
    FDateTime TokenExpiry;
    FString CodeVerifier;
    int32 CallbackPort = 17548;

    class FSocket* ListenSocket = nullptr;
    FTSTicker::FDelegateHandle TickerHandle;

    // ─── OAuth config (configurable via GenAISettings) ────────────────────────
    static const FString AuthorizeUrl;
    static const FString TokenUrl;
    static const FString ClientId;
    static const FString RedirectUri;
};
