// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GenAITypes.generated.h"

UENUM(BlueprintType)
enum class EGenAILanguage : uint8
{
    Ukrainian   UMETA(DisplayName = "Ukrainian"),
    English     UMETA(DisplayName = "English")
};

// ─────────────────────────────────────────────
//  SKILLS & SMART ROUTING
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenAISkill
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Skill")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Skill")
    FString Description;

    /** The expert knowledge or instructions to prepend to the system prompt. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Skill", meta = (MultiLine = true))
    FString SystemPrompt;

    /** Optional: Keywords that trigger this skill automatically if they appear in user message. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Skill")
    TArray<FString> TriggerKeywords;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Skill")
    bool bIsEnabled = true;
};

USTRUCT(BlueprintType)
struct FGenAISmartRouting
{
    GENERATED_BODY()

    /** If enabled, detects intent (like 'write code') and switches to the Coding Model. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Routing")
    bool bEnableAutoRouting = false;

    /** Keywords that trigger routing to the Coding Model. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Routing")
    TArray<FString> CodingKeywords { TEXT("code"), TEXT("blueprint"), TEXT("function"), TEXT("class"), TEXT("write a") };

    /** Provider for coding tasks (e.g. "ollama", "openai"). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Routing")
    FString CodingProvider = TEXT("ollama");

    /** Model ID for coding tasks (e.g. "deepseek-r1"). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Routing")
    FString CodingModelId = TEXT("deepseek-r1");
};

// ─────────────────────────────────────────────
//  ENUMS
// ─────────────────────────────────────────────

UENUM(BlueprintType)
enum class EGenOAIModel : uint8
{
    GPT_4o             UMETA(DisplayName = "gpt-4o"),
    GPT_4o_Mini        UMETA(DisplayName = "gpt-4o-mini"),
    GPT_4_Turbo        UMETA(DisplayName = "gpt-4-turbo"),
    GPT_3_5_Turbo      UMETA(DisplayName = "gpt-3.5-turbo"),
    O1                 UMETA(DisplayName = "o1"),
    O1_Mini            UMETA(DisplayName = "o1-mini"),
    O1_Preview         UMETA(DisplayName = "o1-preview"),
    O3_Mini            UMETA(DisplayName = "o3-mini"),
    Custom             UMETA(DisplayName = "Custom (use ModelString)")
};

UENUM(BlueprintType)
enum class EGenAnthropicModel : uint8
{
    Claude_3_7_Sonnet        UMETA(DisplayName = "claude-3-7-sonnet-20250219"),
    Claude_3_5_Sonnet        UMETA(DisplayName = "claude-3-5-sonnet-20241022"),
    Claude_3_5_Haiku         UMETA(DisplayName = "claude-3-5-haiku-20241022"),
    Claude_3_Opus            UMETA(DisplayName = "claude-3-opus-20240229"),
    Claude_3_Sonnet          UMETA(DisplayName = "claude-3-sonnet-20240229"),
    Claude_3_Haiku           UMETA(DisplayName = "claude-3-haiku-20240307"),
    Custom                   UMETA(DisplayName = "Custom (use ModelString)")
};

UENUM(BlueprintType)
enum class EGenGoogleModel : uint8
{
    Gemini_2_0_Flash         UMETA(DisplayName = "gemini-2.0-flash"),
    Gemini_2_0_Flash_Lite    UMETA(DisplayName = "gemini-2.0-flash-lite"),
    Gemini_1_5_Pro           UMETA(DisplayName = "gemini-1.5-pro"),
    Gemini_1_5_Flash         UMETA(DisplayName = "gemini-1.5-flash"),
    Gemini_1_5_Flash_8B      UMETA(DisplayName = "gemini-1.5-flash-8b"),
    Custom                   UMETA(DisplayName = "Custom (use ModelString)")
};

UENUM(BlueprintType)
enum class EGenDeepSeekModel : uint8
{
    DeepSeek_Chat            UMETA(DisplayName = "deepseek-chat"),
    DeepSeek_Reasoner        UMETA(DisplayName = "deepseek-reasoner"),
    Custom                   UMETA(DisplayName = "Custom (use ModelString)")
};

UENUM(BlueprintType)
enum class EGenMistralModel : uint8
{
    Mistral_Large            UMETA(DisplayName = "mistral-large-latest"),
    Mistral_Small            UMETA(DisplayName = "mistral-small-latest"),
    Mixtral_8x7B             UMETA(DisplayName = "open-mixtral-8x7b"),
    Custom                   UMETA(DisplayName = "Custom (use ModelString)")
};
UENUM(BlueprintType)
enum class EGenOllamaModel : uint8
{
    DeepSeek_R1        UMETA(DisplayName = "deepseek-r1"),
    DeepSeek_V3        UMETA(DisplayName = "deepseek-v3"),
    Llama_3            UMETA(DisplayName = "llama3"),
    Mistral            UMETA(DisplayName = "mistral"),
    Custom             UMETA(DisplayName = "Custom (use ModelString)")
};

UENUM(BlueprintType)
enum class EGenChatRole : uint8
{
    System    UMETA(DisplayName = "system"),
    User      UMETA(DisplayName = "user"),
    Assistant UMETA(DisplayName = "assistant"),
    Tool      UMETA(DisplayName = "tool")
};

UENUM(BlueprintType)
enum class EGenContentType : uint8
{
    Text       UMETA(DisplayName = "text"),
    ImageUrl   UMETA(DisplayName = "image_url"),
    ImageBase64 UMETA(DisplayName = "image_base64 (auto-converted)")
};

UENUM(BlueprintType)
enum class EGenImageDetail : uint8
{
    Auto UMETA(DisplayName = "auto"),
    Low  UMETA(DisplayName = "low"),
    High UMETA(DisplayName = "high")
};

UENUM(BlueprintType)
enum class EGenOAITTSVoice : uint8
{
    Alloy   UMETA(DisplayName = "alloy"),
    Echo    UMETA(DisplayName = "echo"),
    Fable   UMETA(DisplayName = "fable"),
    Onyx    UMETA(DisplayName = "onyx"),
    Nova    UMETA(DisplayName = "nova"),
    Shimmer UMETA(DisplayName = "shimmer"),
    Coral   UMETA(DisplayName = "coral"),
    Verse   UMETA(DisplayName = "verse"),
    Ash     UMETA(DisplayName = "ash"),
    Ballad  UMETA(DisplayName = "ballad"),
    Sage    UMETA(DisplayName = "sage")
};

UENUM(BlueprintType)
enum class EGenOAITTSModel : uint8
{
    TTS_1    UMETA(DisplayName = "tts-1"),
    TTS_1_HD UMETA(DisplayName = "tts-1-hd"),
    GPT_4o_Mini_TTS UMETA(DisplayName = "gpt-4o-mini-tts")
};

UENUM(BlueprintType)
enum class EGenOAIAudioFormat : uint8
{
    MP3  UMETA(DisplayName = "mp3"),
    Opus UMETA(DisplayName = "opus"),
    AAC  UMETA(DisplayName = "aac"),
    FLAC UMETA(DisplayName = "flac"),
    WAV  UMETA(DisplayName = "wav"),
    PCM  UMETA(DisplayName = "pcm")
};

UENUM(BlueprintType)
enum class EGenOAIImageModel : uint8
{
    DallE_3     UMETA(DisplayName = "dall-e-3"),
    DallE_2     UMETA(DisplayName = "dall-e-2"),
    GPTImage_1  UMETA(DisplayName = "gpt-image-1")
};

UENUM(BlueprintType)
enum class EGenOAIImageSize : uint8
{
    Size_256x256    UMETA(DisplayName = "256x256"),
    Size_512x512    UMETA(DisplayName = "512x512"),
    Size_1024x1024  UMETA(DisplayName = "1024x1024"),
    Size_1792x1024  UMETA(DisplayName = "1792x1024 (landscape)"),
    Size_1024x1792  UMETA(DisplayName = "1024x1792 (portrait)")
};

UENUM(BlueprintType)
enum class EGenOAIImageQuality : uint8
{
    Standard UMETA(DisplayName = "standard"),
    HD       UMETA(DisplayName = "hd")
};

UENUM(BlueprintType)
enum class EGenOAIImageStyle : uint8
{
    Vivid   UMETA(DisplayName = "vivid"),
    Natural UMETA(DisplayName = "natural")
};

UENUM(BlueprintType)
enum class EGenOAIImageResponseFormat : uint8
{
    URL     UMETA(DisplayName = "url"),
    B64Json UMETA(DisplayName = "b64_json")
};

UENUM(BlueprintType)
enum class EGenGoogleTTSVoice : uint8
{
    en_US_Neural2_A UMETA(DisplayName = "en-US-Neural2-A"),
    en_US_Neural2_C UMETA(DisplayName = "en-US-Neural2-C"),
    en_US_Neural2_D UMETA(DisplayName = "en-US-Neural2-D"),
    en_US_Neural2_F UMETA(DisplayName = "en-US-Neural2-F"),
    en_US_Journey_D UMETA(DisplayName = "en-US-Journey-D"),
    en_US_Journey_F UMETA(DisplayName = "en-US-Journey-F"),
    Custom          UMETA(DisplayName = "Custom (use VoiceString)")
};

UENUM(BlueprintType)
enum class EGenToolChoice : uint8
{
    Auto     UMETA(DisplayName = "auto"),
    None     UMETA(DisplayName = "none"),
    Required UMETA(DisplayName = "required")
};

UENUM(BlueprintType)
enum class EGenFinishReason : uint8
{
    Stop         UMETA(DisplayName = "stop"),
    Length       UMETA(DisplayName = "length"),
    ToolCalls    UMETA(DisplayName = "tool_calls"),
    ContentFilter UMETA(DisplayName = "content_filter"),
    EndTurn      UMETA(DisplayName = "end_turn"),
    MaxTokens    UMETA(DisplayName = "max_tokens"),
    Unknown      UMETA(DisplayName = "unknown")
};

// ─────────────────────────────────────────────
//  VISION / CONTENT PARTS
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenChatImageUrl
{
    GENERATED_BODY()

    /** Full URL or data:image/jpeg;base64,... string */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Vision")
    FString Url;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Vision")
    EGenImageDetail Detail = EGenImageDetail::Auto;
};

