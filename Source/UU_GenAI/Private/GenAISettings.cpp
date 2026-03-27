// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "GenAISettings.h"
#include "Misc/Base64.h"

// Simple XOR key — prevents plaintext storage without being a full encryption solution.
// For production security, use a proxy server so the key never ships with the game.
static const uint8 GObfXorKey = 0x5A;

UGenAISettings::UGenAISettings()
{
    // Default skills
    if (Skills.Num() == 0)
    {
        FGenAISkill BPExpert;
        BPExpert.Name = TEXT("UE5 Blueprint Expert");
        BPExpert.Description = TEXT("Expert in Unreal Engine 5 Blueprints.");
        BPExpert.SystemPrompt = TEXT("You are an expert in Unreal Engine 5 Blueprints. Provide detailed explanations, node names, and pin connections. Use a format that is easy to follow in the UE5 Blueprint editor.");
        BPExpert.TriggerKeywords = { TEXT("blueprint"), TEXT("nodes"), TEXT("event graph"), TEXT("widget") };
        Skills.Add(BPExpert);

        FGenAISkill CPPro;
        CPPro.Name = TEXT("UE5 C++ Pro");
        CPPro.Description = TEXT("Expert in Unreal Engine C++ development.");
        CPPro.SystemPrompt = TEXT("You are a professional Unreal Engine C++ developer. Follow best practices: use UObject-safe pointers (TObjectPtr, TWeakObjectPtr), follow the 'Include What You Use' (IWYU) principle, use Unreal coding standards (PascalCase, prefixing), and focus on performance and memory management.");
        CPPro.TriggerKeywords = { TEXT("c++"), TEXT("cpp"), TEXT("class"), TEXT("header") };
        Skills.Add(CPPro);
    }

    if (OllamaBaseUrl.IsEmpty() || OllamaBaseUrl == TEXT("http://localhost:11434"))
    {
        OllamaBaseUrl = TEXT("http://192.168.3.214:11434");
    }
}

// ─────────────────────────────────────────────────────────────────────────────
//  Private helpers
// ─────────────────────────────────────────────────────────────────────────────

FString UGenAISettings::Obfuscate(const FString& Plaintext)
{
    if (Plaintext.IsEmpty()) return FString();

    FTCHARToUTF8 Converter(*Plaintext);
    TArray<uint8> Bytes((const uint8*)Converter.Get(), Converter.Length());

    for (uint8& Byte : Bytes)
    {
        Byte ^= GObfXorKey;
    }

    return FBase64::Encode(Bytes);
}

FString UGenAISettings::Deobfuscate(const FString& Obfuscated)
{
    if (Obfuscated.IsEmpty()) return FString();

    TArray<uint8> Bytes;
    if (!FBase64::Decode(Obfuscated, Bytes))
    {
        // Not base64 — assume it was stored as plaintext (migration path)
        return Obfuscated;
    }

    for (uint8& Byte : Bytes)
    {
        Byte ^= GObfXorKey;
    }

    Bytes.Add(0); // null terminator
    return FString(UTF8_TO_TCHAR((const char*)Bytes.GetData()));
}

// ─────────────────────────────────────────────────────────────────────────────
//  Setters
// ─────────────────────────────────────────────────────────────────────────────

void UGenAISettings::SetOpenAIKey(const FString& PlaintextKey)
{
    OpenAIKey_Obfuscated = Obfuscate(PlaintextKey);
    SaveConfig();
}

void UGenAISettings::SetAnthropicKey(const FString& PlaintextKey)
{
    AnthropicKey_Obfuscated = Obfuscate(PlaintextKey);
    SaveConfig();
}

void UGenAISettings::SetGoogleKey(const FString& PlaintextKey)
{
    GoogleKey_Obfuscated = Obfuscate(PlaintextKey);
    SaveConfig();
}

void UGenAISettings::SetDeepSeekKey(const FString& PlaintextKey)
{
    DeepSeekKey_Obfuscated = Obfuscate(PlaintextKey);
    SaveConfig();
}

void UGenAISettings::SetMistralKey(const FString& PlaintextKey)
{
    MistralKey_Obfuscated = Obfuscate(PlaintextKey);
    SaveConfig();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Getters
// ─────────────────────────────────────────────────────────────────────────────

FString UGenAISettings::GetOpenAIKey() const
{
    return Deobfuscate(OpenAIKey_Obfuscated);
}

FString UGenAISettings::GetAnthropicKey() const
{
    return Deobfuscate(AnthropicKey_Obfuscated);
}

FString UGenAISettings::GetGoogleKey() const
{
    return Deobfuscate(GoogleKey_Obfuscated);
}

FString UGenAISettings::GetDeepSeekKey() const
{
    return Deobfuscate(DeepSeekKey_Obfuscated);
}

FString UGenAISettings::GetMistralKey() const
{
    return Deobfuscate(MistralKey_Obfuscated);
}
