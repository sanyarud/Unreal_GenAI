// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GenAITypes.h"

struct FGenOAIChatSettings;
struct FGenAnthropicChatSettings;
struct FGenGoogleChatSettings;
struct FGenOllamaChatSettings;

/**
 * Internal utility class — not exposed to Blueprints.
 * Provides JSON serialization helpers, model string resolution, and request building.
 */
class UU_GENAI_API FGenAIUtils
{
public:
    // ─── Model String Resolution ─────────────────────────────────────────────

    static FString OAIModelToString(EGenOAIModel Model);
    static FString AnthropicModelToString(EGenAnthropicModel Model);
    static FString GoogleModelToString(EGenGoogleModel Model);
    static FString DeepSeekModelToString(EGenDeepSeekModel Model);
    static FString MistralModelToString(EGenMistralModel Model);
    static FString OllamaModelToString(EGenOllamaModel Model);

    /** Returns ModelString if non-empty, otherwise converts the enum */
    static FString ResolveOAIModel(const FGenOAIChatSettings& Settings);
    static FString ResolveAnthropicModel(const FGenAnthropicChatSettings& Settings);
    static FString ResolveGoogleModel(const FGenGoogleChatSettings& Settings);
    static FString ResolveOllamaModel(const FGenOllamaChatSettings& Settings);

    static FString OAITTSModelToString(EGenOAITTSModel Model);
    static FString OAITTSVoiceToString(EGenOAITTSVoice Voice);
    static FString OAIAudioFormatToString(EGenOAIAudioFormat Format);
    static FString OAIImageModelToString(EGenOAIImageModel Model);
    static FString OAIImageSizeToString(EGenOAIImageSize Size);
    static FString OAIImageQualityToString(EGenOAIImageQuality Quality);
    static FString OAIImageStyleToString(EGenOAIImageStyle Style);
    static FString OAIImageResponseFormatToString(EGenOAIImageResponseFormat Format);
    static FString ChatRoleToString(EGenChatRole Role);
    static FString ToolChoiceToString(EGenToolChoice Choice);
    static FString GoogleTTSVoiceToString(EGenGoogleTTSVoice Voice, const FString& Custom);

    static EGenFinishReason ParseFinishReason(const FString& Str);

    // ─── API Key Resolution ──────────────────────────────────────────────────

    /** Returns override key if non-empty, otherwise reads from Project Settings */
    static FString GetOpenAIKey(const FString& Override);
    static FString GetAnthropicKey(const FString& Override);
    static FString GetGoogleKey(const FString& Override);
    static FString GetDeepSeekKey(const FString& Override);
    static FString GetMistralKey(const FString& Override);

    /** Returns the OpenAI base URL (custom or default) */
    static FString GetOpenAIBaseUrl();

    // ─── JSON Builders ───────────────────────────────────────────────────────

    /**
     * Build the "messages" JSON array for OpenAI/DeepSeek/Mistral/Ollama chat requests.
     */
    static TArray<TSharedPtr<FJsonValue>> BuildOAIMessages(
        const TArray<FGenChatMessage>& Messages,
        const FString& SystemPrompt);

    /**
     * Build the "messages" JSON array for Anthropic chat requests.
     */
    static TArray<TSharedPtr<FJsonValue>> BuildAnthropicMessages(
        const TArray<FGenChatMessage>& Messages);

    /**
     * Build the "contents" JSON array for Google Gemini requests.
     */
    static TArray<TSharedPtr<FJsonValue>> BuildGeminiContents(
        const TArray<FGenChatMessage>& Messages);

    /**
     * Build the "tools" JSON array for OpenAI tool/function calling.
     */
    static TArray<TSharedPtr<FJsonValue>> BuildOAITools(const TArray<FGenTool>& Tools);

    /**
     * Build the "tools" JSON array for Anthropic tool use.
     */
    static TArray<TSharedPtr<FJsonValue>> BuildAnthropicTools(const TArray<FGenTool>& Tools);

    // ─── Response Parsing ────────────────────────────────────────────────────

    /** Parse OpenAI chat completion response into FGenChatResponse */
    static FGenChatResponse ParseOAIChatResponse(const FString& JsonString);

    /** Parse Anthropic message response into FGenChatResponse */
    static FGenChatResponse ParseAnthropicChatResponse(const FString& JsonString);

    /** Parse Google Gemini response into FGenChatResponse */
    static FGenChatResponse ParseGoogleChatResponse(const FString& JsonString);

    /** Parse a single OpenAI SSE chunk line into FGenStreamDelta */
    static bool ParseOAIStreamChunk(const FString& Line, FGenStreamDelta& OutDelta);

    /** Parse a single Anthropic SSE event into FGenStreamDelta */
    static bool ParseAnthropicStreamChunk(const FString& EventLine, const FString& DataLine, FGenStreamDelta& OutDelta);

    /** Parse Google Gemini streaming chunk */
    static bool ParseGoogleStreamChunk(const FString& DataLine, FGenStreamDelta& OutDelta);

    /** Parse an Ollama streaming JSON chunk */
    static bool ParseOllamaStreamChunk(const FString& JsonLine, FGenStreamDelta& OutDelta);

    // ─── Logging ─────────────────────────────────────────────────────────────

    /**
     * Log request/response body.
     */
    static void LogRequest(const FString& Provider, const FString& Endpoint, const FString& Body);
    static void LogResponse(const FString& Provider, int32 StatusCode, const FString& Body);

    // ─── Misc ─────────────────────────────────────────────────────────────────

    /** Truncate long base64 strings in a JSON body for log output */
    static FString TruncateBase64ForLog(const FString& JsonBody, int32 MaxBase64Chars = 64);

    /** Serialize a TSharedPtr<FJsonObject> to compact string */
    static FString JsonObjectToString(const TSharedPtr<FJsonObject>& Obj);

    /** Try to parse a JSON string, returns nullptr on failure */
    static TSharedPtr<FJsonObject> ParseJsonString(const FString& JsonString);

    /** Combine enabled skills into a single system prompt instruction string */
    static FString GetSkillsPrompt(const FString& UserMessage);
};