USTRUCT(BlueprintType)
struct FGenChatContentPart
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Vision")
    EGenContentType Type = EGenContentType::Text;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Vision")
    FString Text;

    /** Used when Type == ImageUrl */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Vision")
    FGenChatImageUrl ImageUrl;
};

// ─────────────────────────────────────────────
//  CHAT MESSAGE
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenChatMessage
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Chat")
    EGenChatRole Role = EGenChatRole::User;

    /** Simple text content. If ContentParts is non-empty, this is ignored. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Chat")
    FString Content;

    /** Multimodal content parts (text + images). Overrides Content when non-empty. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Chat")
    TArray<FGenChatContentPart> ContentParts;

    /** Tool call ID — required when Role == Tool */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Chat")
    FString ToolCallId;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Chat")
    FString Name;
};

/**
 * A logical chat session containing message history.
 */
USTRUCT(BlueprintType)
struct FGenAIChatSession
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Chat")
    FString SessionId;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Chat")
    FString Title;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Chat")
    TArray<FGenChatMessage> History;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Chat")
    FDateTime LastUpdated;

    FGenAIChatSession() 
    { 
        SessionId = FGuid::NewGuid().ToString(); 
        LastUpdated = FDateTime::Now(); 
        Title = TEXT("New Chat"); 
    }
};

