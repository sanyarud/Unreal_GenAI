# GenAI для Unreal

Плагін для Unreal Engine 5, що інтегрує 30+ AI моделей у ваші проєкти з повною підтримкою **Blueprint та C++**.

## Підтримувані провайдери

| Провайдер | Чат | Стрімінг | Tool Calling | TTS | Зображення | Транскрипція |
|-----------|:---:|:--------:|:------------:|:---:|:----------:|:------------:|
| OpenAI (GPT-4o, o1, o3...) | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| Anthropic (Claude 3.7/3.5 Sonnet, Haiku, Opus) | ✅ | ✅ | ✅ | — | — | — |
| Google (Gemini 2.0 Flash, 1.5 Pro...) | ✅ | ✅ | ✅ | ✅ | — | — |
| DeepSeek / Mistral | ✅ | ✅ | — | — | — | — |
| Ollama (Локальні моделі) | ✅ | ✅ | — | — | — | ✅ |
| Будь-який OpenAI-сумісний endpoint | ✅ | ✅ | — | — | — | — |

## Можливості (v2.0)

### OAuth-авторизація (Anthropic Claude)
Вхід до Anthropic Claude прямо з плагіна без API-ключів.
- **Авторизація через браузер:** Натисніть "Login" у хедері чату, авторизуйтесь у браузері — і готово.
- **OAuth 2.0 PKCE:** Безпечний flow з локальним callback-сервером — API-ключ не потрібен.
- **Збереження токенів:** Токени зберігаються (обфусковано) та автоматично оновлюються по закінченню терміну дії.
- **Фолбек:** Якщо API-ключ налаштовано, він має пріоритет. OAuth використовується, коли ключ не задано.

### Локальний ШІ (Ollama)
Плагін автоматично підключається до вашого локального сервера Ollama.
- **Авто-виявлення:** Моделі автоматично підтягуються з вашого сервера та з'являються у списку вибору.
- **Підтримка стрімінгу:** Локальні моделі працюють з потоковою передачею, як і хмарні провайдери.

### Система скілів (Skills)
Створюйте ШІ-"експертів" з кастомними системними промптами.
- **Тригери за ключовими словами:** Плагін автоматично підключає експертні інструкції, якщо у повідомленні є ключові слова (наприклад, "blueprint", "c++", "ui").
- **Експертний контекст:** Використовуйте скіли "Blueprint Expert" або "C++ Pro", щоб ШІ слідував стандартам UE5.

### Розумна маршрутизація (Smart Routing)
Плагін автоматично обирає оптимальну модель для завдання.
- **Авто-перемикання:** Якщо ви питаєте про код, чат може автоматично перемкнутись на спеціалізовану кодинг-модель.
- **Налаштування:** Оберіть провайдера та модель для маршрутизації у налаштуваннях проєкту.

### Інтеграція з редактором
ШІ може маніпулювати Unreal Editor напряму.
- **Створення ассетів:** Blueprint, Data Assets через `CreateEditorAsset`.
- **Ін'єкція Blueprint-логіки:** Парсинг T3D-тексту та вставка нод у граф Blueprint.
- **Додавання компонентів:** Динамічне додавання компонентів до Blueprint.
- **Аналіз Blueprint:** Експорт структури графа та компіляція з детальним логом помилок.
- **Контекстна обізнаність:** Автоматично захоплює виділені ассети та буфер обміну як контекст для ШІ.

### Tool / Function Calling
Повна підтримка виклику інструментів для всіх основних провайдерів.
- **OpenAI:** Tool calls парсяться як у синхронних, так і в потокових відповідях.
- **Anthropic:** Парсинг блоків `tool_use` з відповідей, стрімінг `input_json_delta`.
- **Google Gemini:** Парсинг `functionCall` у синхронних та потокових відповідях.
- **Уніфіковані типи:** `FGenTool`, `FGenToolCall`, `FGenStreamDelta` з полями для tool calls.

## Встановлення

1. Скопіюйте папку `UU_GenAI` у директорію `Plugins/` вашого проєкту.
2. Додайте у `.uproject`:
```json
{
  "Name": "UU_GenAI",
  "Enabled": true
}
```
3. Перегенеруйте файли проєкту та зберіть.

## Швидкий старт

### Blueprint

