// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "GenAIUtils.h"
#include "GenAISettings.h"
#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

// ─────────────────────────────────────────────────────────────────────────────
//  Model String Resolution
// ─────────────────────────────────────────────────────────────────────────────

FString FGenAIUtils::OAIModelToString(EGenOAIModel Model)
{
    switch (Model)
    {
    case EGenOAIModel::GPT_4o:         return TEXT("gpt-4o");
    case EGenOAIModel::GPT_4o_Mini:    return TEXT("gpt-4o-mini");
    case EGenOAIModel::GPT_4_Turbo:    return TEXT("gpt-4-turbo");
    case EGenOAIModel::GPT_3_5_Turbo:  return TEXT("gpt-3.5-turbo");
    case EGenOAIModel::O1:             return TEXT("o1");
    case EGenOAIModel::O1_Mini:        return TEXT("o1-mini");
    case EGenOAIModel::O1_Preview:     return TEXT("o1-preview");
    case EGenOAIModel::O3_Mini:        return TEXT("o3-mini");
    default:                           return TEXT("gpt-4o");
    }
}

FString FGenAIUtils::AnthropicModelToString(EGenAnthropicModel Model)
{
    switch (Model)
    {
    case EGenAnthropicModel::Claude_3_7_Sonnet: return TEXT("claude-3-7-sonnet-20250219");
    case EGenAnthropicModel::Claude_3_5_Sonnet: return TEXT("claude-3-5-sonnet-20241022");
    case EGenAnthropicModel::Claude_3_5_Haiku:  return TEXT("claude-3-5-haiku-20241022");
    case EGenAnthropicModel::Claude_3_Opus:     return TEXT("claude-3-opus-20240229");
    case EGenAnthropicModel::Claude_3_Sonnet:   return TEXT("claude-3-sonnet-20240229");
    case EGenAnthropicModel::Claude_3_Haiku:    return TEXT("claude-3-haiku-20240307");
    default:                                    return TEXT("claude-3-5-sonnet-20241022");
    }
}

FString FGenAIUtils::GoogleModelToString(EGenGoogleModel Model)
{
    switch (Model)
    {
    case EGenGoogleModel::Gemini_2_0_Flash:      return TEXT("gemini-2.0-flash");
    case EGenGoogleModel::Gemini_2_0_Flash_Lite: return TEXT("gemini-2.0-flash-lite");
    case EGenGoogleModel::Gemini_1_5_Pro:        return TEXT("gemini-1.5-pro");
    case EGenGoogleModel::Gemini_1_5_Flash:      return TEXT("gemini-1.5-flash");
    case EGenGoogleModel::Gemini_1_5_Flash_8B:   return TEXT("gemini-1.5-flash-8b");
    default:                                     return TEXT("gemini-2.0-flash");
    }
}

FString FGenAIUtils::DeepSeekModelToString(EGenDeepSeekModel Model)
{
    switch (Model)
    {
    case EGenDeepSeekModel::DeepSeek_Chat:     return TEXT("deepseek-chat");
    case EGenDeepSeekModel::DeepSeek_Reasoner: return TEXT("deepseek-reasoner");
    default:                                   return TEXT("deepseek-chat");
    }
}

FString FGenAIUtils::MistralModelToString(EGenMistralModel Model)
{
    switch (Model)
    {
    case EGenMistralModel::Mistral_Large: return TEXT("mistral-large-latest");
    case EGenMistralModel::Mistral_Small: return TEXT("mistral-small-latest");
    case EGenMistralModel::Mixtral_8x7B:  return TEXT("open-mixtral-8x7b");
    default:                             return TEXT("mistral-large-latest");
    }
}

FString FGenAIUtils::OllamaModelToString(EGenOllamaModel Model)
{
    switch (Model)
    {
    case EGenOllamaModel::DeepSeek_R1: return TEXT("deepseek-r1");
    case EGenOllamaModel::DeepSeek_V3: return TEXT("deepseek-v3");
    case EGenOllamaModel::Llama_3:     return TEXT("llama3");
    case EGenOllamaModel::Mistral:     return TEXT("mistral");
    default:                          return TEXT("deepseek-r1");
    }
}

FString FGenAIUtils::ResolveOAIModel(const FGenOAIChatSettings& Settings)
{
    return Settings.ModelString.IsEmpty() ? OAIModelToString(Settings.Model) : Settings.ModelString;
}

FString FGenAIUtils::ResolveAnthropicModel(const FGenAnthropicChatSettings& Settings)
{
    return Settings.ModelString.IsEmpty() ? AnthropicModelToString(Settings.Model) : Settings.ModelString;
}

FString FGenAIUtils::ResolveGoogleModel(const FGenGoogleChatSettings& Settings)
{
    return Settings.ModelString.IsEmpty() ? GoogleModelToString(Settings.Model) : Settings.ModelString;
}

FString FGenAIUtils::ResolveOllamaModel(const FGenOllamaChatSettings& Settings)
{
    return Settings.ModelString.IsEmpty() ? OllamaModelToString(Settings.Model) : Settings.ModelString;
}

