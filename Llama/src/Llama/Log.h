#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Llama
{
	class LLAMA_API Log
	{
	public:

		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()
		{
			return s_CoreLogger;
		}

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
		{
			return s_ClientLogger;
		}
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// core log macros
#define LLAMA_CORE_TRACE(...)::Llama::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LLAMA_CORE_INFO(...)::Llama::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LLAMA_CORE_WARN(...)::Llama::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LLAMA_CORE_ERROR(...)::Llama::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LLAMA_CORE_FATAL(...)::Llama::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// client log macros
#define LLAMA_TRACE(...)::Llama::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LLAMA_INFO(...)::Llama::Log::GetClientLogger()->info(__VA_ARGS__)
#define LLAMA_WARN(...)::Llama::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LLAMA_ERROR(...)::Llama::Log::GetClientLogger()->error(__VA_ARGS__)
#define LLAMA_FATAL(...)::Llama::Log::GetClientLogger()->fatal(__VA_ARGS__)
