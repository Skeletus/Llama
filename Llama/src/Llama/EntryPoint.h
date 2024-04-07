#pragma once

#ifdef LLAMA_PLATFORM_WINDOWS

extern Llama::Application* Llama::CreateApplication();

int main(int argc, char** argv)
{
	printf("Llama engine start");
	auto app = Llama::CreateApplication();
	app->Run();
	delete app;
}

#endif