FString FGenAIUtils::OAITTSModelToString(EGenOAITTSModel Model)
{
    switch (Model)
    {
    case EGenOAITTSModel::TTS_1:           return TEXT("tts-1");
    case EGenOAITTSModel::TTS_1_HD:        return TEXT("tts-1-hd");
    case EGenOAITTSModel::GPT_4o_Mini_TTS: return TEXT("gpt-4o-mini-tts");
    default:                               return TEXT("tts-1");
    }
}

FString FGenAIUtils::OAITTSVoiceToString(EGenOAITTSVoice Voice)
{
    switch (Voice)
    {
    case EGenOAITTSVoice::Alloy:   return TEXT("alloy");
    case EGenOAITTSVoice::Echo:    return TEXT("echo");
    case EGenOAITTSVoice::Fable:   return TEXT("fable");
    case EGenOAITTSVoice::Onyx:    return TEXT("onyx");
    case EGenOAITTSVoice::Nova:    return TEXT("nova");
    case EGenOAITTSVoice::Shimmer: return TEXT("shimmer");
    case EGenOAITTSVoice::Coral:   return TEXT("coral");
    case EGenOAITTSVoice::Verse:   return TEXT("verse");
    case EGenOAITTSVoice::Ash:     return TEXT("ash");
    case EGenOAITTSVoice::Ballad:  return TEXT("ballad");
    case EGenOAITTSVoice::Sage:    return TEXT("sage");
    default:                       return TEXT("alloy");
    }
}

FString FGenAIUtils::OAIAudioFormatToString(EGenOAIAudioFormat Format)
{
    switch (Format)
    {
    case EGenOAIAudioFormat::MP3:  return TEXT("mp3");
    case EGenOAIAudioFormat::Opus: return TEXT("opus");
    case EGenOAIAudioFormat::AAC:  return TEXT("aac");
    case EGenOAIAudioFormat::FLAC: return TEXT("flac");
    case EGenOAIAudioFormat::WAV:  return TEXT("wav");
    case EGenOAIAudioFormat::PCM:  return TEXT("pcm");
    default:                       return TEXT("mp3");
    }
}

FString FGenAIUtils::OAIImageModelToString(EGenOAIImageModel Model)
{
    switch (Model)
    {
    case EGenOAIImageModel::DallE_3:    return TEXT("dall-e-3");
    case EGenOAIImageModel::DallE_2:    return TEXT("dall-e-2");
    case EGenOAIImageModel::GPTImage_1: return TEXT("gpt-image-1");
    default:                            return TEXT("dall-e-3");
    }
}

FString FGenAIUtils::OAIImageSizeToString(EGenOAIImageSize Size)
{
    switch (Size)
    {
    case EGenOAIImageSize::Size_256x256:   return TEXT("256x256");
    case EGenOAIImageSize::Size_512x512:   return TEXT("512x512");
    case EGenOAIImageSize::Size_1024x1024: return TEXT("1024x1024");
    case EGenOAIImageSize::Size_1792x1024: return TEXT("1792x1024");
    case EGenOAIImageSize::Size_1024x1792: return TEXT("1024x1792");
    default:                               return TEXT("1024x1024");
    }
}

FString FGenAIUtils::OAIImageQualityToString(EGenOAIImageQuality Quality)
{
    return Quality == EGenOAIImageQuality::HD ? TEXT("hd") : TEXT("standard");
}

FString FGenAIUtils::OAIImageStyleToString(EGenOAIImageStyle Style)
{
    return Style == EGenOAIImageStyle::Natural ? TEXT("natural") : TEXT("vivid");
}

FString FGenAIUtils::OAIImageResponseFormatToString(EGenOAIImageResponseFormat Format)
{
    return Format == EGenOAIImageResponseFormat::B64Json ? TEXT("b64_json") : TEXT("url");
}

FString FGenAIUtils::ChatRoleToString(EGenChatRole Role)
{
    switch (Role)
    {
    case EGenChatRole::System:    return TEXT("system");
    case EGenChatRole::User:      return TEXT("user");
    case EGenChatRole::Assistant: return TEXT("assistant");
    case EGenChatRole::Tool:      return TEXT("tool");
    default:                      return TEXT("user");
    }
}

FString FGenAIUtils::ToolChoiceToString(EGenToolChoice Choice)
{
    switch (Choice)
    {
    case EGenToolChoice::None:     return TEXT("none");
    case EGenToolChoice::Required: return TEXT("required");
    default:                       return TEXT("auto");
    }
}

FString FGenAIUtils::GoogleTTSVoiceToString(EGenGoogleTTSVoice Voice, const FString& Custom)
{
    if (Voice == EGenGoogleTTSVoice::Custom) return Custom;
    switch (Voice)
    {
    case EGenGoogleTTSVoice::en_US_Neural2_A: return TEXT("en-US-Neural2-A");
    case EGenGoogleTTSVoice::en_US_Neural2_C: return TEXT("en-US-Neural2-C");
    case EGenGoogleTTSVoice::en_US_Neural2_D: return TEXT("en-US-Neural2-D");
    case EGenGoogleTTSVoice::en_US_Neural2_F: return TEXT("en-US-Neural2-F");
    case EGenGoogleTTSVoice::en_US_Journey_D: return TEXT("en-US-Journey-D");
    case EGenGoogleTTSVoice::en_US_Journey_F: return TEXT("en-US-Journey-F");
    default:                                  return TEXT("en-US-Neural2-A");
    }
}

