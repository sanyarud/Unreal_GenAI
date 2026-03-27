# GenAI для Unreal

Плагін для Unreal Engine 5, що інтегрує 30+ AI моделей у твої проекти з повною підтримкою **Blueprint та C++**.

![Інструкція з налаштування](docs/instructions.svg)

## Підтримувані провайдери

| Провайдер | Чат | Стрімінг | TTS | Зображення | Транскрипція | Моделі |
|-----------|:---:|:--------:|:---:|:----------:|:------------:|:------:|
| OpenAI (GPT-4o, GPT-4.1, o1, o3...) | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| Anthropic (Claude Opus/Sonnet/Haiku) | ✅ | ✅ | — | — | — | — |
| Google (Gemini 2.0 Flash, 1.5 Pro...) | ✅ | ✅ | ✅ | — | — | — |
| DeepSeek / Mistral | ✅ | ✅ | — | — | — | — |
| Ollama (Локальні моделі) | ✅ | ✅ | — | — | — | ✅ |
| Будь-який OpenAI-сумісний endpoint | ✅ | ✅ | — | — | — | — |

## Нові можливості (v2.0)

### 1. Локальний ШІ (Ollama)
Плагін тепер автоматично підключається до вашого локального сервера Ollama.
- **Авто-виявлення:** Моделі автоматично підтягуються з вашого сервера (за замовчуванням `http://192.168.3.214:11434`) та з'являються у списку вибору.
- **Повна підтримка стрімінгу:** Локальні моделі працюють так само швидко, як і хмарні.

### 2. Система Скілів (Skills)
Створюйте "експертів" з власними системними промптами.
- **Тригери:** Плагін автоматично активує потрібний системний промпт, якщо у вашому повідомленні є ключові слова (наприклад, "blueprint", "c++", "ui").
- **Експертний контекст:** Наприклад, скіл "C++ Pro" змусить модель слідувати стандартам Unreal Engine при написанні коду.

### 3. Розумна Маршрутизація (Smart Routing)
Плагін сам розуміє, яку модель краще використати для завдання.
- **Авто-перемикання:** Якщо ви питаєте про код, чат може автоматично перемкнутись на DeepSeek або локальну кодинг-модель.
- **Налаштування:** Ви самі обираєте провайдера та модель для "розумної" маршрутизації в налаштуваннях проекту.

## Встановлення

1. Скопіюй папку `UU_GenAI` у директорію `Plugins/` свого проекту.
2. Додай у `.uproject`:
```json
{
  "Name": "UU_GenAI",
  "Enabled": true
}
```
3. Перегенеруй файли проекту та збери.

## Швидкий старт

### Blueprint

1. Відкрий **Project Settings → Plugins → GenAI Plugin** і встав свій API ключ.
2. Додай ноду **Request OpenAI Chat Completion** у Blueprint.
3. Підключи **Make Gen Chat Message** (Role: User, Content: твій запит) → масив Messages.
4. Підключи **OnComplete → Response → Content** до Print String.

### C++

```cpp
#include "OpenAI/GenOAIChat.h"

TWeakObjectPtr<AMyActor> WeakThis(this);

FGenOAIChatSettings Settings;

TArray<FGenChatMessage> Messages;
FGenChatMessage& Msg = Messages.AddDefaulted_GetRef();
Msg.Role = EGenChatRole::User;
Msg.Content = TEXT("Розкажи жарт.");

UGenOAIChat::SendChatRequest(Messages, Settings,
    FOnOAIChatCompleteNative::CreateLambda(
        [WeakThis](const FGenChatResponse& Response, bool bSuccess)
        {
            if (!WeakThis.IsValid()) return;
            if (bSuccess)
                UE_LOG(LogTemp, Log, TEXT("%s"), *Response.Content);
        }));
```

### Стрімінг (токен за токеном)

```cpp
#include "OpenAI/GenOAIChatStream.h"

UGenOAIChatStream::SendStreamChatRequest(Messages, Settings,
    FOnOAIStreamDeltaNative::CreateLambda(
        [WeakThis](const FGenStreamDelta& Delta, bool bSuccess)
        {
            if (!WeakThis.IsValid() || !bSuccess) return;
            // Delta.ContentDelta      — нові токени цього чанку
            // Delta.ContentAccumulated — повний текст на цей момент
            // Delta.bIsDone           — true на останньому чанку
        }));
```