1. Відкрийте **Project Settings > Plugins > GenAI Plugin** і вставте API-ключ (або натисніть Login у чат-віджеті для OAuth-авторизації Anthropic).
2. Додайте ноду **Request OpenAI Chat Completion** у Blueprint.
3. Підключіть **Make Gen Chat Message** (Role: User, Content: ваш запит) до масиву Messages.
4. Підключіть **OnComplete > Response > Content** до Print String.

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
            // Delta.ContentDelta           — нові токени цього чанку
            // Delta.ContentAccumulated     — повний текст на цей момент
            // Delta.bIsDone               — true на останньому чанку
            // Delta.ToolCallFunctionName  — ім'я функції (стрімінг tool calls)
            // Delta.ToolCallArgumentsDelta — фрагмент аргументів (стрімінг tool calls)
        }));
```

### Tool Calling

```cpp
#include "OpenAI/GenOAIChat.h"

FGenOAIChatSettings Settings;

// Визначаємо інструмент
FGenTool Tool;
Tool.Type = TEXT("function");
Tool.Function.Name = TEXT("get_weather");
Tool.Function.Description = TEXT("Get the current weather for a location");
Tool.Function.ParametersJsonSchema = TEXT(R"({"type":"object","properties":{"location":{"type":"string"}},"required":["location"]})");

Settings.Tools.Add(Tool);
Settings.ToolChoice = EGenToolChoice::Auto;

UGenOAIChat::SendChatRequest(Messages, Settings,
    FOnOAIChatCompleteNative::CreateLambda(
        [](const FGenChatResponse& Response, bool bSuccess)
        {
            if (!bSuccess) return;
            for (const FGenToolCall& TC : Response.ToolCalls)
            {
                UE_LOG(LogTemp, Log, TEXT("Tool: %s, Args: %s"),
                    *TC.FunctionName, *TC.FunctionArguments);
            }
        }));
```

### OAuth-авторизація (C++)

```cpp
#include "GenAIOAuth.h"

// Вхід — відкриває браузер
FGenAIOAuth::Get().Login();

// Перевірка статусу
if (FGenAIOAuth::Get().IsLoggedIn())
{
    // Запити до Anthropic автоматично використають OAuth-токен
}

// Вихід
FGenAIOAuth::Get().Logout();

// Підписка на зміну статусу
FGenAIOAuth::Get().OnLoginStatusChanged.AddLambda([](bool bLoggedIn)
{
    UE_LOG(LogTemp, Log, TEXT("OAuth: %s"), bLoggedIn ? TEXT("Logged in") : TEXT("Logged out"));
});
```

## Чат-віджет

Готова до використання чат-панель для гри або редактора — виглядає як сучасний AI-чат.

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
- **14+ моделей** у випадаючому списку, згрупованих по провайдерах (OpenAI, Anthropic, Google, DeepSeek, Mistral) + динамічні моделі Ollama
- **Кнопка Login / Logout** у хедері для OAuth-авторизації Anthropic
- **Стрімінг** відповідей з живим курсором для OpenAI, Anthropic, Google та Ollama
- **Управління сесіями** — кілька чат-сесій, створення нових, перемикання, збереження історії
- **Прикріплення Blueprint** — виберіть Blueprint у Content Browser і натисніть скріпку, щоб передати його властивості, функції та компоненти як контекст (лише Editor)
- **Кастомні ID моделей** — виберіть "Custom" для будь-якого провайдера і введіть довільний ID моделі
- **Вибір мови** — перемикання між українською та англійською мовою відповідей
- **Виконання інструментів редактора** — ШІ може створювати ассети, інжектити Blueprint-ноди, додавати компоненти
- **Enter для відправлення**, кнопка закриття, повноекранний темний оверлей
- Чистий Slate (`SGenAIChatWidget`) обгорнутий у `UWidget` (`UGenAIChatWidget`) для Widget Blueprints

## Налаштування

Всі налаштування знаходяться у **Project Settings > Plugins > GenAI Plugin** (`UGenAISettings`).

| Поле | Опис |
|------|------|
| **API-ключі** | |
| OpenAI API Key | Ключ `sk-...` з platform.openai.com |
| Anthropic API Key | Ключ з console.anthropic.com (або OAuth-авторизація) |
| Google AI API Key | Ключ з aistudio.google.com |
| DeepSeek API Key | Ключ з DeepSeek |
| Mistral API Key | Ключ з Mistral |
| **Endpoints** | |
| OpenAI Base URL Override | Кастомний endpoint для OpenAI-сумісних API (Groq, Together тощо) |
| Ollama Base URL | URL локального Ollama-сервера (за замовч.: `http://localhost:11434`) |
| Anthropic API Version | Версія API Anthropic (за замовч.: `2023-06-01`) |
| **Проксі** | |
| Proxy URL | Маршрутизувати весь API-трафік через проксі-сервер |
| Proxy Auth Header | Заголовок автентифікації для проксі |
| **Управління моделями** | |
| Enabled Models | Увімкнути/вимкнути конкретні моделі у випадаючому списку |
| Default Chat Model | ID моделі для загального чату |
| Default Code Model | ID моделі при прикріпленні Blueprint як контексту |
| **Параметри моделі** | |
| Temperature | Креативність відповідей (0.0 = детерміновано, 2.0 = креативно) |
| Max Tokens | Максимальна кількість токенів відповіді |
| Max Conversation History | Кількість попередніх повідомлень для контексту |
| **Інше** | |
| Preferred Language | Українська або англійська |
| Installed Skills | Список скілів з ключовими словами та системними промптами |
| Smart Routing | Конфіг маршрутизації: ключові слова, провайдер, модель |
| Enable Extended Logging | Логувати тіла запитів/відповідей (base64 обрізання) |