EGenFinishReason FGenAIUtils::ParseFinishReason(const FString& Str)
{
    if (Str == TEXT("stop"))           return EGenFinishReason::Stop;
    if (Str == TEXT("length"))         return EGenFinishReason::Length;
    if (Str == TEXT("tool_calls"))     return EGenFinishReason::ToolCalls;
    if (Str == TEXT("content_filter")) return EGenFinishReason::ContentFilter;
    if (Str == TEXT("end_turn"))       return EGenFinishReason::EndTurn;
    if (Str == TEXT("max_tokens"))     return EGenFinishReason::MaxTokens;
    return EGenFinishReason::Unknown;
}

// ─────────────────────────────────────────────────────────────────────────────
//  API Key Resolution
// ─────────────────────────────────────────────────────────────────────────────

static const UGenAISettings* GetSettings()
{
    return GetDefault<UGenAISettings>();
}

FString FGenAIUtils::GetOpenAIKey(const FString& Override)
{
    if (!Override.IsEmpty()) return Override;
    const UGenAISettings* S = GetSettings();
    return S ? S->GetOpenAIKey() : FString();
}

FString FGenAIUtils::GetAnthropicKey(const FString& Override)
{
    if (!Override.IsEmpty()) return Override;
    const UGenAISettings* S = GetSettings();
    return S ? S->GetAnthropicKey() : FString();
}

FString FGenAIUtils::GetGoogleKey(const FString& Override)
{
    if (!Override.IsEmpty()) return Override;
    const UGenAISettings* S = GetSettings();
    return S ? S->GetGoogleKey() : FString();
}

FString FGenAIUtils::GetDeepSeekKey(const FString& Override)
{
    if (!Override.IsEmpty()) return Override;
    const UGenAISettings* S = GetSettings();
    return S ? S->GetDeepSeekKey() : FString();
}

FString FGenAIUtils::GetMistralKey(const FString& Override)
{
    if (!Override.IsEmpty()) return Override;
    const UGenAISettings* S = GetSettings();
    return S ? S->GetMistralKey() : FString();
}

FString FGenAIUtils::GetOpenAIBaseUrl()
{
    const UGenAISettings* S = GetSettings();
    if (S && !S->OpenAIBaseUrl.IsEmpty())
    {
        return S->OpenAIBaseUrl;
    }
    return TEXT("https://api.openai.com/v1");
}

// ─────────────────────────────────────────────────────────────────────────────
//  JSON Builders
// ─────────────────────────────────────────────────────────────────────────────

static TSharedPtr<FJsonObject> BuildContentPartJson(const FGenChatContentPart& Part)
{
    TSharedPtr<FJsonObject> Obj = MakeShared<FJsonObject>();
    switch (Part.Type)
    {
    case EGenContentType::Text:
        Obj->SetStringField(TEXT("type"), TEXT("text"));
        Obj->SetStringField(TEXT("text"), Part.Text);
        break;
    case EGenContentType::ImageUrl:
    case EGenContentType::ImageBase64:
    {
        Obj->SetStringField(TEXT("type"), TEXT("image_url"));
        TSharedPtr<FJsonObject> ImgObj = MakeShared<FJsonObject>();
        ImgObj->SetStringField(TEXT("url"), Part.ImageUrl.Url);
        FString Detail;
        switch (Part.ImageUrl.Detail)
        {
        case EGenImageDetail::Low:  Detail = TEXT("low");  break;
        case EGenImageDetail::High: Detail = TEXT("high"); break;
        default:                    Detail = TEXT("auto"); break;
        }
        ImgObj->SetStringField(TEXT("detail"), Detail);
        Obj->SetObjectField(TEXT("image_url"), ImgObj);
        break;
    }
    }
    return Obj;
}

TArray<TSharedPtr<FJsonValue>> FGenAIUtils::BuildOAIMessages(
    const TArray<FGenChatMessage>& Messages,
    const FString& SystemPrompt)
{
    TArray<TSharedPtr<FJsonValue>> Result;

    if (!SystemPrompt.IsEmpty())
    {
        TSharedPtr<FJsonObject> SysMsg = MakeShared<FJsonObject>();
        SysMsg->SetStringField(TEXT("role"), TEXT("system"));
        SysMsg->SetStringField(TEXT("content"), SystemPrompt);
        Result.Add(MakeShared<FJsonValueObject>(SysMsg));
    }

    for (const FGenChatMessage& Msg : Messages)
    {
        TSharedPtr<FJsonObject> MsgObj = MakeShared<FJsonObject>();
        MsgObj->SetStringField(TEXT("role"), ChatRoleToString(Msg.Role));

        if (Msg.Role == EGenChatRole::Tool)
        {
            MsgObj->SetStringField(TEXT("content"), Msg.Content);
            MsgObj->SetStringField(TEXT("tool_call_id"), Msg.ToolCallId);
        }
        else if (Msg.ContentParts.Num() > 0)
        {
            TArray<TSharedPtr<FJsonValue>> Parts;
            for (const FGenChatContentPart& Part : Msg.ContentParts)
            {
                Parts.Add(MakeShared<FJsonValueObject>(BuildContentPartJson(Part)));
            }
            MsgObj->SetArrayField(TEXT("content"), Parts);
        }
        else
        {
            MsgObj->SetStringField(TEXT("content"), Msg.Content);
        }

        if (!Msg.Name.IsEmpty())
        {
            MsgObj->SetStringField(TEXT("name"), Msg.Name);
        }

        Result.Add(MakeShared<FJsonValueObject>(MsgObj));
    }

    return Result;
}