## Чат-віджет

Готовий до використання чат-панель прямо у грі чи редакторі — виглядає і відчувається як сучасний AI-чат.

**Відкрити з Blueprint:**
```
Open GenAI Chat (WorldContextObject)
```

**Або з C++:**
```cpp
#include "UI/GenAIChatWidget.h"
UGenAIChatWidget::OpenGenAIChat(WorldContextObject);
```

Можливості:
- **16 моделей** у випадаючому списку, згрупованих по провайдерах (OpenAI, Anthropic, Google, DeepSeek, Mistral)
- **Стрімінг** відповідей з живим курсором `▌` для OpenAI, Anthropic і Google
- **Прикріплення Blueprint** — вибери Blueprint-ассет у Content Browser і натисни скріпку, щоб передати його властивості, функції та компоненти як контекст (тільки Editor)
- **Enter для відправлення**, кнопка закриття, повноекранний темний оверлей
- Чистий Slate (`SGenAIChatWidget`) обгорнутий у `UWidget` (`UGenAIChatWidget`) для використання у Widget Blueprints

## Можливості

- **Chat completions** — всі основні провайдери, з підтримкою vision (мультимодальність)
- **Стрімінг у реальному часі** — SSE-стрімінг токенів для OpenAI, Anthropic, Google
- **Вбудований чат-віджет** — повна UI-панель з вибором моделі та прикріпленням Blueprint
- **Tool / Function calling** — масив `FGenTool`, працює в Blueprint та C++
- **Структурований вивід** — примусовий JSON Schema (`bStructuredOutput` у налаштуваннях)
- **Text-to-Speech** — OpenAI TTS (tts-1, tts-1-hd, gpt-4o-mini-tts) + Google Cloud TTS
- **Транскрипція аудіо** — OpenAI Whisper, multipart upload
- **Генерація та редагування зображень** — DALL-E 2/3, gpt-image-1
- **Список моделей** — отримай доступні моделі під час виконання
- **Безпечне зберігання API ключів** — XOR + Base64 обфускація, не зберігається відкритим текстом
- **Підтримка проксі** — передай весь трафік через кастомну URL
- **OpenAI-сумісний режим** — вкажи будь-який сумісний endpoint (Groq, Together, Ollama тощо)

## Налаштування

Всі налаштування знаходяться у **Project Settings → Plugins → GenAI Plugin** (`UGenAISettings`).

| Поле | Опис |
|------|------|
| OpenAI API Key | Ключ `sk-...` з platform.openai.com |
| Anthropic API Key | Ключ з console.anthropic.com |
| Google AI API Key | Ключ з aistudio.google.com |
| DeepSeek / Mistral API Key | Ключі конкретних провайдерів |
| OpenAI Base URL Override | Кастомний endpoint, напр. для Groq або Ollama |
| Proxy URL | Маршрутизуй весь трафік через проксі-сервер |
| Enable Extended Logging | Логувати тіла запитів/відповідей (base64 обрізання) |

Також можна встановити ключі під час виконання:
```cpp
GetMutableDefault<UGenAISettings>()->SetOpenAIKey(TEXT("sk-..."));
```

## Архітектура

```
Source/UU_GenAI/
├── Public/
│   ├── GenAITypes.h          # Всі структури та enum'и
│   ├── GenAISettings.h       # UDeveloperSettings
│   ├── GenAIUtils.h          # Внутрішні JSON/HTTP хелпери
│   ├── OpenAI/               # GenOAIChat, GenOAIChatStream, GenOAITTS,
│   │                         #   GenOAITranscription, GenOAIImageGen, GenOAIModels
│   ├── Anthropic/            # GenAnthropicChat, GenAnthropicChatStream
│   ├── Google/               # GenGoogleChat, GenGoogleTTS
│   ├── Compat/               # GenCompatChat (DeepSeek, Mistral, generic)
│   └── UI/                   # GenAIChatWidget (Slate + UMG чат-панель)
└── Private/                  # Реалізації
```

