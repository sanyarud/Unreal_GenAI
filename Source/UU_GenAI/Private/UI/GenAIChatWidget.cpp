// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#include "UI/GenAIChatWidget.h"
#include "GenAISubsystem.h"
#include "GenAISettings.h"
#include "Google/GenGoogleChat.h"
#include "Widgets/Text/SMultiLineEditableText.h"
#include "Anthropic/GenAnthropicChat.h"
#include "Anthropic/GenAnthropicChatStream.h"
#include "Compat/GenCompatChat.h"
#include "Ollama/GenOllamaChatStream.h"
#include "OpenAI/GenOAIChat.h"
#include "OpenAI/GenOAIChatStream.h"

#include "Dom/JsonObject.h"
#include "Engine/GameViewportClient.h"
#include "Fonts/SlateFontInfo.h"
#include "Framework/Application/SlateApplication.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Styling/AppStyle.h"
#include "Styling/SlateTypes.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SSpacer.h"
#include "Widgets/Layout/SWrapBox.h"
#include "Widgets/SOverlay.h"
#include "Widgets/Text/STextBlock.h"

#if WITH_EDITOR
#include "AssetRegistry/AssetRegistryModule.h"
#include "ContentBrowserModule.h"
#include "Engine/Blueprint.h"
#include "IContentBrowserSingleton.h"
#endif

// ─────────────────────────────────────────────────────────────────────────────
//  Palette
// ─────────────────────────────────────────────────────────────────────────────

namespace ChatPalette {
const FLinearColor Bg{0.05f, 0.05f, 0.05f, 1.f};
const FLinearColor Header{0.f, 0.f, 0.0f, 0.f};
const FLinearColor InputBg{0.10f, 0.10f, 0.10f, 1.f};
const FLinearColor Separator{0.10f, 0.10f, 0.12f, 0.0f};
const FLinearColor UserBubble{0.15f, 0.15f, 0.16f, 1.f};
const FLinearColor AIBubble{0.0f, 0.0f, 0.0f, 0.0f}; // transparent for AI
const FLinearColor CodeBg{0.07f, 0.07f, 0.08f, 1.f};
const FLinearColor SendBtn{0.25f, 0.25f, 0.25f, 1.f};
const FLinearColor Text{0.95f, 0.95f, 0.95f, 1.f};
const FLinearColor Subtext{0.50f, 0.50f, 0.50f, 1.f};
const FLinearColor Accent{0.40f, 0.65f, 1.00f, 1.f};
const FLinearColor Transparent{0.0f, 0.0f, 0.0f, 0.0f};
const FLinearColor AttachBg{0.15f, 0.15f, 0.15f, 1.f};
const FLinearColor SendHover{0.30f, 0.30f, 0.30f, 1.f};
} // namespace ChatPalette

// ─────────────────────────────────────────────────────────────────────────────
//  Model registry
// ─────────────────────────────────────────────────────────────────────────────