TArray<TSharedPtr<FJsonValue>> FGenAIUtils::BuildAnthropicMessages(
    const TArray<FGenChatMessage>& Messages)
{
    TArray<TSharedPtr<FJsonValue>> Result;

    for (const FGenChatMessage& Msg : Messages)
    {
        if (Msg.Role == EGenChatRole::System) continue; // system goes in top-level field

        TSharedPtr<FJsonObject> MsgObj = MakeShared<FJsonObject>();

        FString RoleStr = (Msg.Role == EGenChatRole::Assistant) ? TEXT("assistant") : TEXT("user");
        MsgObj->SetStringField(TEXT("role"), RoleStr);

        if (Msg.ContentParts.Num() > 0)
        {
            TArray<TSharedPtr<FJsonValue>> Parts;
            for (const FGenChatContentPart& Part : Msg.ContentParts)
            {
                TSharedPtr<FJsonObject> PartObj = MakeShared<FJsonObject>();
                if (Part.Type == EGenContentType::Text)
                {
                    PartObj->SetStringField(TEXT("type"), TEXT("text"));
                    PartObj->SetStringField(TEXT("text"), Part.Text);
                }
                else
                {
                    PartObj->SetStringField(TEXT("type"), TEXT("image"));
                    TSharedPtr<FJsonObject> SourceObj = MakeShared<FJsonObject>();
                    if (Part.ImageUrl.Url.StartsWith(TEXT("data:")))
                    {
                        FString MediaType, Data;
                        Part.ImageUrl.Url.Split(TEXT(";base64,"), &MediaType, &Data);
                        MediaType = MediaType.Replace(TEXT("data:"), TEXT(""));
                        SourceObj->SetStringField(TEXT("type"), TEXT("base64"));
                        SourceObj->SetStringField(TEXT("media_type"), MediaType);
                        SourceObj->SetStringField(TEXT("data"), Data);
                    }
                    else
                    {
                        SourceObj->SetStringField(TEXT("type"), TEXT("url"));
                        SourceObj->SetStringField(TEXT("url"), Part.ImageUrl.Url);
                    }
                    PartObj->SetObjectField(TEXT("source"), SourceObj);
                }
                Parts.Add(MakeShared<FJsonValueObject>(PartObj));
            }
            MsgObj->SetArrayField(TEXT("content"), Parts);
        }
        else if (Msg.Role == EGenChatRole::Tool)
        {
            TArray<TSharedPtr<FJsonValue>> Parts;
            TSharedPtr<FJsonObject> ToolResult = MakeShared<FJsonObject>();
            ToolResult->SetStringField(TEXT("type"), TEXT("tool_result"));
            ToolResult->SetStringField(TEXT("tool_use_id"), Msg.ToolCallId);
            ToolResult->SetStringField(TEXT("content"), Msg.Content);
            Parts.Add(MakeShared<FJsonValueObject>(ToolResult));
            MsgObj->SetArrayField(TEXT("content"), Parts);
        }
        else
        {
            MsgObj->SetStringField(TEXT("content"), Msg.Content);
        }

        Result.Add(MakeShared<FJsonValueObject>(MsgObj));
    }

    return Result;
}

TArray<TSharedPtr<FJsonValue>> FGenAIUtils::BuildGeminiContents(
    const TArray<FGenChatMessage>& Messages)
{
    TArray<TSharedPtr<FJsonValue>> Result;

    for (const FGenChatMessage& Msg : Messages)
    {
        if (Msg.Role == EGenChatRole::System) continue;

        TSharedPtr<FJsonObject> ContentObj = MakeShared<FJsonObject>();
        FString RoleStr = (Msg.Role == EGenChatRole::Assistant) ? TEXT("model") : TEXT("user");
        ContentObj->SetStringField(TEXT("role"), RoleStr);

        TArray<TSharedPtr<FJsonValue>> Parts;

        if (Msg.ContentParts.Num() > 0)
        {
            for (const FGenChatContentPart& Part : Msg.ContentParts)
            {
                TSharedPtr<FJsonObject> PartObj = MakeShared<FJsonObject>();
                if (Part.Type == EGenContentType::Text)
                {
                    PartObj->SetStringField(TEXT("text"), Part.Text);
                }
                else
                {
                    TSharedPtr<FJsonObject> InlineData = MakeShared<FJsonObject>();
                    if (Part.ImageUrl.Url.StartsWith(TEXT("data:")))
                    {
                        FString MediaType, Data;
                        Part.ImageUrl.Url.Split(TEXT(";base64,"), &MediaType, &Data);
                        MediaType = MediaType.Replace(TEXT("data:"), TEXT(""));
                        InlineData->SetStringField(TEXT("mime_type"), MediaType);
                        InlineData->SetStringField(TEXT("data"), Data);
                        PartObj->SetObjectField(TEXT("inline_data"), InlineData);
                    }
                    else
                    {
                        TSharedPtr<FJsonObject> FileData = MakeShared<FJsonObject>();
                        FileData->SetStringField(TEXT("file_uri"), Part.ImageUrl.Url);
                        PartObj->SetObjectField(TEXT("file_data"), FileData);
                    }
                }
                Parts.Add(MakeShared<FJsonValueObject>(PartObj));
            }
        }
        else
        {
            TSharedPtr<FJsonObject> PartObj = MakeShared<FJsonObject>();
            PartObj->SetStringField(TEXT("text"), Msg.Content);
            Parts.Add(MakeShared<FJsonValueObject>(PartObj));
        }

        ContentObj->SetArrayField(TEXT("parts"), Parts);
        Result.Add(MakeShared<FJsonValueObject>(ContentObj));
    }

    return Result;
}