Кожен провайдер слідує одному шаблону:
- **Blueprint нода** — підклас `UCancellableAsyncAction`, `Request<Provider><Feature>`
- **C++ статичний клас** — `Send<Feature>Request(...)` + нативний делегат

## Версія рушія

Протестовано на **Unreal Engine 5.6**. Повинно працювати на UE 5.3+.

## Ліцензія

MIT

---

# GenAI for Unreal

An Unreal Engine 5 plugin that integrates 30+ AI models into your projects with full **Blueprint and C++** support.

## Supported Providers

| Provider | Chat | Stream | TTS | Image | Transcription | Models |
|----------|:----:|:------:|:---:|:-----:|:-------------:|:------:|
| OpenAI (GPT-4o, GPT-4.1, o1, o3...) | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| Anthropic (Claude Opus/Sonnet/Haiku) | ✅ | ✅ | — | — | — | — |
| Google (Gemini 2.0 Flash, 1.5 Pro...) | ✅ | ✅ | ✅ | — | — | — |
| DeepSeek / Mistral | ✅ | ✅ | — | — | — | — |
| Ollama (Local Models) | ✅ | ✅ | — | — | — | ✅ |
| Any OpenAI-compatible endpoint | ✅ | ✅ | — | — | — | — |

## New Features (v2.0)

### 1. Local AI (Ollama)
The plugin now automatically connects to your local Ollama server.
- **Auto-Discovery:** Models are automatically fetched from your server (default `http://192.168.3.214:11434`) and populated in the selection list.
- **Streaming Support:** Local models run with real-time streaming just like cloud providers.

### 2. Skills System
Create AI "experts" with custom system prompts.
- **Keywords Triggers:** The plugin automatically injects expert instructions if your message contains specific keywords (e.g., "blueprint", "cpp", "logic").
- **Expert Context:** Use predefined skills like "Blueprint Expert" to ensure the AI follows specific UE5 standards.

### 3. Smart Routing
The plugin intelligently delegates tasks to specific models.
- **Auto-Switching:** If you ask a technical question, the chat can automatically switch to a coding-specialized model (like DeepSeek or a local LLM).
- **Customizable:** Define your preferred coding and thinking models in the Project Settings.

## Installation

1. Copy the `UU_GenAI` folder into your project's `Plugins/` directory.
2. Add to your `.uproject`:
```json
{
  "Name": "UU_GenAI",
  "Enabled": true
}
```
3. Regenerate project files and build.

## Quick Start

### Blueprint

1. Open **Project Settings → Plugins → GenAI Plugin** and paste your API key.
2. Add a **Request OpenAI Chat Completion** node to your Blueprint.
3. Connect **Make Gen Chat Message** (Role: User, Content: your prompt) → Messages array.
4. Wire **OnComplete → Response → Content** to a Print String.

### C++

```cpp
#include "OpenAI/GenOAIChat.h"

TWeakObjectPtr<AMyActor> WeakThis(this);

FGenOAIChatSettings Settings;
// Settings.Model = EGenOAIModel::GPT_4o;  // default

TArray<FGenChatMessage> Messages;
FGenChatMessage& Msg = Messages.AddDefaulted_GetRef();
Msg.Role = EGenChatRole::User;
Msg.Content = TEXT("Tell me a joke.");

UGenOAIChat::SendChatRequest(Messages, Settings,
    FOnOAIChatCompleteNative::CreateLambda(
        [WeakThis](const FGenChatResponse& Response, bool bSuccess)
        {
            if (!WeakThis.IsValid()) return;
            if (bSuccess)
                UE_LOG(LogTemp, Log, TEXT("%s"), *Response.Content);
        }));
```

### Streaming (token-by-token)