Ключі можна також встановити під час виконання:
```cpp
GetMutableDefault<UGenAISettings>()->SetOpenAIKey(TEXT("sk-..."));
GetMutableDefault<UGenAISettings>()->SetAnthropicKey(TEXT("sk-..."));
```

## Архітектура

```
Source/UU_GenAI/
├── Public/
│   ├── GenAITypes.h          # Всі структури, enum'и, делегати
│   ├── GenAISettings.h       # UDeveloperSettings (UI налаштувань проєкту)
│   ├── GenAIUtils.h          # JSON-білдери, парсери, резолвери ключів
│   ├── GenAIOAuth.h          # Менеджер OAuth 2.0 PKCE авторизації
│   ├── GenAISubsystem.h      # Підсистема рушія: історія, виконання інструментів, контекст
│   ├── GenAIEditorBridge.h   # Підсистема редактора: створення ассетів, маніпуляція графами
│   ├── UU_GenAIModule.h      # Запуск/зупинка модуля
│   ├── OpenAI/               # GenOAIChat, GenOAIChatStream, GenOAITTS,
│   │                         #   GenOAITranscription, GenOAIImageGen, GenOAIModels
│   ├── Anthropic/            # GenAnthropicChat, GenAnthropicChatStream
│   ├── Google/               # GenGoogleChat, GenGoogleTTS
│   ├── Ollama/               # GenOllamaChatStream
│   ├── Compat/               # GenCompatChat (DeepSeek, Mistral, generic)
│   └── UI/                   # GenAIChatWidget (Slate + UMG чат-панель)
└── Private/                  # Реалізації (дзеркально до Public/)
```

Кожен провайдер слідує одному шаблону:
- **Blueprint-нода** — підклас `UCancellableAsyncAction`, `Request<Provider><Feature>`
- **C++ статичний клас** — `Send<Feature>Request(...)` + нативний делегат

### Пріоритет авторизації (Anthropic)

1. `ApiKeyOverride` у структурі налаштувань запиту (найвищий)
2. API-ключ з Project Settings
3. OAuth Bearer token через `FGenAIOAuth` (якщо залогінений і ключ не задано)

## Версія рушія

Протестовано на **Unreal Engine 5.5+**. Повинно працювати на UE 5.3+.

## Ліцензія

MIT

---

# GenAI for Unreal

An Unreal Engine 5 plugin that integrates 30+ AI models into your projects with full **Blueprint and C++** support.

## Supported Providers

| Provider | Chat | Stream | Tool Calling | TTS | Image | Transcription |
|----------|:----:|:------:|:------------:|:---:|:-----:|:-------------:|
| OpenAI (GPT-4o, o1, o3...) | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |
| Anthropic (Claude 3.7/3.5 Sonnet, Haiku, Opus) | ✅ | ✅ | ✅ | — | — | — |
| Google (Gemini 2.0 Flash, 1.5 Pro...) | ✅ | ✅ | ✅ | ✅ | — | — |
| DeepSeek / Mistral | ✅ | ✅ | — | — | — | — |
| Ollama (Local Models) | ✅ | ✅ | — | — | — | ✅ |
| Any OpenAI-compatible endpoint | ✅ | ✅ | — | — | — | — |

## Features (v2.0)

### OAuth Login (Anthropic Claude)
Login to Anthropic Claude directly from the plugin without API keys.
- **Browser-based auth:** Click "Login" in the chat header, authorize in your browser, and you're in.
- **OAuth 2.0 PKCE:** Secure flow with local callback server — no API key needed.
- **Token persistence:** Tokens are saved (obfuscated) and auto-refreshed on expiry.
- **Fallback:** If an API key is configured, it takes priority. OAuth is used when no key is set.