TArray<TSharedPtr<FJsonValue>> FGenAIUtils::BuildOAITools(const TArray<FGenTool>& Tools)
{
    TArray<TSharedPtr<FJsonValue>> Result;
    for (const FGenTool& Tool : Tools)
    {
        TSharedPtr<FJsonObject> ToolObj = MakeShared<FJsonObject>();
        ToolObj->SetStringField(TEXT("type"), TEXT("function"));

        TSharedPtr<FJsonObject> FuncObj = MakeShared<FJsonObject>();
        FuncObj->SetStringField(TEXT("name"), Tool.Function.Name);
        FuncObj->SetStringField(TEXT("description"), Tool.Function.Description);

        if (!Tool.Function.ParametersJsonSchema.IsEmpty())
        {
            TSharedPtr<FJsonObject> ParamsObj = ParseJsonString(Tool.Function.ParametersJsonSchema);
            if (ParamsObj.IsValid())
            {
                FuncObj->SetObjectField(TEXT("parameters"), ParamsObj);
            }
        }

        ToolObj->SetObjectField(TEXT("function"), FuncObj);
        Result.Add(MakeShared<FJsonValueObject>(ToolObj));
    }
    return Result;
}

TArray<TSharedPtr<FJsonValue>> FGenAIUtils::BuildAnthropicTools(const TArray<FGenTool>& Tools)
{
    TArray<TSharedPtr<FJsonValue>> Result;
    for (const FGenTool& Tool : Tools)
    {
        TSharedPtr<FJsonObject> ToolObj = MakeShared<FJsonObject>();
        ToolObj->SetStringField(TEXT("name"), Tool.Function.Name);
        ToolObj->SetStringField(TEXT("description"), Tool.Function.Description);

        if (!Tool.Function.ParametersJsonSchema.IsEmpty())
        {
            TSharedPtr<FJsonObject> SchemaObj = ParseJsonString(Tool.Function.ParametersJsonSchema);
            if (SchemaObj.IsValid())
            {
                ToolObj->SetObjectField(TEXT("input_schema"), SchemaObj);
            }
        }

        Result.Add(MakeShared<FJsonValueObject>(ToolObj));
    }
    return Result;
}

FGenChatResponse FGenAIUtils::ParseOAIChatResponse(const FString& JsonString)
{
    FGenChatResponse Response;
    TSharedPtr<FJsonObject> Root = ParseJsonString(JsonString);
    if (!Root.IsValid()) return Response;

    const TArray<TSharedPtr<FJsonValue>>* Choices;
    if (!Root->TryGetArrayField(TEXT("choices"), Choices) || Choices->Num() == 0)
        return Response;

    const TSharedPtr<FJsonObject>* Choice;
    if (!(*Choices)[0]->TryGetObject(Choice)) return Response;

    FString FinishStr;
    (*Choice)->TryGetStringField(TEXT("finish_reason"), FinishStr);
    Response.FinishReason = ParseFinishReason(FinishStr);

    const TSharedPtr<FJsonObject>* MessageObj;
    if ((*Choice)->TryGetObjectField(TEXT("message"), MessageObj))
    {
        (*MessageObj)->TryGetStringField(TEXT("content"), Response.Content);
        if (Response.Content.IsEmpty()) Response.Content = TEXT("");

        const TArray<TSharedPtr<FJsonValue>>* ToolCallsArr;
        if ((*MessageObj)->TryGetArrayField(TEXT("tool_calls"), ToolCallsArr))
        {
            for (const TSharedPtr<FJsonValue>& TCV : *ToolCallsArr)
            {
                const TSharedPtr<FJsonObject>* TCObj;
                if (!TCV->TryGetObject(TCObj)) continue;
                FGenToolCall TC;
                (*TCObj)->TryGetStringField(TEXT("id"), TC.Id);
                (*TCObj)->TryGetStringField(TEXT("type"), TC.Type);
                const TSharedPtr<FJsonObject>* FuncObj;
                if ((*TCObj)->TryGetObjectField(TEXT("function"), FuncObj))
                {
                    (*FuncObj)->TryGetStringField(TEXT("name"), TC.FunctionName);
                    (*FuncObj)->TryGetStringField(TEXT("arguments"), TC.FunctionArguments);
                }
                Response.ToolCalls.Add(TC);
            }
        }
    }

    const TSharedPtr<FJsonObject>* UsageObj;
    if (Root->TryGetObjectField(TEXT("usage"), UsageObj))
    {
        (*UsageObj)->TryGetNumberField(TEXT("prompt_tokens"), Response.PromptTokens);
        (*UsageObj)->TryGetNumberField(TEXT("completion_tokens"), Response.CompletionTokens);
        (*UsageObj)->TryGetNumberField(TEXT("total_tokens"), Response.TotalTokens);
    }
    Root->TryGetStringField(TEXT("model"), Response.Model);
    return Response;
}

