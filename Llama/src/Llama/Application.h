#pragma once

#include "Core.h"

namespace Llama 
{

	class LLAMA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// to be define in client
	Application* CreateApplication();
}