void SGenAIChatWidget::RefreshOllamaModels() {
  const UGenAISettings *Settings = GetDefault<UGenAISettings>();
  if (!Settings)
    return;

  FString Url = Settings->OllamaBaseUrl + TEXT("/api/tags");

  auto Request = FHttpModule::Get().CreateRequest();
  Request->SetURL(Url);
  Request->SetVerb(TEXT("GET"));
  Request->OnProcessRequestComplete().BindLambda(
      [this](FHttpRequestPtr Req, FHttpResponsePtr Res, bool bSuccess) {
        if (!bSuccess || !Res.IsValid())
          return;

        TSharedPtr<FJsonObject> JsonObj;
        auto Reader = TJsonReaderFactory<>::Create(Res->GetContentAsString());
        if (FJsonSerializer::Deserialize(Reader, JsonObj)) {
          const TArray<TSharedPtr<FJsonValue>> *ModelList;
          if (JsonObj->TryGetArrayField(TEXT("models"), ModelList)) {
            // Find where Ollama starts in our list
            int32 InsertIdx = -1;
            for (int32 i = 0; i < Models.Num(); ++i) {
              if (Models[i].Group == TEXT("Ollama") &&
                  Models[i].ModelId != TEXT("sep")) {
                if (InsertIdx == -1)
                  InsertIdx = i;
                Models.RemoveAt(i);
                i--;
              }
            }

            if (InsertIdx == -1)
              InsertIdx = Models.Num();

            for (auto &ModelVal : *ModelList) {
              auto Obj = ModelVal->AsObject();
              if (Obj.IsValid()) {
                FString ModelName = Obj->GetStringField(TEXT("name"));
                FGenAIModelEntry Entry;
                Entry.Display = ModelName + TEXT(" (Ollama)");
                Entry.Group = TEXT("Ollama");
                Entry.Provider = TEXT("ollama");
                Entry.ModelId = ModelName;
                Models.Insert(Entry, InsertIdx++);
              }
            }

            // Rebuild combo items
            ComboItems.Empty();
            FString LastGroup;
            for (int32 i = 0; i < Models.Num(); ++i) {
              if (Models[i].Group != LastGroup) {
                ComboItems.Add(MakeShared<FString>(
                    TEXT("── ") + Models[i].Group + TEXT(" ──")));
                LastGroup = Models[i].Group;
              }
              ComboItems.Add(MakeShared<FString>(Models[i].Display));
            }

            if (ModelCombo.IsValid()) {
              ModelCombo->RefreshOptions();
            }
          }
        }
      });
  Request->ProcessRequest();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Helper: make brush
// ─────────────────────────────────────────────────────────────────────────────

static FSlateBrush MakeSolidBrush(const FLinearColor &Color) {
  FSlateBrush B;
  B.TintColor = FSlateColor(Color);
  B.DrawAs = ESlateBrushDrawType::Box;
  B.Margin = 0.0f;
  return B;
}

static FSlateBrush MakeRoundedBrush(const FLinearColor &Color,
                                    float Radius = 8.f) {
  FSlateBrush B;
  B.TintColor = FSlateColor(Color);
  B.DrawAs = ESlateBrushDrawType::Box;
  B.Margin = 0.1f;
  return B;
}

// ─────────────────────────────────────────────────────────────────────────────
//  Construct
// ─────────────────────────────────────────────────────────────────────────────

void SGenAIChatWidget::Construct(const FArguments &InArgs) {
  // Build brushes
  BgBrush = MakeSolidBrush(ChatPalette::Bg);
  HeaderBrush = MakeSolidBrush(ChatPalette::Header);
  InputBrush = MakeSolidBrush(ChatPalette::InputBg);
  SeparatorBrush = MakeSolidBrush(ChatPalette::Separator);
  UserBubbleBrush = MakeRoundedBrush(ChatPalette::UserBubble, 14.f);
  AIBubbleBrush = MakeRoundedBrush(ChatPalette::Transparent, 0.f);
  AttachBrush = MakeRoundedBrush(ChatPalette::AttachBg, 12.f);
  SendBtnBrush = MakeRoundedBrush(ChatPalette::SendBtn, 14.f);
  SendBtnHoverBrush = MakeRoundedBrush(ChatPalette::SendHover, 14.f);
  InputBrush = MakeRoundedBrush(ChatPalette::InputBg, 20.f);
  TransparentBrush = MakeSolidBrush(ChatPalette::Transparent);

  // Initial model list
  // Complete internal model registry
  TArray<FGenAIModelEntry> FullRegistry = {
      {TEXT("GPT-4o"), TEXT("OpenAI"), TEXT("openai"), TEXT("gpt-4o")},
      {TEXT("GPT-4o Mini"), TEXT("OpenAI"), TEXT("openai"), TEXT("gpt-4o-mini")},
      {TEXT("o1"), TEXT("OpenAI"), TEXT("openai"), TEXT("o1")},
      {TEXT("o1-mini"), TEXT("OpenAI"), TEXT("openai"), TEXT("o1-mini")},
      {TEXT("o3-mini"), TEXT("OpenAI"), TEXT("openai"), TEXT("o3-mini")},
      {TEXT("Claude 3.7 Sonnet"), TEXT("Anthropic"), TEXT("anthropic"), TEXT("claude-3-7-sonnet-20250219")},
      {TEXT("Claude 3.5 Sonnet"), TEXT("Anthropic"), TEXT("anthropic"), TEXT("claude-3-5-sonnet-20241022")},
      {TEXT("Claude 3.5 Haiku"), TEXT("Anthropic"), TEXT("anthropic"), TEXT("claude-3-5-haiku-20241022")},
      {TEXT("Gemini 2.0 Flash"), TEXT("Google"), TEXT("google"), TEXT("gemini-2.0-flash")},
      {TEXT("Gemini 1.5 Pro"), TEXT("Google"), TEXT("google"), TEXT("gemini-1.5-pro")},
      {TEXT("DeepSeek Chat"), TEXT("DeepSeek"), TEXT("deepseek"), TEXT("deepseek-chat")},
      {TEXT("DeepSeek Reasoner"), TEXT("DeepSeek"), TEXT("deepseek"), TEXT("deepseek-reasoner")},
      {TEXT("Mistral Large"), TEXT("Mistral"), TEXT("mistral"), TEXT("mistral-large-latest")},
      {TEXT("Custom OpenAI"), TEXT("OpenAI"), TEXT("openai"), TEXT("custom")},
      {TEXT("Custom Anthropic"), TEXT("Anthropic"), TEXT("anthropic"), TEXT("custom")},
      {TEXT("Custom Google"), TEXT("Google"), TEXT("google"), TEXT("custom")},
      {TEXT("Custom DeepSeek"), TEXT("DeepSeek"), TEXT("deepseek"), TEXT("custom")},
      {TEXT("Custom Mistral"), TEXT("Mistral"), TEXT("mistral"), TEXT("custom")},
  };

  const UGenAISettings *Settings = GetDefault<UGenAISettings>();
  Models.Empty();
  
  // Filter models
  for (const auto& M : FullRegistry)
  {
      if (const bool* bEnabled = Settings->EnabledModels.Find(M.ModelId))
      {
          if (!*bEnabled) continue;
      }
      Models.Add(M);
  }
  
  // Find default model
  SelectedModel = 0;
  for (int32 i = 0; i < Models.Num(); ++i)
  {
      if (Models[i].ModelId == Settings->DefaultChatModelId)
      {
          SelectedModel = i;
          break;
      }
  }

  // Language selector items
  LanguageItems.Add(MakeShared<FString>(TEXT("UA")));
  LanguageItems.Add(MakeShared<FString>(TEXT("EN")));

  if (Settings) {
    SelectedLanguage = Settings->DefaultLanguage;
  }

  ChildSlot
  [
    SNew(SBorder)
    .BorderImage(&BgBrush)
    .Padding(0)
    [
      SNew(SHorizontalBox)
      // Left: Sidebar (Sessions)
      + SHorizontalBox::Slot().AutoWidth()
      [
        BuildSidebar()
      ]
      // Right: Main Chat
      + SHorizontalBox::Slot().FillWidth(1.f)
      [
        SNew(SVerticalBox)
        + SVerticalBox::Slot().AutoHeight() [ BuildHeader() ]
        + SVerticalBox::Slot().FillHeight(1.f) [ BuildScrollArea() ]
        + SVerticalBox::Slot().AutoHeight() [ BuildAttachmentBar() ]
        + SVerticalBox::Slot().AutoHeight() [ BuildInputRow() ]
      ]
    ]
  ];

  RefreshSessionsList();
  if (UGenAISubsystem* Sub = GEngine->GetEngineSubsystem<UGenAISubsystem>())
  {
      SwitchToSession(Sub->CurrentSessionId);
  }

  RefreshOllamaModels();
  FString LastGroup;
  for (int32 i = 0; i < Models.Num(); ++i) {
    // Group separator label
    if (Models[i].Group != LastGroup) {
      ComboItems.Add(
          MakeShared<FString>(TEXT("── ") + Models[i].Group + TEXT(" ──")));
      LastGroup = Models[i].Group;
    }
    ComboItems.Add(MakeShared<FString>(Models[i].Display));
  }
}

TSharedRef<SWidget> SGenAIChatWidget::BuildSidebar()
{
    return SNew(SBorder)
        .BorderImage(&HeaderBrush)
        .Padding(FMargin(8.f))
        [
            SNew(SBox).WidthOverride(200.f)
            [
                SNew(SVerticalBox)
                + SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 16)
                [
                    SNew(SButton)
                    .ButtonStyle(FAppStyle::Get(), "PrimaryButton")
                    .OnClicked_Lambda([this]() { CreateNewSession(); return FReply::Handled(); })
                    .HAlign(HAlign_Center)
                    [
                        SNew(STextBlock).Text(FText::FromString(TEXT("+ New Chat"))).Font(FCoreStyle::GetDefaultFontStyle("Bold", 12))
                    ]
                ]
                + SVerticalBox::Slot().FillHeight(1.f)
                [
                    SNew(SScrollBox)
                    + SScrollBox::Slot()
                    [
                        SAssignNew(SessionsVBox, SVerticalBox)
                    ]
                ]
            ]
        ];
}