FGenChatResponse FGenAIUtils::ParseAnthropicChatResponse(const FString& JsonString)
{
    FGenChatResponse Response;
    TSharedPtr<FJsonObject> Root = ParseJsonString(JsonString);
    if (!Root.IsValid()) return Response;

    FString StopReason;
    Root->TryGetStringField(TEXT("stop_reason"), StopReason);
    Response.FinishReason = ParseFinishReason(StopReason);
    Root->TryGetStringField(TEXT("model"), Response.Model);

    const TArray<TSharedPtr<FJsonValue>>* Content;
    if (Root->TryGetArrayField(TEXT("content"), Content))
    {
        for (const TSharedPtr<FJsonValue>& BlockVal : *Content)
        {
            const TSharedPtr<FJsonObject>* BlockObj;
            if (!BlockVal->TryGetObject(BlockObj)) continue;
            FString BlockType;
            (*BlockObj)->TryGetStringField(TEXT("type"), BlockType);
            if (BlockType == TEXT("text"))
            {
                FString Text;
                (*BlockObj)->TryGetStringField(TEXT("text"), Text);
                Response.Content += Text;
            }
            else if (BlockType == TEXT("tool_use"))
            {
                FGenToolCall TC;
                (*BlockObj)->TryGetStringField(TEXT("id"), TC.Id);
                TC.Type = TEXT("function");
                (*BlockObj)->TryGetStringField(TEXT("name"), TC.FunctionName);
                const TSharedPtr<FJsonObject>* InputObj;
                if ((*BlockObj)->TryGetObjectField(TEXT("input"), InputObj))
                {
                    TC.FunctionArguments = JsonObjectToString(*InputObj);
                }
                Response.ToolCalls.Add(TC);
            }
        }
    }

    const TSharedPtr<FJsonObject>* UsageObj;
    if (Root->TryGetObjectField(TEXT("usage"), UsageObj))
    {
        (*UsageObj)->TryGetNumberField(TEXT("input_tokens"), Response.PromptTokens);
        (*UsageObj)->TryGetNumberField(TEXT("output_tokens"), Response.CompletionTokens);
        Response.TotalTokens = Response.PromptTokens + Response.CompletionTokens;
    }

    return Response;
}

FGenChatResponse FGenAIUtils::ParseGoogleChatResponse(const FString& JsonString)
{
    FGenChatResponse Response;
    TSharedPtr<FJsonObject> Root = ParseJsonString(JsonString);
    if (!Root.IsValid()) return Response;

    const TArray<TSharedPtr<FJsonValue>>* Candidates;
    if (!Root->TryGetArrayField(TEXT("candidates"), Candidates) || Candidates->Num() == 0)
        return Response;

    const TSharedPtr<FJsonObject>* Candidate;
    if (!(*Candidates)[0]->TryGetObject(Candidate)) return Response;

    FString FinishReason;
    (*Candidate)->TryGetStringField(TEXT("finishReason"), FinishReason);
    if (FinishReason == TEXT("STOP")) Response.FinishReason = EGenFinishReason::Stop;

    const TSharedPtr<FJsonObject>* ContentObj;
    if ((*Candidate)->TryGetObjectField(TEXT("content"), ContentObj))
    {
        const TArray<TSharedPtr<FJsonValue>>* Parts;
        if ((*ContentObj)->TryGetArrayField(TEXT("parts"), Parts))
        {
            for (const TSharedPtr<FJsonValue>& Part : *Parts)
            {
                const TSharedPtr<FJsonObject>* PartObj;
                if (!Part->TryGetObject(PartObj)) continue;

                FString Text;
                if ((*PartObj)->TryGetStringField(TEXT("text"), Text))
                {
                    Response.Content += Text;
                }

                // Parse functionCall parts for Gemini tool use
                const TSharedPtr<FJsonObject>* FuncCallObj;
                if ((*PartObj)->TryGetObjectField(TEXT("functionCall"), FuncCallObj))
                {
                    FGenToolCall TC;
                    TC.Id = FGuid::NewGuid().ToString();
                    TC.Type = TEXT("function");
                    (*FuncCallObj)->TryGetStringField(TEXT("name"), TC.FunctionName);
                    const TSharedPtr<FJsonObject>* ArgsObj;
                    if ((*FuncCallObj)->TryGetObjectField(TEXT("args"), ArgsObj))
                    {
                        TC.FunctionArguments = JsonObjectToString(*ArgsObj);
                    }
                    Response.ToolCalls.Add(TC);
                    Response.FinishReason = EGenFinishReason::ToolCalls;
                }
            }
        }
    }
    return Response;
}

