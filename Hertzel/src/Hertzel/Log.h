#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Hertzel
{
    class HERTZEL_API Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger> &GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger> &GetClientLogger() { return s_ClientLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
} // namespace Hertzel

// Core log macros
#define HZ_CORE_FATAL(...) ::Hertzel::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define HZ_CORE_ERROR(...) ::Hertzel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_WARN(...) ::Hertzel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_INFO(...) ::Hertzel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_TRACE(...) ::Hertzel::Log::GetCoreLogger()->trace(__VA_ARGS__)

// Client log macros
#define HZ_FATAL(...) ::Hertzel::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define HZ_ERROR(...) ::Hertzel::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_WARN(...) ::Hertzel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_INFO(...) ::Hertzel::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_TRACE(...) ::Hertzel::Log::GetClientLogger()->trace(__VA_ARGS__)