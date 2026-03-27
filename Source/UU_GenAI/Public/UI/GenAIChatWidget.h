// Copyright (c) 2024 UU Plugin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Text/SMultiLineEditableText.h"
#include "Widgets/Input/SComboBox.h"
#include "Components/Widget.h"
#include "GenAITypes.h"
#include "GenAIChatWidget.generated.h"

// ─────────────────────────────────────────────────────────────────────────────
//  Model registry
// ─────────────────────────────────────────────────────────────────────────────

struct FGenAIModelEntry
{
    FString Display;    // "GPT-4o"
    FString Group;      // "OpenAI", "Anthropic", "Google", "DeepSeek", "Mistral"
    FString Provider;   // "openai" | "anthropic" | "google" | "deepseek" | "mistral"
    FString ModelId;    // "gpt-4o"
};

// ─────────────────────────────────────────────────────────────────────────────
//  Slate chat widget
// ─────────────────────────────────────────────────────────────────────────────

class UU_GENAI_API SGenAIChatWidget : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SGenAIChatWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);

    /** Called externally to close this widget */
    TFunction<void()> OnClose;

    /** Refreshes the local model list from Ollama */
    void RefreshOllamaModels();

    const TArray<FGenAIModelEntry>& GetModels() const { return Models; }

private:
    // ─── Layout builders ──────────────────────────────────────────────────────
    TSharedRef<SWidget> BuildHeader();
    TSharedRef<SWidget> BuildSidebar();
    TSharedRef<SWidget> BuildScrollArea();
    TSharedRef<SWidget> BuildAttachmentBar();
    TSharedRef<SWidget> BuildInputRow();

    // ─── Message display ──────────────────────────────────────────────────────
    void AppendUserBubble(const FString& Text);
    void AppendAIBubble(const FString& Text, bool bStreaming);
    void UpdateStreamingBubble(const FString& FullText, bool bDone);
    TSharedRef<SWidget> MakeBubble(bool bIsUser, const FString& Text);
    void ScrollToBottom();
    
    // ─── Sessions ─────────────────────────────────────────────────────────────
    void SwitchToSession(const FString& SessionId);
    void CreateNewSession();
    void RefreshSessionsList();
    TSharedRef<SWidget> MakeSessionRow(TSharedPtr<FGenAIChatSession> Session);

    // ─── Actions ──────────────────────────────────────────────────────────────
    void DoSend();
    FReply OnSendClicked();
    void OnInputCommitted(const FText& Text, ETextCommit::Type Type);
    void OnModelSelected(TSharedPtr<FString> Item, ESelectInfo::Type);
    void OnLanguageSelected(TSharedPtr<FString> Item, ESelectInfo::Type);
    TSharedRef<SWidget> MakeModelRow(TSharedPtr<FString> Item);
    FText GetCurrentModelLabel() const;

    FReply OnAttachClicked();
    FReply OnClearAttachment();
    FReply OnCloseClicked();

    // ─── AI dispatch ──────────────────────────────────────────────────────────
    void SendToProvider(const TArray<FGenChatMessage>& Messages, int32 ModelIdx);

    // ─── Attachment ───────────────────────────────────────────────────────────
    FString AttachmentPath;
    FString AttachmentName;
    FString AttachmentContext;  // Blueprint info serialized to text

    // ─── State ────────────────────────────────────────────────────────────────
    TArray<FGenChatMessage> History;
    int32 SelectedModel = 0;
    EGenAILanguage SelectedLanguage = EGenAILanguage::Ukrainian;
    bool bStreaming = false;
    FString StreamAccum;

    // ─── Widget refs ──────────────────────────────────────────────────────────
    TSharedPtr<SScrollBox>              MessagesScroll;
    TSharedPtr<SVerticalBox>            MessagesVBox;
    TSharedPtr<SEditableTextBox>        InputBox;
    TSharedPtr<SComboBox<TSharedPtr<FString>>> ModelCombo;
    TSharedPtr<SComboBox<TSharedPtr<FString>>> LanguageCombo;
    TArray<TSharedPtr<FString>>         ComboItems;
    TArray<TSharedPtr<FString>>         LanguageItems;
    TSharedPtr<SEditableTextBox>        CustomModelBox;
    TSharedPtr<SMultiLineEditableText>  StreamingLabel_Editable;   // copyable live text
    TSharedPtr<SWidget>                 AttachBar;
    TSharedPtr<STextBlock>              AttachLabel;
    
    // ─── Session UI ───────────────────────────────────────────────────────────
    TSharedPtr<SVerticalBox>            SessionsVBox;
    TArray<TSharedPtr<FGenAIChatSession>> SessionItems;

    // ─── Brushes (must outlive widget) ────────────────────────────────────────
    FSlateBrush BgBrush;
    FSlateBrush HeaderBrush;
    FSlateBrush InputBrush;
    FSlateBrush SeparatorBrush;
    FSlateBrush UserBubbleBrush;
    FSlateBrush AIBubbleBrush;
    FSlateBrush AttachBrush;
    FSlateBrush SendBtnBrush;
    FSlateBrush SendBtnHoverBrush;
    FSlateBrush TransparentBrush;

    TArray<FGenAIModelEntry> Models;
};

// ─────────────────────────────────────────────────────────────────────────────
//  UMG wrapper  (use in Widget Blueprints or via static helpers)
// ─────────────────────────────────────────────────────────────────────────────

UCLASS(meta = (DisplayName = "GenAI Chat Widget"))
class UU_GENAI_API UGenAIChatWidget : public UWidget
{
    GENERATED_BODY()

public:
    /**
     * Open the GenAI chat panel as a full-screen overlay.
     * Safe to call multiple times — won't open duplicates.
     */
    UFUNCTION(BlueprintCallable, Category = "GenAI|Chat",
              meta = (WorldContext = "WorldContextObject",
                       DisplayName = "Open GenAI Chat"))
    static void OpenGenAIChat(UObject* WorldContextObject);

    /** Close the currently open chat panel. */
    UFUNCTION(BlueprintCallable, Category = "GenAI|Chat",
              meta = (DisplayName = "Close GenAI Chat"))
    static void CloseGenAIChat();

    UFUNCTION(BlueprintCallable, Category = "GenAI|Chat")
    static bool IsGenAIChatOpen();

protected:
    // UWidget
    virtual TSharedRef<SWidget> RebuildWidget() override;
    virtual void ReleaseSlateResources(bool bReleaseChildren) override;

#if WITH_EDITOR
    virtual const FText GetPaletteCategory() override;
#endif

private:
    TSharedPtr<SGenAIChatWidget> SlateWidget;

    // Viewport overlay tracking (one global instance)
    static TSharedPtr<SWidget>          s_OverlaySlot;
    static TWeakPtr<SGenAIChatWidget>   s_ChatWidget;
};
