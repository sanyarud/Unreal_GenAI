# UU_GenAI - Unreal Engine Generative AI Plugin

## [EN] Overview
A powerful, high-performance plugin for integrating Generative AI into Unreal Engine 5. Supports multiple providers, local models (Ollama), dynamic expert prompts (Skills), and intelligent model delegation (Smart Routing).

### Key Features
- **Modern UI:** Premium centered chat interface with glassmorphism and smooth animations.
- **Ollama Integration:** Automatic model fetching from local servers (default: `http://192.168.3.214:11434`).
- **Skills System:** Injects expert system prompts based on keywords (e.g., C++ Pro, Blueprint Expert).
- **Smart Routing:** Automatically switches to the best model based on your intent (e.g., switches to DeepSeek/Coding model when asking for blueprints).
- **Streaming Support:** Real-time token streaming for all providers including OpenAI, Anthropic, Gemini, DeepSeek, Mistral, and Ollama.

### Configuration
1. Open **Project Settings** -> **Plugins** -> **UU_GenAI**.
2. Set your API keys or configure the local Ollama URL.
3. Add custom **Skills** with their respective triggers and system prompts.

---

## [UA] Огляд
Потужний плагін для інтеграції генеративного ШІ в Unreal Engine 5. Підтримує багатьох провайдерів, локальні моделі (Ollama), динамічні експертні промпти (Скіли) та інтелектуальну маршрутизацію (Smart Routing).

### Основні можливості
- **Сучасний UI:** Преміальний центрований інтерфейс чату з ефектом матового скла та плавними анімаціями.
- **Інтеграція з Ollama:** Автоматичне отримання списку моделей з локального сервера (за замовчуванням: `http://192.168.3.214:11434`).
- **Система Скілів:** Динамічна ін'єкція експертних інструкцій на основі ключових слів (наприклад, C++ Pro, Blueprint Expert).
- **Розумна Маршрутизація:** Автоматичне перемикання на найкращу модель залежно від вашого наміру (наприклад, перемикання на DeepSeek при запиті коду чи блупрінтів).
- **Підтримка Стрімінгу:** Потокова передача токенів у реальному часі для всіх провайдерів (OpenAI, Anthropic, Gemini, DeepSeek, Mistral, Ollama).

### Налаштування
1. Відкрийте **Project Settings** -> **Plugins** -> **UU_GenAI**.
2. Вкажіть ваші API-ключі або налаштуйте URL для локальної Ollama.
3. Додайте власні **Скіли** (Skills) з відповідними тригерами та системними промптами.