void SGenAIChatWidget::RefreshSessionsList()
{
    if (!SessionsVBox.IsValid()) return;
    SessionsVBox->ClearChildren();

    UGenAISubsystem* Sub = GEngine->GetEngineSubsystem<UGenAISubsystem>();
    if (!Sub) return;

    for (const FGenAIChatSession& Session : Sub->Sessions)
    {
        SessionsVBox->AddSlot().AutoHeight().Padding(0, 2)
        [
            MakeSessionRow(MakeShared<FGenAIChatSession>(Session))
        ];
    }
}

TSharedRef<SWidget> SGenAIChatWidget::MakeSessionRow(TSharedPtr<FGenAIChatSession> Session)
{
    return SNew(SButton)
        .ButtonStyle(FAppStyle::Get(), "SimpleButton")
        .OnClicked_Lambda([this, Session]() { 
            SwitchToSession(Session->SessionId); 
            return FReply::Handled(); 
        })
        [
            SNew(STextBlock)
            .Text(FText::FromString(Session->Title))
            .Font(FCoreStyle::GetDefaultFontStyle("Regular", 10))
            .ColorAndOpacity(ChatPalette::Text)
            .Margin(FMargin(4, 2))
        ];
}

void SGenAIChatWidget::SwitchToSession(const FString& SessionId)
{
    UGenAISubsystem* Sub = GEngine->GetEngineSubsystem<UGenAISubsystem>();
    if (!Sub) return;

    FGenAIChatSession* Found = Sub->Sessions.FindByPredicate([&](const FGenAIChatSession& S) { return S.SessionId == SessionId; });
    if (!Found) return;

    Sub->CurrentSessionId = SessionId;
    History = Found->History;
    
    // Refresh UI
    if (MessagesVBox.IsValid())
    {
        MessagesVBox->ClearChildren();
        for (const FGenChatMessage& Msg : History)
        {
            bool bIsUser = (Msg.Role == EGenChatRole::User);
            MessagesVBox->AddSlot().AutoHeight().Padding(FMargin(16.f, 8.f)) [ MakeBubble(bIsUser, Msg.Content) ];
        }
    }
    ScrollToBottom();
}

void SGenAIChatWidget::CreateNewSession()
{
    UGenAISubsystem* Sub = GEngine->GetEngineSubsystem<UGenAISubsystem>();
    if (!Sub) return;

    FGenAIChatSession NewSession;
    Sub->Sessions.Add(NewSession);
    Sub->CurrentSessionId = NewSession.SessionId;
    
    RefreshSessionsList();
    SwitchToSession(NewSession.SessionId);
}

// ─────────────────────────────────────────────────────────────────────────────
//  Header
// ─────────────────────────────────────────────────────────────────────────────

TSharedRef<SWidget> SGenAIChatWidget::BuildHeader() {
  const FSlateFontInfo FontTitle = FCoreStyle::GetDefaultFontStyle("Bold", 13);
  const FSlateFontInfo FontSmall =
      FCoreStyle::GetDefaultFontStyle("Regular", 10);

  return SNew(SBorder)
      .BorderImage(&HeaderBrush)
      .Padding(FMargin(14.f, 10.f))
          [SNew(SHorizontalBox)
           // Title
           + SHorizontalBox::Slot().AutoWidth().VAlign(
                 VAlign_Center)[SNew(STextBlock)
                                    .Text(FText::FromString(TEXT("GenAI Chat")))
                                    .Font(FontTitle)
                                    .ColorAndOpacity(ChatPalette::Text)]
           // Spacer
           + SHorizontalBox::Slot().FillWidth(1.f)
           // Custom model input (if needed here, but usually hide it in header)
           // Custom model input
           + SHorizontalBox::Slot()
                 .AutoWidth()
                 .VAlign(VAlign_Center)
                 .Padding(0, 0, 8,
                          0)[SAssignNew(CustomModelBox, SEditableTextBox)
                                 .HintText(FText::FromString(
                                     TEXT("Enter model ID...")))
                                 .Font(FontSmall)
                                 .MinDesiredWidth(140.f)
                                 .Visibility_Lambda([this]() {
                                   const auto &InnerModels = GetModels();
                                   if (InnerModels.IsValidIndex(
                                           SelectedModel) &&
                                       InnerModels[SelectedModel].ModelId ==
                                           TEXT("custom"))
                                     return EVisibility::Visible;
                                   return EVisibility::Collapsed;
                                 })]
           // Close button
           + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
                 [SNew(SButton)
                      .ButtonStyle(FAppStyle::Get(), "SimpleButton")
                      .OnClicked(this, &SGenAIChatWidget::OnCloseClicked)
                      .ContentPadding(FMargin(6.f, 2.f))
                          [SNew(STextBlock)
                               .Text(FText::FromString(TEXT("✕")))
                               .Font(FCoreStyle::GetDefaultFontStyle("Regular",
                                                                     12))
                               .ColorAndOpacity(ChatPalette::Subtext)]]];
}

// ─────────────────────────────────────────────────────────────────────────────
//  Messages area
// ─────────────────────────────────────────────────────────────────────────────

TSharedRef<SWidget> SGenAIChatWidget::BuildScrollArea() {
  return SNew(SBorder).BorderImage(&BgBrush).Padding(FMargin(
      12.f, 8.f))[SAssignNew(MessagesScroll, SScrollBox)
                      .ScrollBarVisibility(EVisibility::Collapsed) +
                  SScrollBox::Slot()[SAssignNew(MessagesVBox, SVerticalBox)]];
}

// ─────────────────────────────────────────────────────────────────────────────
//  Attachment bar
// ─────────────────────────────────────────────────────────────────────────────