bool FGenAIUtils::ParseOAIStreamChunk(const FString& Line, FGenStreamDelta& OutDelta)
{
    if (!Line.StartsWith(TEXT("data: "))) return false;
    FString DataStr = Line.Mid(6).TrimStartAndEnd();
    if (DataStr == TEXT("[DONE]")) { OutDelta.bIsDone = true; return true; }

    TSharedPtr<FJsonObject> Root = ParseJsonString(DataStr);
    if (!Root.IsValid()) return false;

    const TArray<TSharedPtr<FJsonValue>>* Choices;
    if (!Root->TryGetArrayField(TEXT("choices"), Choices) || Choices->Num() == 0) return false;

    const TSharedPtr<FJsonObject>* Choice;
    if (!(*Choices)[0]->TryGetObject(Choice)) return false;

    const TSharedPtr<FJsonObject>* DeltaObj;
    if ((*Choice)->TryGetObjectField(TEXT("delta"), DeltaObj))
    {
        (*DeltaObj)->TryGetStringField(TEXT("content"), OutDelta.ContentDelta);

        // Parse streaming tool calls
        const TArray<TSharedPtr<FJsonValue>>* ToolCallsArr;
        if ((*DeltaObj)->TryGetArrayField(TEXT("tool_calls"), ToolCallsArr) && ToolCallsArr->Num() > 0)
        {
            const TSharedPtr<FJsonObject>* TCObj;
            if ((*ToolCallsArr)[0]->TryGetObject(TCObj))
            {
                (*TCObj)->TryGetStringField(TEXT("id"), OutDelta.ToolCallId);
                const TSharedPtr<FJsonObject>* FuncObj;
                if ((*TCObj)->TryGetObjectField(TEXT("function"), FuncObj))
                {
                    (*FuncObj)->TryGetStringField(TEXT("name"), OutDelta.ToolCallFunctionName);
                    (*FuncObj)->TryGetStringField(TEXT("arguments"), OutDelta.ToolCallArgumentsDelta);
                }
            }
        }
    }
    FString FinishStr;
    if ((*Choice)->TryGetStringField(TEXT("finish_reason"), FinishStr) && !FinishStr.IsEmpty())
    {
        OutDelta.FinishReason = ParseFinishReason(FinishStr);
        OutDelta.bIsDone = true;
    }
    return true;
}

bool FGenAIUtils::ParseAnthropicStreamChunk(const FString& EventLine, const FString& DataLine, FGenStreamDelta& OutDelta)
{
    FString EventType = EventLine.Mid(7).TrimStartAndEnd();
    if (EventType == TEXT("message_stop")) { OutDelta.bIsDone = true; return true; }

    FString DataStr = DataLine.StartsWith(TEXT("data: ")) ? DataLine.Mid(6) : DataLine;
    TSharedPtr<FJsonObject> Root = ParseJsonString(DataStr);

    // content_block_start: captures tool_use id and name
    if (EventType == TEXT("content_block_start"))
    {
        if (!Root.IsValid()) return false;
        const TSharedPtr<FJsonObject>* BlockObj;
        if (Root->TryGetObjectField(TEXT("content_block"), BlockObj))
        {
            FString BlockType;
            (*BlockObj)->TryGetStringField(TEXT("type"), BlockType);
            if (BlockType == TEXT("tool_use"))
            {
                (*BlockObj)->TryGetStringField(TEXT("id"), OutDelta.ToolCallId);
                (*BlockObj)->TryGetStringField(TEXT("name"), OutDelta.ToolCallFunctionName);
                return true;
            }
        }
        return false;
    }

    // content_block_delta: text or tool input JSON fragments
    if (EventType == TEXT("content_block_delta"))
    {
        if (!Root.IsValid()) return false;
        const TSharedPtr<FJsonObject>* DeltaObj;
        if (Root->TryGetObjectField(TEXT("delta"), DeltaObj))
        {
            FString DeltaType;
            (*DeltaObj)->TryGetStringField(TEXT("type"), DeltaType);
            if (DeltaType == TEXT("text_delta"))
            {
                (*DeltaObj)->TryGetStringField(TEXT("text"), OutDelta.ContentDelta);
            }
            else if (DeltaType == TEXT("input_json_delta"))
            {
                (*DeltaObj)->TryGetStringField(TEXT("partial_json"), OutDelta.ToolCallArgumentsDelta);
            }
        }
        return true;
    }

    // message_delta: captures stop_reason (e.g. "tool_use" or "end_turn")
    if (EventType == TEXT("message_delta"))
    {
        if (!Root.IsValid()) return false;
        const TSharedPtr<FJsonObject>* DeltaObj;
        if (Root->TryGetObjectField(TEXT("delta"), DeltaObj))
        {
            FString StopReason;
            if ((*DeltaObj)->TryGetStringField(TEXT("stop_reason"), StopReason))
            {
                OutDelta.FinishReason = ParseFinishReason(StopReason);
            }
        }
        return true;
    }

    return false;
}

