#pragma once

#ifdef LLAMA_PLATFORM_WINDOWS

extern Llama::Application* Llama::CreateApplication();

int main(int argc, char** argv)
{
	Llama::Log::Init();
	LLAMA_CORE_WARN("Initialized log");
	int a = 5;
	LLAMA_INFO("HELLO var = {0}", a);

	auto app = Llama::CreateApplication();
	app->Run();
	delete app;
}

#endif