TSharedRef<SWidget> SGenAIChatWidget::BuildAttachmentBar() {
  const FSlateFontInfo Font = FCoreStyle::GetDefaultFontStyle("Regular", 10);

  TSharedPtr<SWidget> Bar =
      SNew(SBorder)
          .BorderImage(&InputBrush)
          .Padding(FMargin(12.f, 6.f))
          .Visibility_Lambda([this]() {
            return AttachmentName.IsEmpty() ? EVisibility::Collapsed
                                            : EVisibility::Visible;
          })[SNew(SHorizontalBox) +
             SHorizontalBox::Slot().AutoWidth().VAlign(
                 VAlign_Center)[SNew(STextBlock)
                                    .Text(FText::FromString(TEXT("📎 ")))
                                    .Font(Font)
                                    .ColorAndOpacity(ChatPalette::Accent)] +
             SHorizontalBox::Slot().AutoWidth().VAlign(
                 VAlign_Center)[SAssignNew(AttachLabel, STextBlock)
                                    .Font(Font)
                                    .ColorAndOpacity(ChatPalette::Accent)] +
             SHorizontalBox::Slot()
                 .AutoWidth()
                 .Padding(6, 0, 0, 0)
                 .VAlign(VAlign_Center)
                     [SNew(SButton)
                          .ButtonStyle(FAppStyle::Get(), "SimpleButton")
                          .OnClicked(this, &SGenAIChatWidget::OnClearAttachment)
                          .ContentPadding(FMargin(4.f, 0.f))
                              [SNew(STextBlock)
                                   .Text(FText::FromString(TEXT("✕")))
                                   .Font(Font)
                                   .ColorAndOpacity(ChatPalette::Subtext)]]];

  AttachBar = Bar;
  return Bar.ToSharedRef();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Input row
// ─────────────────────────────────────────────────────────────────────────────

TSharedRef<SWidget> SGenAIChatWidget::BuildInputRow() {
  const FSlateFontInfo Font = FCoreStyle::GetDefaultFontStyle("Regular", 13);
  FSlateFontInfo FontSmall = Font;
  FontSmall.Size = 11;

  return SNew(SBorder)
      .BorderImage(&InputBrush)
      .Padding(FMargin(16.f, 10.f))
          [SNew(SVerticalBox)
           // Top: Input Box
           +
           SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 8)
               [SAssignNew(InputBox, SEditableTextBox)
                    .Style(FAppStyle::Get(), "Log.TextBox")
                    .Font(Font)
                    .BackgroundColor(FLinearColor::Transparent)
                    .HintText(FText::FromString(TEXT("Send a message")))
                    .OnTextCommitted(this, &SGenAIChatWidget::OnInputCommitted)
                    .IsEnabled_Lambda([this]() { return !bStreaming; })]
           // Bottom: Controls Row
           +
           SVerticalBox::Slot().AutoHeight()
               [SNew(SHorizontalBox)
                // Attach button (+)
                +
                SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
                    [SNew(SButton)
                         .ButtonStyle(FAppStyle::Get(), "SimpleButton")
                         .OnClicked(this, &SGenAIChatWidget::OnAttachClicked)
                             [SNew(SBox)
                                  .WidthOverride(24.f)
                                  .HeightOverride(16.f)
                                  .HAlign(HAlign_Center)
                                  .VAlign(VAlign_Center)
                                      [SNew(STextBlock)
                                           .Text(FText::FromString(TEXT("＋")))
                                           .Font(Font)
                                           .ColorAndOpacity(
                                               ChatPalette::Subtext)]]]

                + SHorizontalBox::Slot().FillWidth(1.f)

                // Thinking Model pill
                + SHorizontalBox::Slot()
                      .AutoWidth()
                      .VAlign(VAlign_Center)
                      .Padding(0, 0, 8, 0)
                          [SNew(SBorder)
                               .BorderImage(&AttachBrush)
                               .Padding(FMargin(10.f, 4.f))
                                   [SNew(SHorizontalBox) +
                                    SHorizontalBox::Slot()
                                        .AutoWidth()
                                        .VAlign(VAlign_Center)
                                        .Padding(0, 0, 6, 0)
                                            [SNew(STextBlock)
                                                 .Text(FText::FromString(
                                                     TEXT("💡")))
                                                 .Font(Font)] +
                                    SHorizontalBox::Slot().AutoWidth().VAlign(
                                        VAlign_Center)
                                        [SNew(STextBlock)
                                             .Text(FText::FromString(
                                                 TEXT("Medium")))
                                             .Font(Font)
                                             .ColorAndOpacity(
                                                 ChatPalette::Subtext)]]]

                // Main Model pill
                +
                SHorizontalBox::Slot()
                    .AutoWidth()
                    .VAlign(VAlign_Center)
                    .Padding(0, 0, 8, 0)
                        [SNew(SBorder)
                             .BorderImage(&AttachBrush)
                             .Padding(FMargin(10.f, 4.f))
                                 [SNew(SHorizontalBox) +
                                  SHorizontalBox::Slot()
                                      .AutoWidth()
                                      .VAlign(VAlign_Center)
                                      .Padding(0, 0, 6, 0)
                                          [SNew(STextBlock)
                                               .Text(FText::FromString(
                                                   TEXT("🌐")))
                                               .Font(Font)] +
                                  SHorizontalBox::Slot().AutoWidth().VAlign(
                                      VAlign_Center)
                                      [SAssignNew(
                                           ModelCombo,
                                           SComboBox<TSharedPtr<FString>>)
                                           .OptionsSource(&ComboItems)
                                           .OnSelectionChanged(
                                               this, &SGenAIChatWidget::
                                                         OnModelSelected)
                                           .OnGenerateWidget(
                                               this,
                                               &SGenAIChatWidget::MakeModelRow)
                                           .InitiallySelectedItem(
                                               ComboItems.IsValidIndex(
                                                   SelectedModel)
                                                   ? ComboItems[SelectedModel]
                                                   : nullptr)
                                               [SNew(STextBlock)
                                                    .Text(
                                                        this,
                                                        &SGenAIChatWidget::
                                                            GetCurrentModelLabel)
                                                    .Font(FontSmall)
                                                    .ColorAndOpacity(
                                                        ChatPalette::Subtext)]]

                                  +
                                  SHorizontalBox::Slot().AutoWidth().Padding(
                                      4.f, 0.f, 0.f,
                                      0.f)[SNew(SBox).HeightOverride(
                                      32.f)[SAssignNew(
                                                LanguageCombo,
                                                SComboBox<TSharedPtr<FString>>)
                                                .OptionsSource(&LanguageItems)
                                                .OnGenerateWidget_Lambda(
                                                    [FontSmall](
                                                        TSharedPtr<FString>
                                                            InItem) {
                                                      return SNew(STextBlock)
                                                          .Text(
                                                              FText::FromString(
                                                                  *InItem))
                                                          .Font(FontSmall);
                                                    })
                                                .OnSelectionChanged(
                                                    this,
                                                    &SGenAIChatWidget::
                                                        OnLanguageSelected)
                                                .InitiallySelectedItem(
                                                    (SelectedLanguage ==
                                                     EGenAILanguage::Ukrainian)
                                                        ? LanguageItems[0]
                                                        : LanguageItems[1])
                                                    [SNew(STextBlock)
                                                         .Text_Lambda([this]() {
                                                           return FText::FromString(
                                                               *LanguageCombo
                                                                    ->GetSelectedItem());
                                                         })
                                                         .Font(FontSmall)
                                                         .ColorAndOpacity(
                                                             ChatPalette::
                                                                 Subtext)]]]]]

                // Send button
                +
                SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
                    [SNew(SButton)
                         .ButtonStyle(FAppStyle::Get(), "SimpleButton")
                         .OnClicked(this, &SGenAIChatWidget::OnSendClicked)
                         .IsEnabled_Lambda([this]() {
                           return !bStreaming;
                         })[SNew(SBox)
                                .WidthOverride(32.f)
                                .HeightOverride(32.f)
                                .HAlign(HAlign_Center)
                                .VAlign(VAlign_Center)
                                    [SNew(STextBlock)
                                         .Text(FText::FromString(TEXT("↑")))
                                         .Font(FCoreStyle::GetDefaultFontStyle(
                                             "Bold", 18))
                                         .ColorAndOpacity(
                                             ChatPalette::Subtext)]]]]];
}