### Local AI (Ollama)
The plugin automatically connects to your local Ollama server.
- **Auto-Discovery:** Models are automatically fetched from your server and appear in the selection list.
- **Streaming Support:** Local models run with real-time streaming just like cloud providers.

### Skills System
Create AI "experts" with custom system prompts.
- **Keyword Triggers:** The plugin automatically injects expert instructions if your message contains specific keywords (e.g., "blueprint", "c++", "ui").
- **Expert Context:** Use predefined skills like "Blueprint Expert" or "C++ Pro" to ensure the AI follows UE5 standards.

### Smart Routing
The plugin intelligently delegates tasks to specific models.
- **Auto-Switching:** If you ask a coding question, the chat can automatically switch to a coding-specialized model.
- **Customizable:** Define your preferred coding provider and model in Project Settings.

### Editor Integration
The AI can manipulate the Unreal Editor directly.
- **Create assets:** Blueprints, Data Assets via `CreateEditorAsset`.
- **Inject Blueprint logic:** Parse T3D text and inject nodes into Blueprint graphs.
- **Add components:** Dynamically add components to Blueprints.
- **Blueprint analysis:** Export graph structure and compile with detailed error logs.
- **Context awareness:** Automatically grabs selected assets and clipboard content as context for the AI.

### Tool / Function Calling
Full tool calling support across all major providers.
- **OpenAI:** Tool calls parsed in both sync and streaming responses.
- **Anthropic:** `tool_use` blocks parsed from responses, `input_json_delta` streaming.
- **Google Gemini:** `functionCall` parts parsed from both sync and streaming.
- **Unified types:** `FGenTool`, `FGenToolCall`, `FGenStreamDelta` with tool call fields.

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

1. Open **Project Settings > Plugins > GenAI Plugin** and paste your API key (or click Login in the chat widget for Anthropic OAuth).
2. Add a **Request OpenAI Chat Completion** node to your Blueprint.
3. Connect **Make Gen Chat Message** (Role: User, Content: your prompt) to the Messages array.
4. Wire **OnComplete > Response > Content** to a Print String.

### C++

```cpp
#include "OpenAI/GenOAIChat.h"

TWeakObjectPtr<AMyActor> WeakThis(this);

FGenOAIChatSettings Settings;

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
            // Delta.ContentDelta           — new tokens this chunk
            // Delta.ContentAccumulated     — full text so far
            // Delta.bIsDone               — true on last chunk
            // Delta.ToolCallFunctionName  — function name (streaming tool calls)
            // Delta.ToolCallArgumentsDelta — argument fragment (streaming tool calls)
        }));
```

### Tool Calling

```cpp
#include "OpenAI/GenOAIChat.h"

FGenOAIChatSettings Settings;

// Define a tool
FGenTool Tool;
Tool.Type = TEXT("function");
Tool.Function.Name = TEXT("get_weather");
Tool.Function.Description = TEXT("Get the current weather for a location");
Tool.Function.ParametersJsonSchema = TEXT(R"({"type":"object","properties":{"location":{"type":"string"}},"required":["location"]})");

Settings.Tools.Add(Tool);
Settings.ToolChoice = EGenToolChoice::Auto;

UGenOAIChat::SendChatRequest(Messages, Settings,
    FOnOAIChatCompleteNative::CreateLambda(
        [](const FGenChatResponse& Response, bool bSuccess)
        {
            if (!bSuccess) return;
            for (const FGenToolCall& TC : Response.ToolCalls)
            {
                UE_LOG(LogTemp, Log, TEXT("Tool: %s, Args: %s"),
                    *TC.FunctionName, *TC.FunctionArguments);
            }
        }));
```

### OAuth Login (C++)

```cpp
#include "GenAIOAuth.h"

// Login — opens browser
FGenAIOAuth::Get().Login();

// Check status
if (FGenAIOAuth::Get().IsLoggedIn())
{
    // Anthropic requests will automatically use the OAuth token
}

// Logout
FGenAIOAuth::Get().Logout();

// Listen for status changes
FGenAIOAuth::Get().OnLoginStatusChanged.AddLambda([](bool bLoggedIn)
{
    UE_LOG(LogTemp, Log, TEXT("OAuth: %s"), bLoggedIn ? TEXT("Logged in") : TEXT("Logged out"));
});
```

## Chat Widget