// ─────────────────────────────────────────────
//  FUNCTION / TOOL CALLING
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenToolFunction
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Tools")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Tools")
    FString Description;

    /**
     * JSON Schema string for the function parameters.
     * Example: {"type":"object","properties":{"location":{"type":"string"}},"required":["location"]}
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Tools")
    FString ParametersJsonSchema;
};

USTRUCT(BlueprintType)
struct FGenTool
{
    GENERATED_BODY()

    /** Always "function" for now */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Tools")
    FString Type = TEXT("function");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Tools")
    FGenToolFunction Function;
};

USTRUCT(BlueprintType)
struct FGenToolCall
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Tools")
    FString Id;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Tools")
    FString Type = TEXT("function");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Tools")
    FString FunctionName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Tools")
    FString FunctionArguments;
};

// ─────────────────────────────────────────────
//  OPENAI CHAT SETTINGS
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenOAIChatSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI")
    EGenOAIModel Model = EGenOAIModel::GPT_4o;

    /** Overrides Model enum when non-empty — use for new or custom model IDs */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI")
    FString ModelString;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI", meta = (ClampMin = "0.0", ClampMax = "2.0"))
    float Temperature = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI")
    int32 MaxTokens = 2048;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float TopP = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI", meta = (ClampMin = "-2.0", ClampMax = "2.0"))
    float FrequencyPenalty = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI", meta = (ClampMin = "-2.0", ClampMax = "2.0"))
    float PresencePenalty = 0.0f;

    /** Optional system message prepended automatically */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI")
    FString SystemPrompt;

    /** Seed for deterministic outputs (0 = disabled) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI")
    int32 Seed = 0;

    /** Stop sequences */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI")
    TArray<FString> Stop;

    /** Tools available to the model */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI")
    TArray<FGenTool> Tools;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI")
    EGenToolChoice ToolChoice = EGenToolChoice::Auto;

    /**
     * Enable structured JSON output. Provide the schema in StructuredOutputSchema.
     * Requires a model that supports response_format.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI")
    bool bStructuredOutput = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI")
    FString StructuredOutputName = TEXT("response");

    /** JSON Schema string for structured output */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI")
    FString StructuredOutputSchema;

    /** Override the API key for this request (leave empty to use Project Settings) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|OpenAI")
    FString ApiKeyOverride;
};

// ─────────────────────────────────────────────
//  ANTHROPIC CHAT SETTINGS
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenAnthropicChatSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Anthropic")
    EGenAnthropicModel Model = EGenAnthropicModel::Claude_3_7_Sonnet;

    /** Overrides Model enum when non-empty */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Anthropic")
    FString ModelString;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Anthropic")
    int32 MaxTokens = 2048;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Anthropic", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float Temperature = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Anthropic", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float TopP = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Anthropic")
    int32 TopK = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Anthropic")
    FString SystemPrompt;

    /** Tools available to the model */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Anthropic")
    TArray<FGenTool> Tools;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Anthropic")
    EGenToolChoice ToolChoice = EGenToolChoice::Auto;

    /** Override the API key for this request */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Anthropic")
    FString ApiKeyOverride;
};