// ─────────────────────────────────────────────────────────────────────────────
//  Model combobox helpers
// ─────────────────────────────────────────────────────────────────────────────

TSharedRef<SWidget> SGenAIChatWidget::MakeModelRow(TSharedPtr<FString> Item) {
  bool bIsSeparator = Item->StartsWith(TEXT("──"));
  const FSlateFontInfo Font =
      bIsSeparator ? FCoreStyle::GetDefaultFontStyle("Italic", 9)
                   : FCoreStyle::GetDefaultFontStyle("Regular", 11);

  return SNew(SBox).Padding(
      FMargin(bIsSeparator ? 8.f : 14.f,
              4.f))[SNew(STextBlock)
                        .Text(FText::FromString(*Item))
                        .Font(Font)
                        .ColorAndOpacity(bIsSeparator ? ChatPalette::Subtext
                                                      : ChatPalette::Text)
                        .IsEnabled(!bIsSeparator)];
}

FText SGenAIChatWidget::GetCurrentModelLabel() const {
  const auto &FinalModels = GetModels();
  if (FinalModels.IsValidIndex(SelectedModel))
    return FText::FromString(FinalModels[SelectedModel].Display);
  return FText::FromString(TEXT("Select model"));
}

void SGenAIChatWidget::OnModelSelected(TSharedPtr<FString> Item,
                                       ESelectInfo::Type) {
  if (!Item.IsValid() || Item->StartsWith(TEXT("──")))
    return;
  const auto &FinalModels = GetModels();
  for (int32 i = 0; i < FinalModels.Num(); ++i) {
    if (FinalModels[i].Display == *Item) {
      SelectedModel = i;
      return;
    }
  }
}

void SGenAIChatWidget::OnLanguageSelected(TSharedPtr<FString> Item,
                                          ESelectInfo::Type) {
  if (!Item.IsValid())
    return;

  if (*Item == TEXT("UA")) {
    SelectedLanguage = EGenAILanguage::Ukrainian;
  } else if (*Item == TEXT("EN")) {
    SelectedLanguage = EGenAILanguage::English;
  }
}

// ─────────────────────────────────────────────────────────────────────────────
//  Message bubbles
// ─────────────────────────────────────────────────────────────────────────────

TSharedRef<SWidget> SGenAIChatWidget::MakeBubble(bool bIsUser,
                                                 const FString &Text) {
  const FSlateFontInfo Font = FCoreStyle::GetDefaultFontStyle("Regular", 12);
  const FSlateBrush *BubBrush = bIsUser ? &UserBubbleBrush : &AIBubbleBrush;

  TSharedPtr<SWidget> InnerWidget;
  if (bIsUser)
  {
      InnerWidget = SNew(STextBlock)
          .Text(FText::FromString(Text))
          .Font(Font)
          .ColorAndOpacity(ChatPalette::Text)
          .AutoWrapText(true);
  }
  else
  {
      InnerWidget = SNew(SMultiLineEditableText)
          .Text(FText::FromString(Text))
          .Font(Font)
          .AutoWrapText(true)
          .IsReadOnly(true);
      StreamingLabel_Editable = StaticCastSharedPtr<SMultiLineEditableText>(InnerWidget);
  }

  TSharedRef<SWidget> Bubble = SNew(SBox).MaxDesiredWidth(
      1200.f)[SNew(SBorder).BorderImage(BubBrush).Padding(
      FMargin(12.f, 8.f))[InnerWidget.ToSharedRef()]];

  return SNew(SHorizontalBox).Clipping(EWidgetClipping::OnDemand) +
         SHorizontalBox::Slot().AutoWidth().HAlign(
             bIsUser ? HAlign_Right
                     : HAlign_Left)[SNew(SVerticalBox) +
                                    SVerticalBox::Slot().AutoHeight().Padding(
                                        FMargin(bIsUser ? 40.f : 0.f, 3.f,
                                                bIsUser ? 0.f : 40.f,
                                                3.f))[Bubble]];
}

void SGenAIChatWidget::AppendUserBubble(const FString &Text) {
  if (!MessagesVBox.IsValid())
    return;
  StreamingLabel_Editable.Reset();

  MessagesVBox->AddSlot().AutoHeight().Padding(
      FMargin(0, 12, 0,
              0))[SNew(SHorizontalBox) + SHorizontalBox::Slot().FillWidth(1.f) +
                  SHorizontalBox::Slot().AutoWidth()[SNew(SBox).MaxDesiredWidth(
                      1200.f)[SNew(SBorder)
                                 .BorderImage(&UserBubbleBrush)
                                 .Padding(FMargin(20.f, 10.f))
                                     [SNew(STextBlock)
                                          .Text(FText::FromString(Text))
                                          .Font(FCoreStyle::GetDefaultFontStyle(
                                              "Regular", 12))
                                          .ColorAndOpacity(ChatPalette::Text)
                                          .AutoWrapText(true)]]]];
  ScrollToBottom();
}

