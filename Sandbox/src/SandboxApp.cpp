#include <Llama.h>

class Sandbox : public Llama::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Llama::Application* Llama::CreateApplication()
{
	return new Sandbox();
}