bool FGenAIUtils::ParseGoogleStreamChunk(const FString& DataLine, FGenStreamDelta& OutDelta)
{
    TSharedPtr<FJsonObject> Root = ParseJsonString(DataLine);
    if (!Root.IsValid()) return false;

    const TArray<TSharedPtr<FJsonValue>>* Candidates;
    if (Root->TryGetArrayField(TEXT("candidates"), Candidates) && Candidates->Num() > 0)
    {
        const TSharedPtr<FJsonObject>* Candidate;
        if ((*Candidates)[0]->TryGetObject(Candidate))
        {
            const TSharedPtr<FJsonObject>* ContentObj;
            if ((*Candidate)->TryGetObjectField(TEXT("content"), ContentObj))
            {
                const TArray<TSharedPtr<FJsonValue>>* Parts;
                if ((*ContentObj)->TryGetArrayField(TEXT("parts"), Parts))
                {
                    for (const TSharedPtr<FJsonValue>& P : *Parts)
                    {
                        const TSharedPtr<FJsonObject>* PObj;
                        if (!P->TryGetObject(PObj)) continue;

                        FString T;
                        if ((*PObj)->TryGetStringField(TEXT("text"), T))
                            OutDelta.ContentDelta += T;

                        // Parse functionCall parts for Gemini tool use
                        const TSharedPtr<FJsonObject>* FuncCallObj;
                        if ((*PObj)->TryGetObjectField(TEXT("functionCall"), FuncCallObj))
                        {
                            (*FuncCallObj)->TryGetStringField(TEXT("name"), OutDelta.ToolCallFunctionName);
                            const TSharedPtr<FJsonObject>* ArgsObj;
                            if ((*FuncCallObj)->TryGetObjectField(TEXT("args"), ArgsObj))
                            {
                                OutDelta.ToolCallArgumentsDelta = JsonObjectToString(*ArgsObj);
                            }
                            OutDelta.FinishReason = EGenFinishReason::ToolCalls;
                        }
                    }
                }
            }
            FString FR;
            if ((*Candidate)->TryGetStringField(TEXT("finishReason"), FR) && !FR.IsEmpty())
                OutDelta.bIsDone = true;
        }
    }
    return true;
}

bool FGenAIUtils::ParseOllamaStreamChunk(const FString& JsonLine, FGenStreamDelta& OutDelta)
{
    TSharedPtr<FJsonObject> Root = ParseJsonString(JsonLine);
    if (!Root.IsValid()) return false;

    const TSharedPtr<FJsonObject>* MsgObj;
    if (Root->TryGetObjectField(TEXT("message"), MsgObj))
    {
        (*MsgObj)->TryGetStringField(TEXT("content"), OutDelta.ContentDelta);
    }
    bool bDone = false;
    if (Root->TryGetBoolField(TEXT("done"), bDone) && bDone)
        OutDelta.bIsDone = true;

    return true;
}

void FGenAIUtils::LogRequest(const FString& Provider, const FString& Endpoint, const FString& Body)
{
    const UGenAISettings* S = GetSettings();
    if (S && S->bExtendedLogging)
        UE_LOG(LogTemp, Log, TEXT("[GenAI][%s] --> %s\n%s"), *Provider, *Endpoint, *TruncateBase64ForLog(Body));
}

void FGenAIUtils::LogResponse(const FString& Provider, int32 StatusCode, const FString& Body)
{
    const UGenAISettings* S = GetSettings();
    if (S && S->bExtendedLogging)
        UE_LOG(LogTemp, Log, TEXT("[GenAI][%s] <-- %d\n%s"), *Provider, StatusCode, *TruncateBase64ForLog(Body));
}

FString FGenAIUtils::TruncateBase64ForLog(const FString& JsonBody, int32 MaxBase64Chars)
{
    FString Result = JsonBody;
    int32 Start = 0;
    while (true) {
        int32 Found = Result.Find(TEXT("base64,"), ESearchCase::IgnoreCase, ESearchDir::FromStart, Start);
        if (Found == INDEX_NONE) break;
        int32 DataStart = Found + 7;
        int32 DataEnd = DataStart;
        while (DataEnd < Result.Len() && Result[DataEnd] != TEXT('"') && Result[DataEnd] != TEXT(' ')) DataEnd++;
        if (DataEnd - DataStart > MaxBase64Chars) {
            Result = Result.Left(DataStart + MaxBase64Chars) + TEXT("...[truncated]") + Result.Mid(DataEnd);
        }
        Start = DataStart + MaxBase64Chars + 15;
    }
    return Result;
}

FString FGenAIUtils::JsonObjectToString(const TSharedPtr<FJsonObject>& Obj)
{
    FString Out;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Out);
    FJsonSerializer::Serialize(Obj.ToSharedRef(), Writer);
    return Out;
}

TSharedPtr<FJsonObject> FGenAIUtils::ParseJsonString(const FString& JsonString)
{
    TSharedPtr<FJsonObject> Result;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    FJsonSerializer::Deserialize(Reader, Result);
    return Result;
}

FString FGenAIUtils::GetSkillsPrompt(const FString& UserMessage)
{
    const UGenAISettings* Settings = GetDefault<UGenAISettings>();
    if (!Settings) return FString();

    FString Combined;
    FString UserLower = UserMessage.ToLower();

    for (const FGenAISkill& Skill : Settings->Skills)
    {
        if (!Skill.bIsEnabled || Skill.SystemPrompt.IsEmpty()) continue;

        bool bShouldTrigger = false;
        if (Skill.TriggerKeywords.Num() == 0)
        {
            bShouldTrigger = true;
        }
        else
        {
            for (const FString& Kw : Skill.TriggerKeywords)
            {
                if (UserLower.Contains(Kw.ToLower()))
                {
                    bShouldTrigger = true;
                    break;
                }
            }
        }

        if (bShouldTrigger)
        {
            if (!Combined.IsEmpty()) Combined += TEXT("\n\n");
            Combined += FString::Printf(TEXT("--- SKILL: %s ---\n%s"), *Skill.Name, *Skill.SystemPrompt);
        }
    }

    return Combined;
}