void SGenAIChatWidget::AppendAIBubble(const FString &Text,
                                      bool bIsCurrentlyStreaming) {
  if (!MessagesVBox.IsValid())
    return;

  TSharedPtr<SMultiLineEditableText> Label;
  MessagesVBox->AddSlot().AutoHeight().Padding(FMargin(
      0, 24, 0,
      0))[SNew(SVerticalBox) +
          SVerticalBox::Slot().AutoHeight().Padding(FMargin(
              0, 0, 0,
              8))[SNew(SHorizontalBox) +
                  SHorizontalBox::Slot().AutoWidth()
                      [SNew(STextBlock)
                           .Text(FText::FromString(TEXT("✦ Agent")))
                           .Font(FCoreStyle::GetDefaultFontStyle("Bold", 10))
                           .ColorAndOpacity(ChatPalette::Subtext)]] +
          SVerticalBox::Slot().AutoHeight()
              [SNew(SHorizontalBox) +
               SHorizontalBox::Slot().AutoWidth()[SNew(SBox).MaxDesiredWidth(
                   1200.f)[SAssignNew(Label, SMultiLineEditableText)
                              .Text(FText::FromString(
                                  bIsCurrentlyStreaming ? TEXT("…") : Text))
                              .Font(FCoreStyle::GetDefaultFontStyle(
                                  "Regular", 13))
                              .AutoWrapText(true)
                              .IsReadOnly(true)]]]];

  StreamingLabel_Editable = Label;
  ScrollToBottom();
}

void SGenAIChatWidget::UpdateStreamingBubble(const FString &FullText,
                                             bool bDone) {
  if (StreamingLabel_Editable.IsValid()) {
    StreamingLabel_Editable->SetText(
        FText::FromString(bDone ? FullText : FullText + TEXT("▌")));
  }
  ScrollToBottom();
}

void SGenAIChatWidget::ScrollToBottom() {
  if (MessagesScroll.IsValid())
    MessagesScroll->ScrollToEnd();
}

// ─────────────────────────────────────────────────────────────────────────────
//  Send logic
// ─────────────────────────────────────────────────────────────────────────────

void SGenAIChatWidget::DoSend() {
  if (!InputBox.IsValid() || bStreaming)
    return;

  FString Text = InputBox->GetText().ToString().TrimStartAndEnd();
  if (Text.IsEmpty())
    return;

  InputBox->SetText(FText::GetEmpty());

  // Append attachment context to user message
  FString FullUserText = Text;
  if (!AttachmentContext.IsEmpty()) {
    FullUserText = FString::Printf(TEXT("%s\n\n[Attached Blueprint: %s]\n%s"),
                                   *Text, *AttachmentName, *AttachmentContext);
  }

  AppendUserBubble(Text); // Show original text in UI

  // Build history entry
  FGenChatMessage UserMsg;
  UserMsg.Role = EGenChatRole::User;
  UserMsg.Content = FullUserText;
  History.Add(UserMsg);
  
  // Persist to subsystem
  if (UGenAISubsystem* Sub = GEngine->GetEngineSubsystem<UGenAISubsystem>())
  {
      FGenAIChatSession* Found = Sub->Sessions.FindByPredicate([&](const FGenAIChatSession& S) { return S.SessionId == Sub->CurrentSessionId; });
      if (Found) 
      {
          Found->History = History;
          Found->LastUpdated = FDateTime::Now();
          if (History.Num() == 1 && Found->Title == TEXT("New Chat"))
          {
              Found->Title = Text.Left(30).Replace(TEXT("\n"), TEXT(" ")) + (Text.Len() > 30 ? TEXT("...") : TEXT(""));
              RefreshSessionsList();
          }
          Sub->SaveSessions();
      }
  }

  AppendAIBubble(TEXT(""), true);
  bStreaming = true;
  StreamAccum.Empty();

  const UGenAISettings *Settings = GetDefault<UGenAISettings>();
  int32 RoutingModelIdx = SelectedModel;

  if (Settings && Settings->SmartRouting.bEnableAutoRouting) {
    FString TextLower = Text.ToLower();
    bool bIsCoding = false;
    for (const FString &Kw : Settings->SmartRouting.CodingKeywords) {
      if (TextLower.Contains(Kw.ToLower())) {
        bIsCoding = true;
        break;
      }
    }

    if (bIsCoding) {
      const auto &FinalModels = GetModels();
      for (int32 i = 0; i < FinalModels.Num(); ++i) {
        if (FinalModels[i].Provider == Settings->SmartRouting.CodingProvider &&
            (FinalModels[i].ModelId.Contains(
                 Settings->SmartRouting.CodingModelId) ||
             FinalModels[i].ModelId == Settings->SmartRouting.CodingModelId)) {
          RoutingModelIdx = i;
          break;
        }
      }
    }
  }

  SendToProvider(History, RoutingModelIdx);
}

FReply SGenAIChatWidget::OnSendClicked() {
  DoSend();
  return FReply::Handled();
}

void SGenAIChatWidget::OnInputCommitted(const FText &Text,
                                        ETextCommit::Type Type) {
  if (Type == ETextCommit::OnEnter)
    DoSend();
}

// ─────────────────────────────────────────────────────────────────────────────
//  AI dispatch
// ─────────────────────────────────────────────────────────────────────────────