```cpp
#include "OpenAI/GenOAIChatStream.h"

UGenOAIChatStream::SendStreamChatRequest(Messages, Settings,
    FOnOAIStreamDeltaNative::CreateLambda(
        [WeakThis](const FGenStreamDelta& Delta, bool bSuccess)
        {
            if (!WeakThis.IsValid() || !bSuccess) return;
            // Delta.ContentDelta      — new tokens this chunk
            // Delta.ContentAccumulated — full text so far
            // Delta.bIsDone           — true on last chunk
        }));
```

## Chat Widget

A ready-to-use in-game / in-editor chat panel that looks and feels like a modern AI chat UI.

**Open from Blueprint:**
```
Open GenAI Chat (WorldContextObject)
```

**Or from C++:**
```cpp
#include "UI/GenAIChatWidget.h"
UGenAIChatWidget::OpenGenAIChat(WorldContextObject);
```

Features:
- **16 models** grouped by provider in a dropdown (OpenAI, Anthropic, Google, DeepSeek, Mistral)
- **Streaming** responses with a live `▌` cursor for OpenAI, Anthropic, and Google
- **Blueprint attachment** — select a Blueprint asset in the Content Browser and click the clip icon to attach its properties, functions, and components as context (editor builds only)
- **Enter to send**, close button, full-screen dark overlay
- Pure Slate (`SGenAIChatWidget`) wrapped in a `UWidget` (`UGenAIChatWidget`) for use in Widget Blueprints

## Features

- **Chat completions** — all major providers, with vision (multimodal) support
- **Real-time streaming** — SSE-based token streaming for OpenAI, Anthropic, Google
- **In-game chat widget** — full UI panel with model selector and Blueprint attachment
- **Tool / Function calling** — structured `FGenTool` array, works in Blueprint and C++
- **Structured output** — JSON Schema enforcement (`bStructuredOutput` in settings)
- **Text-to-Speech** — OpenAI TTS (tts-1, tts-1-hd, gpt-4o-mini-tts) + Google Cloud TTS
- **Audio transcription** — OpenAI Whisper, multipart upload
- **Image generation & editing** — DALL-E 2/3, gpt-image-1
- **Models listing** — fetch available models at runtime
- **Secure API key storage** — XOR + Base64 obfuscation, non-plaintext in config
- **Proxy support** — route all requests through a custom URL
- **OpenAI-compatible mode** — point at any compatible endpoint (Groq, Together, Ollama, etc.)

## Settings

All settings live in **Project Settings → Plugins → GenAI Plugin** (`UGenAISettings`).

| Field | Description |
|-------|-------------|
| OpenAI API Key | `sk-...` key from platform.openai.com |
| Anthropic API Key | Key from console.anthropic.com |
| Google AI API Key | Key from aistudio.google.com |
| DeepSeek / Mistral API Key | Provider-specific keys |
| OpenAI Base URL Override | Custom endpoint, e.g. for Groq or Ollama |
| Proxy URL | Route all traffic through a proxy server |
| Enable Extended Logging | Log request/response bodies (base64 truncated) |

You can also set keys at runtime:
```cpp
GetMutableDefault<UGenAISettings>()->SetOpenAIKey(TEXT("sk-..."));
```

## Architecture

```
Source/UU_GenAI/
├── Public/
│   ├── GenAITypes.h          # All structs & enums
│   ├── GenAISettings.h       # UDeveloperSettings
│   ├── GenAIUtils.h          # Internal JSON/HTTP helpers
│   ├── OpenAI/               # GenOAIChat, GenOAIChatStream, GenOAITTS,
│   │                         #   GenOAITranscription, GenOAIImageGen, GenOAIModels
│   ├── Anthropic/            # GenAnthropicChat, GenAnthropicChatStream
│   ├── Google/               # GenGoogleChat, GenGoogleTTS
│   ├── Compat/               # GenCompatChat (DeepSeek, Mistral, generic)
│   └── UI/                   # GenAIChatWidget (Slate + UMG chat panel)
└── Private/                  # Implementations
```

Each provider follows the same pattern:
- **Blueprint node** — `UCancellableAsyncAction` subclass, `Request<Provider><Feature>`
- **C++ static class** — `Send<Feature>Request(...)` + native delegate

## Engine Version

Tested on **Unreal Engine 5.6**. Should work on UE 5.3+.

## License

MIT
