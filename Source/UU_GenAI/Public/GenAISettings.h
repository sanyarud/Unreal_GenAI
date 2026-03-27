// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GenAISettings.generated.h"

/**
 * Project Settings > Plugins > GenAI Plugin
 *
 * API keys are stored obfuscated (XOR + Base64) to avoid plaintext in config files.
 * For production use, consider a proxy server approach — see Authentication & Security docs.
 */
UCLASS(Config = Engine, DefaultConfig, meta = (DisplayName = "GenAI Plugin"))
class UU_GENAI_API UGenAISettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    UGenAISettings();

    // ─── OpenAI ───────────────────────────────────────────────────────────────

    /**
     * Your OpenAI API key (sk-...).
     * Stored obfuscated. Set via Project Settings or UGenAISettings::SetOpenAIKey().
     */
    UPROPERTY(Config, EditAnywhere, Category = "OpenAI", meta = (DisplayName = "OpenAI API Key"))
    FString OpenAIKey_Obfuscated;

    /**
     * Custom base URL for OpenAI-compatible endpoints.
     * Leave empty to use the official OpenAI API (https://api.openai.com/v1).
     */
    UPROPERTY(Config, EditAnywhere, Category = "OpenAI", meta = (DisplayName = "OpenAI Base URL Override"))
    FString OpenAIBaseUrl;

    // ─── Anthropic ────────────────────────────────────────────────────────────

    UPROPERTY(Config, EditAnywhere, Category = "Anthropic", meta = (DisplayName = "Anthropic API Key"))
    FString AnthropicKey_Obfuscated;

    UPROPERTY(Config, EditAnywhere, Category = "Anthropic", meta = (DisplayName = "Anthropic API Version"))
    FString AnthropicApiVersion = TEXT("2023-06-01");

    // ─── Google ───────────────────────────────────────────────────────────────

    UPROPERTY(Config, EditAnywhere, Category = "Google", meta = (DisplayName = "Google AI API Key"))
    FString GoogleKey_Obfuscated;

    // ─── DeepSeek ─────────────────────────────────────────────────────────────

    UPROPERTY(Config, EditAnywhere, Category = "DeepSeek", meta = (DisplayName = "DeepSeek API Key"))
    FString DeepSeekKey_Obfuscated;

    UPROPERTY(Config, EditAnywhere, Category = "Mistral", meta = (DisplayName = "Mistral API Key"))
    FString MistralKey_Obfuscated;

    // ─── Ollama ───────────────────────────────────────────────────────────────

    /**
     * Local Ollama server URL (e.g. http://localhost:11434).
     */
    UPROPERTY(Config, EditAnywhere, Category = "Ollama", meta = (DisplayName = "Ollama Base URL"))
    FString OllamaBaseUrl = TEXT("http://localhost:11434");

    // ─── Proxy ────────────────────────────────────────────────────────────────

    /**
     * Optional proxy server URL.
     * When set, all API requests are routed through this proxy.
     * Useful for team environments where you want to centralize API key management.
     * Example: https://my-proxy.example.com/api
     */
    UPROPERTY(Config, EditAnywhere, Category = "Proxy", meta = (DisplayName = "Proxy URL"))
    FString ProxyUrl;

    UPROPERTY(Config, EditAnywhere, Category = "Proxy", meta = (DisplayName = "Proxy Auth Header"))
    FString ProxyAuthHeader;

    // ─── Debugging ────────────────────────────────────────────────────────────

    /**
     * Enable extended request/response logging.
     * Base64 image data is truncated to avoid flooding the output log.
     */
    UPROPERTY(Config, EditAnywhere, Category = "Debugging", meta = (DisplayName = "Enable Extended Logging"))
    bool bExtendedLogging = false;

    // ─── Skills ───────────────────────────────────────────────────────────────

    /**
     * List of expert skills (expert knowledge/instructions) available to the models.
     */
    UPROPERTY(Config, EditAnywhere, Category = "Skills", meta = (DisplayName = "Installed Skills"))
    TArray<FGenAISkill> Skills;

    // ─── Smart Routing ────────────────────────────────────────────────────────

    /**
     * Automatic task delegation based on input intent.
     */
    UPROPERTY(Config, EditAnywhere, Category = "Smart Routing")
    FGenAISmartRouting SmartRouting;

    // ─── Helpers ─────────────────────────────────────────────────────────────

    /** Retrieve the raw (decoded) OpenAI API key */
    FString GetOpenAIKey() const;
    /** Retrieve the raw (decoded) Anthropic API key */
    FString GetAnthropicKey() const;
    /** Retrieve the raw (decoded) Google API key */
    FString GetGoogleKey() const;
    /** Retrieve the raw (decoded) DeepSeek API key */
    FString GetDeepSeekKey() const;
    /** Retrieve the raw (decoded) Mistral API key */
    FString GetMistralKey() const;

    /** Store the OpenAI key obfuscated */
    UFUNCTION(BlueprintCallable, Category = "GenAI|Settings")
    void SetOpenAIKey(const FString& PlaintextKey);

    UFUNCTION(BlueprintCallable, Category = "GenAI|Settings")
    void SetAnthropicKey(const FString& PlaintextKey);

    UFUNCTION(BlueprintCallable, Category = "GenAI|Settings")
    void SetGoogleKey(const FString& PlaintextKey);

    UFUNCTION(BlueprintCallable, Category = "GenAI|Settings")
    void SetDeepSeekKey(const FString& PlaintextKey);

    UFUNCTION(BlueprintCallable, Category = "GenAI|Settings")
    void SetMistralKey(const FString& PlaintextKey);

    // ─── UDeveloperSettings interface ────────────────────────────────────────

    virtual FName GetCategoryName() const override { return TEXT("Plugins"); }

private:
    static FString Obfuscate(const FString& Plaintext);
    static FString Deobfuscate(const FString& Obfuscated);
};
