// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GenAITypes.h"
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

    // ─── Language ─────────────────────────────────────────────────────────────

    /**
     * Preferred language for AI responses.
     */
    UPROPERTY(Config, EditAnywhere, Category = "Language", meta = (DisplayName = "Preferred Language"))
    EGenAILanguage DefaultLanguage = EGenAILanguage::Ukrainian;

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

    // ─── Model Management ──────────────────────────────────────────────────────

    /**
     * Map of model IDs to their 'Enabled' status.
     * If a model is not here, it is enabled by default.
     */
    UPROPERTY(Config, EditAnywhere, Category = "Model Management", meta = (DisplayName = "Enabled Models"))
    TMap<FString, bool> EnabledModels;

    /**
     * Default model ID for general chat.
     */
    UPROPERTY(Config, EditAnywhere, Category = "Model Management", meta = (DisplayName = "Default Chat Model"))
    FString DefaultChatModelId = TEXT("gpt-4o");

    /**
     * Default model ID for code generation tools.
     */
    UPROPERTY(Config, EditAnywhere, Category = "Model Management", meta = (DisplayName = "Default Code Model"))
    FString DefaultCodeModelId = TEXT("claude-3-5-sonnet-20240620");

    /**
     * Aggressiveness / Temperature (0.0 to 2.0).
     * Lower values (0.2) make the model more deterministic/focused.
     * Higher values (0.8+) make it more creative/aggressive.
     */
    UPROPERTY(Config, EditAnywhere, Category = "Model Parameters", meta = (UIMin = "0.0", UIMax = "2.0", ClampMin = "0.0", ClampMax = "2.0", DisplayName = "Aggressiveness (Temperature)"))
    float Temperature = 0.7f;

    /**
     * Maximum response tokens for a single request.
     */
    UPROPERTY(Config, EditAnywhere, Category = "Model Parameters", meta = (UIMin = "1", UIMax = "128000", ClampMin = "1", ClampMax = "128000", DisplayName = "Max Tokens (Context Size Limit)"))
    int32 MaxTokens = 4096;

    /**
     * How many previous messages to keep in memory for context.
     */
    UPROPERTY(Config, EditAnywhere, Category = "Model Parameters", meta = (UIMin = "1", UIMax = "100", ClampMin = "1", ClampMax = "100", DisplayName = "Max Conversation History"))
    int32 MaxContextHistory = 20;

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