// ─────────────────────────────────────────────
//  GOOGLE GEMINI CHAT SETTINGS
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenGoogleChatSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google")
    EGenGoogleModel Model = EGenGoogleModel::Gemini_2_0_Flash;

    /** Overrides Model enum when non-empty */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google")
    FString ModelString;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google", meta = (ClampMin = "0.0", ClampMax = "2.0"))
    float Temperature = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google")
    int32 MaxOutputTokens = 2048;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float TopP = 0.95f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google")
    int32 TopK = 40;

    /** System instruction for Gemini 1.5+ */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google")
    FString SystemInstruction;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google")
    TArray<FGenTool> Tools;

    /** Override the API key for this request */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google")
    FString ApiKeyOverride;
};

// ─────────────────────────────────────────────
//  OPENAI TTS SETTINGS
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenOAITTSSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|TTS")
    EGenOAITTSModel Model = EGenOAITTSModel::TTS_1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|TTS")
    EGenOAITTSVoice Voice = EGenOAITTSVoice::Alloy;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|TTS")
    EGenOAIAudioFormat ResponseFormat = EGenOAIAudioFormat::MP3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|TTS", meta = (ClampMin = "0.25", ClampMax = "4.0"))
    float Speed = 1.0f;

    /** Optional voice instructions (supported by gpt-4o-mini-tts) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|TTS")
    FString Instructions;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|TTS")
    FString ApiKeyOverride;
};

// ─────────────────────────────────────────────
//  OPENAI TRANSCRIPTION SETTINGS
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenOAITranscriptionSettings
{
    GENERATED_BODY()

    /** Currently only "whisper-1" is supported */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Transcription")
    FString Model = TEXT("whisper-1");

    /** BCP-47 language code e.g. "en". Leave empty for auto-detect. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Transcription")
    FString Language;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Transcription")
    FString Prompt;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Transcription", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float Temperature = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Transcription")
    FString ApiKeyOverride;
};

// ─────────────────────────────────────────────
//  OPENAI IMAGE GENERATION SETTINGS
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenOAIImageSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Image")
    EGenOAIImageModel Model = EGenOAIImageModel::DallE_3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Image")
    EGenOAIImageSize Size = EGenOAIImageSize::Size_1024x1024;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Image")
    EGenOAIImageQuality Quality = EGenOAIImageQuality::Standard;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Image")
    EGenOAIImageStyle Style = EGenOAIImageStyle::Vivid;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Image")
    EGenOAIImageResponseFormat ResponseFormat = EGenOAIImageResponseFormat::URL;

    /** Number of images to generate (1-10, dall-e-2 supports >1) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Image", meta = (ClampMin = "1", ClampMax = "10"))
    int32 N = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Image")
    FString ApiKeyOverride;
};

// ─────────────────────────────────────────────
//  GOOGLE TTS SETTINGS
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenGoogleTTSSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google TTS")
    EGenGoogleTTSVoice Voice = EGenGoogleTTSVoice::en_US_Neural2_A;

    /** Used when Voice == Custom */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google TTS")
    FString VoiceString;

    /** BCP-47 language code, e.g. "en-US" */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google TTS")
    FString LanguageCode = TEXT("en-US");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google TTS", meta = (ClampMin = "-20.0", ClampMax = "20.0"))
    float SpeakingRate = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google TTS", meta = (ClampMin = "-20.0", ClampMax = "20.0"))
    float Pitch = 0.0f;

    /** "MP3", "OGG_OPUS", "LINEAR16", "MULAW", "ALAW" */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google TTS")
    FString AudioEncoding = TEXT("MP3");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Google TTS")
    FString ApiKeyOverride;
};