void SGenAIChatWidget::SendToProvider(const TArray<FGenChatMessage> &Messages,
                                      int32 ModelIdx) {
  const auto &FinalModels = GetModels();
  if (!FinalModels.IsValidIndex(ModelIdx))
    return;

  const FString &Provider = FinalModels[ModelIdx].Provider;
  FString ModelId = FinalModels[ModelIdx].ModelId;

  if (ModelId == TEXT("custom") && CustomModelBox.IsValid()) {
    FString UserInput = CustomModelBox->GetText().ToString().TrimStartAndEnd();
    if (!UserInput.IsEmpty())
      ModelId = UserInput;
  }

  TWeakPtr<SGenAIChatWidget> SelfWeak = SharedThis(this).ToWeakPtr();

  FString SkillsPrompt;
  if (Messages.Num() > 0) {
    SkillsPrompt = FGenAIUtils::GetSkillsPrompt(Messages.Last().Content);
  }

  // Language requirement
  FString LangReq = (SelectedLanguage == EGenAILanguage::Ukrainian)
                        ? TEXT("IMPORTANT: Please respond ONLY in Ukrainian language. Respect this strictly. Note: The user may command you in Ukrainian (e.g., 'створи асет'). Interpret these commands and call the editor tools accordingly.")
                        : TEXT("IMPORTANT: Please respond ONLY in English language. Respect this strictly.");

  FString EditorCapabilities = TEXT("\nYou can use <editor_tool_call>{\"action\": \"...\", \"params\": {...}}</editor_tool_call> tags to perform actions in the Unreal Engine editor.")
                              TEXT("\nActions available:")
                              TEXT("\n1. CreateAsset: params {AssetName, PackagePath, ParentClass}")
                              TEXT("\n2. InjectT3D: params {AssetName, T3DText}")
                              TEXT("\n3. AddComponent: params {AssetName, ComponentClass}")
                              TEXT("\n\nParentClass examples: /Script/Engine.Actor, /Script/Engine.ActorComponent, /Script/Engine.DataAsset.")
                              TEXT("\nIf the user says 'створи асет X', you should use CreateAsset. Use the current context to decide the appropriate ParentClass if not specified.");

  if (UGenAISubsystem* Sub = GEngine->GetEngineSubsystem<UGenAISubsystem>())
  {
      SkillsPrompt += Sub->GetActiveAssetContext();
  }

  SkillsPrompt += TEXT("\n") + EditorCapabilities + TEXT("\n") + LangReq;

  auto OnDelta = [SelfWeak](const FGenStreamDelta &Delta, bool bSuccess) {
    TSharedPtr<SGenAIChatWidget> Self = SelfWeak.Pin();
    if (!Self.IsValid())
      return;

    if (!bSuccess) {
      Self->UpdateStreamingBubble(
          TEXT("⚠ Request failed. Check your API key in Project Settings."),
          true);
      Self->bStreaming = false;
      FGenChatMessage ErrMsg;
      ErrMsg.Role = EGenChatRole::Assistant;
      ErrMsg.Content = TEXT("[error]");
      Self->History.Add(ErrMsg);
      return;
    }

    Self->StreamAccum += Delta.ContentDelta;
    Self->UpdateStreamingBubble(Self->StreamAccum, Delta.bIsDone);

    if (Delta.bIsDone) {
      Self->bStreaming = false;
      FGenChatMessage AIMsg;
      AIMsg.Role = EGenChatRole::Assistant;
      AIMsg.Content = Self->StreamAccum;
      Self->History.Add(AIMsg);
      
      // Persist to subsystem
      if (UGenAISubsystem* Sub = GEngine->GetEngineSubsystem<UGenAISubsystem>())
      {
          FGenAIChatSession* Found = Sub->Sessions.FindByPredicate([&](const FGenAIChatSession& S) { return S.SessionId == Sub->CurrentSessionId; });
          if (Found) 
          {
              Found->History = Self->History;
              Found->LastUpdated = FDateTime::Now();
              Sub->SaveSessions();
          }
          
          // Execute tools found in the response
          Sub->ExecuteAITools(Self->StreamAccum);
      }
    }
  };

  const UGenAISettings* Settings = GetDefault<UGenAISettings>();
  
  // Truncate history based on settings
  TArray<FGenChatMessage> MessagesToSend;
  int32 StartIdx = FMath::Max(0, History.Num() - Settings->MaxContextHistory);
  for (int32 i = StartIdx; i < History.Num(); ++i)
  {
      MessagesToSend.Add(History[i]);
  }

  // Determine if we should use the Code Model
  FString TargetModelId = ModelId;
  if (!AttachmentContext.IsEmpty() && !Settings->DefaultCodeModelId.IsEmpty())
  {
      TargetModelId = Settings->DefaultCodeModelId;
  }

  if (Provider == TEXT("openai")) {
    FGenOAIChatSettings S;
    S.ModelString = TargetModelId;
    S.SystemPrompt = SkillsPrompt;
    S.MaxTokens = Settings->MaxTokens;
    S.Temperature = Settings->Temperature;
    UGenOAIChatStream::SendStreamChatRequest(
        MessagesToSend, S, FOnOAIStreamDeltaNative::CreateLambda(OnDelta));
  } else if (Provider == TEXT("anthropic")) {
    FGenAnthropicChatSettings S;
    S.ModelString = TargetModelId;
    S.SystemPrompt = SkillsPrompt;
    S.MaxTokens = Settings->MaxTokens;
    S.Temperature = Settings->Temperature;
    UGenAnthropicChatStream::SendStreamChatRequest(
        MessagesToSend, S, FOnAnthropicStreamDeltaNative::CreateLambda(OnDelta));
  } else if (Provider == TEXT("google")) {
    FGenGoogleChatSettings S;
    S.ModelString = TargetModelId;
    S.SystemInstruction = SkillsPrompt;
    S.MaxOutputTokens = Settings->MaxTokens;
    S.Temperature = Settings->Temperature;
    UGenGoogleChat::SendStreamChatRequest(
        MessagesToSend, S, FOnGoogleStreamDeltaNative::CreateLambda(OnDelta));
  } else if (Provider == TEXT("deepseek")) {
    FGenDeepSeekChatSettings S;
    S.ModelString = TargetModelId;
    S.SystemPrompt = SkillsPrompt;
    S.MaxTokens = Settings->MaxTokens;
    S.Temperature = Settings->Temperature;
    UGenCompatChat::SendStreamDeepSeekRequest(
        MessagesToSend, S, FOnCompatStreamDeltaNative::CreateLambda(OnDelta));
  } else if (Provider == TEXT("mistral")) {
    FGenMistralChatSettings S;
    S.ModelString = TargetModelId;
    S.SystemPrompt = SkillsPrompt;
    S.MaxTokens = Settings->MaxTokens;
    S.Temperature = Settings->Temperature;
    UGenCompatChat::SendStreamMistralRequest(
        MessagesToSend, S, FOnCompatStreamDeltaNative::CreateLambda(OnDelta));
  } else if (Provider == TEXT("ollama")) {
    FGenOllamaChatSettings S;
    S.ModelString = TargetModelId;
    S.SystemPrompt = SkillsPrompt;
    S.BaseUrl = Settings->OllamaBaseUrl;
    S.MaxTokens = Settings->MaxTokens;
    S.Temperature = Settings->Temperature;
    UGenOllamaChatStream::SendStreamChatRequest(
        MessagesToSend, S, FOnOllamaStreamDeltaNative::CreateLambda(OnDelta));
  }
}