A ready-to-use in-game / in-editor chat panel that looks and feels like a modern AI chat.

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
- **14+ models** grouped by provider in a dropdown (OpenAI, Anthropic, Google, DeepSeek, Mistral) plus dynamic Ollama models
- **Login / Logout button** in the header for OAuth-based Anthropic auth
- **Streaming** responses with a live cursor for OpenAI, Anthropic, Google, and Ollama
- **Session management** — multiple chat sessions, create new, switch between, persistent history
- **Blueprint attachment** — select a Blueprint asset in the Content Browser and click the clip icon to attach its properties, functions, and components as context (editor builds only)
- **Custom model IDs** — select "Custom" for any provider and type any model ID
- **Language selector** — switch between Ukrainian and English response language
- **Editor tool execution** — AI can create assets, inject Blueprint nodes, and add components directly
- **Enter to send**, close button, full-screen dark overlay
- Pure Slate (`SGenAIChatWidget`) wrapped in a `UWidget` (`UGenAIChatWidget`) for use in Widget Blueprints

## Settings

All settings live in **Project Settings > Plugins > GenAI Plugin** (`UGenAISettings`).

| Field | Description |
|-------|-------------|
| **API Keys** | |
| OpenAI API Key | `sk-...` key from platform.openai.com |
| Anthropic API Key | Key from console.anthropic.com (or use OAuth Login) |
| Google AI API Key | Key from aistudio.google.com |
| DeepSeek API Key | Key from DeepSeek |
| Mistral API Key | Key from Mistral |
| **Endpoints** | |
| OpenAI Base URL Override | Custom endpoint for OpenAI-compatible APIs (Groq, Together, etc.) |
| Ollama Base URL | Local Ollama server URL (default: `http://localhost:11434`) |
| Anthropic API Version | Anthropic API version header (default: `2023-06-01`) |
| **Proxy** | |
| Proxy URL | Route all API traffic through a proxy server |
| Proxy Auth Header | Authentication header for the proxy |
| **Model Management** | |
| Enabled Models | Enable/disable specific models in the chat dropdown |
| Default Chat Model | Model ID used for general chat |
| Default Code Model | Model ID used when a Blueprint is attached as context |
| **Model Parameters** | |
| Temperature | Response creativity (0.0 = deterministic, 2.0 = creative) |
| Max Tokens | Maximum response tokens per request |
| Max Conversation History | How many previous messages to keep in context |
| **Other** | |
| Preferred Language | Ukrainian or English |
| Installed Skills | List of expert skills with keywords and system prompts |
| Smart Routing | Auto-routing config: coding keywords, provider, model |
| Enable Extended Logging | Log request/response bodies (base64 truncated) |

You can also set keys at runtime:
```cpp
GetMutableDefault<UGenAISettings>()->SetOpenAIKey(TEXT("sk-..."));
GetMutableDefault<UGenAISettings>()->SetAnthropicKey(TEXT("sk-..."));
```

## Architecture

```
Source/UU_GenAI/
├── Public/
│   ├── GenAITypes.h          # All structs, enums, delegates
│   ├── GenAISettings.h       # UDeveloperSettings (Project Settings UI)
│   ├── GenAIUtils.h          # Internal JSON builders, parsers, key resolution
│   ├── GenAIOAuth.h          # OAuth 2.0 PKCE login manager
│   ├── GenAISubsystem.h      # Engine subsystem: history, tool execution, context
│   ├── GenAIEditorBridge.h   # Editor subsystem: asset creation, graph manipulation
│   ├── UU_GenAIModule.h      # Module startup/shutdown
│   ├── OpenAI/               # GenOAIChat, GenOAIChatStream, GenOAITTS,
│   │                         #   GenOAITranscription, GenOAIImageGen, GenOAIModels
│   ├── Anthropic/            # GenAnthropicChat, GenAnthropicChatStream
│   ├── Google/               # GenGoogleChat, GenGoogleTTS
│   ├── Ollama/               # GenOllamaChatStream
│   ├── Compat/               # GenCompatChat (DeepSeek, Mistral, generic)
│   └── UI/                   # GenAIChatWidget (Slate + UMG chat panel)
└── Private/                  # Implementations (mirrors Public/ structure)
```

Each provider follows the same pattern:
- **Blueprint node** — `UCancellableAsyncAction` subclass, `Request<Provider><Feature>`
- **C++ static class** — `Send<Feature>Request(...)` + native delegate

### Authentication Priority (Anthropic)

1. `ApiKeyOverride` on the per-request settings struct (highest)
2. API key from Project Settings
3. OAuth Bearer token via `FGenAIOAuth` (if logged in and no key set)

## Engine Version

Tested on **Unreal Engine 5.5+**. Should work on UE 5.3+.

## License

MIT