// ─────────────────────────────────────────────
//  DEEPSEEK SETTINGS (OpenAI-compatible)
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenDeepSeekChatSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|DeepSeek")
    EGenDeepSeekModel Model = EGenDeepSeekModel::DeepSeek_Chat;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|DeepSeek")
    FString ModelString;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|DeepSeek", meta = (ClampMin = "0.0", ClampMax = "2.0"))
    float Temperature = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|DeepSeek")
    int32 MaxTokens = 2048;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|DeepSeek")
    FString SystemPrompt;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|DeepSeek")
    FString ApiKeyOverride;
};

// ─────────────────────────────────────────────
//  MISTRAL SETTINGS (OpenAI-compatible)
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenMistralChatSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Mistral")
    EGenMistralModel Model = EGenMistralModel::Mistral_Large;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Mistral")
    FString ModelString;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Mistral", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float Temperature = 0.7f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Mistral")
    int32 MaxTokens = 2048;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Mistral")
    FString SystemPrompt;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Mistral")
    FString ApiKeyOverride;
};

// ─────────────────────────────────────────────
//  OLLAMA SETTINGS (Local)
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenOllamaChatSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Ollama")
    EGenOllamaModel Model = EGenOllamaModel::DeepSeek_R1;

    /** Overrides Model enum when non-empty */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Ollama")
    FString ModelString;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Ollama", meta = (ClampMin = "0.0", ClampMax = "2.0"))
    float Temperature = 0.7f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Ollama")
    int32 MaxTokens = 2048;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Ollama")
    FString SystemPrompt;

    /** Base URL for Ollama (default is http://localhost:11434) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenAI|Ollama")
    FString BaseUrl = TEXT("http://localhost:11434");
};

// ─────────────────────────────────────────────
//  RESPONSE TYPES
// ─────────────────────────────────────────────

USTRUCT(BlueprintType)
struct FGenChatResponse
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Response")
    FString Content;

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Response")
    EGenFinishReason FinishReason = EGenFinishReason::Unknown;

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Response")
    TArray<FGenToolCall> ToolCalls;

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Response")
    FString Model;

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Response")
    int32 PromptTokens = 0;

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Response")
    int32 CompletionTokens = 0;

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Response")
    int32 TotalTokens = 0;
};

USTRUCT(BlueprintType)
struct FGenStreamDelta
{
    GENERATED_BODY()

    /** Incremental text content for this chunk */
    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Stream")
    FString ContentDelta;

    /** Full accumulated content so far */
    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Stream")
    FString ContentAccumulated;

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Stream")
    EGenFinishReason FinishReason = EGenFinishReason::Unknown;

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Stream")
    bool bIsDone = false;

    /** Partial tool call data (streaming tool calls) */
    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Stream")
    FString ToolCallId;

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Stream")
    FString ToolCallFunctionName;

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Stream")
    FString ToolCallArgumentsDelta;
};

USTRUCT(BlueprintType)
struct FGenImageResult
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Image")
    FString Url;

    /** Base64-encoded image data (when ResponseFormat == B64Json) */
    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Image")
    FString B64Json;

    /** DALL-E 3 may revise your prompt */
    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Image")
    FString RevisedPrompt;
};

USTRUCT(BlueprintType)
struct FGenModelInfo
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Models")
    FString Id;

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Models")
    FString OwnedBy;

    UPROPERTY(BlueprintReadOnly, Category = "GenAI|Models")
    int64 Created = 0;
};