// ─────────────────────────────────────────────────────────────────────────────
//  Attachment (editor only)
// ─────────────────────────────────────────────────────────────────────────────

FReply SGenAIChatWidget::OnAttachClicked() {
#if WITH_EDITOR
  FContentBrowserModule &CBModule =
      FModuleManager::LoadModuleChecked<FContentBrowserModule>(
          "ContentBrowser");

  TArray<FAssetData> SelectedAssets;
  CBModule.Get().GetSelectedAssets(SelectedAssets);

  for (const FAssetData &Asset : SelectedAssets) {
    // Accept Blueprints
    if (Asset.AssetClassPath.GetAssetName() == FName("Blueprint")) {
      AttachmentPath = Asset.GetObjectPathString();
      AttachmentName = Asset.AssetName.ToString();

      // Build context text from Blueprint class info
      FString Ctx = FString::Printf(TEXT("Blueprint: %s\n"), *AttachmentName);

      UBlueprint *BP = Cast<UBlueprint>(Asset.GetAsset());
      if (BP && BP->GeneratedClass) {
        UClass *Class = BP->GeneratedClass;
        Ctx += FString::Printf(TEXT("Parent class: %s\n"),
                               *Class->GetSuperClass()->GetName());

        // Properties
        Ctx += TEXT("\nProperties:\n");
        for (TFieldIterator<FProperty> It(Class,
                                          EFieldIteratorFlags::ExcludeSuper);
             It; ++It) {
          Ctx += FString::Printf(TEXT("  %s : %s\n"), *It->GetName(),
                                 *It->GetCPPType());
        }

        // Blueprint-callable functions
        Ctx += TEXT("\nFunctions:\n");
        for (TFieldIterator<UFunction> It(Class,
                                          EFieldIteratorFlags::ExcludeSuper);
             It; ++It) {
          if ((*It)->HasAnyFunctionFlags(FUNC_BlueprintCallable |
                                         FUNC_BlueprintEvent)) {
            Ctx += FString::Printf(TEXT("  %s\n"), *(*It)->GetName());
          }
        }

        // Components
        if (Class->IsChildOf(AActor::StaticClass())) {
          Ctx += TEXT("\nComponents:\n");
          const AActor *CDO = Cast<AActor>(Class->GetDefaultObject());
          if (CDO) {
            TArray<UActorComponent *> Components;
            CDO->GetComponents(Components);
            for (UActorComponent *Comp : Components) {
              Ctx += FString::Printf(TEXT("  %s (%s)\n"), *Comp->GetName(),
                                     *Comp->GetClass()->GetName());
            }
          }
        }
      }

      AttachmentContext = Ctx;

      if (AttachLabel.IsValid())
        AttachLabel->SetText(FText::FromString(AttachmentName));

      break;
    }
  }
#else
  UE_LOG(
      LogTemp, Warning,
      TEXT("[GenAI Chat] Blueprint attachment is only available in Editor."));
#endif

  return FReply::Handled();
}

FReply SGenAIChatWidget::OnClearAttachment() {
  AttachmentPath.Empty();
  AttachmentName.Empty();
  AttachmentContext.Empty();
  if (AttachLabel.IsValid())
    AttachLabel->SetText(FText::GetEmpty());
  return FReply::Handled();
}

FReply SGenAIChatWidget::OnCloseClicked() {
  if (OnClose)
    OnClose();
  return FReply::Handled();
}

// ─────────────────────────────────────────────────────────────────────────────
//  UWidget implementation
// ─────────────────────────────────────────────────────────────────────────────

TSharedPtr<SWidget> UGenAIChatWidget::s_OverlaySlot;
TWeakPtr<SGenAIChatWidget> UGenAIChatWidget::s_ChatWidget;

TSharedRef<SWidget> UGenAIChatWidget::RebuildWidget() {
  TSharedRef<SGenAIChatWidget> W = SNew(SGenAIChatWidget);
  SlateWidget = W;
  return W;
}

void UGenAIChatWidget::ReleaseSlateResources(bool bReleaseChildren) {
  Super::ReleaseSlateResources(bReleaseChildren);
  SlateWidget.Reset();
}

#if WITH_EDITOR
const FText UGenAIChatWidget::GetPaletteCategory() {
  return FText::FromString(TEXT("GenAI"));
}
#endif

void UGenAIChatWidget::OpenGenAIChat(UObject *WorldContextObject) {
  if (IsGenAIChatOpen())
    return;

  UGameViewportClient *Viewport = GEngine ? GEngine->GameViewport : nullptr;
  if (!Viewport)
    return;

  TSharedRef<SGenAIChatWidget> Chat = SNew(SGenAIChatWidget);
  s_ChatWidget = Chat;

  TSharedRef<SWidget> Overlay =
      SNew(SOverlay)
      // Dark full-screen dim
      + SOverlay::Slot()[SNew(SBorder)
                             .BorderImage(FAppStyle::GetBrush("BlackBrush"))
                             .ColorAndOpacity(FLinearColor(0, 0, 0, 0.55f))]
      // Chat panel centered
      + SOverlay::Slot().HAlign(HAlign_Center).VAlign(VAlign_Center)[Chat];

  s_OverlaySlot = Overlay;

  Chat->OnClose = []() { UGenAIChatWidget::CloseGenAIChat(); };

  Viewport->AddViewportWidgetContent(Overlay, 100);
  FSlateApplication::Get().SetKeyboardFocus(Chat, EFocusCause::SetDirectly);
}

void UGenAIChatWidget::CloseGenAIChat() {
  if (!s_OverlaySlot.IsValid())
    return;

  UGameViewportClient *Viewport = GEngine ? GEngine->GameViewport : nullptr;
  if (Viewport)
    Viewport->RemoveViewportWidgetContent(s_OverlaySlot.ToSharedRef());

  s_OverlaySlot.Reset();
  s_ChatWidget.Reset();
}

bool UGenAIChatWidget::IsGenAIChatOpen() { return s_OverlaySlot.IsValid(); }
