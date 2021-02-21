#ifndef Entrypoint_h
#define Entrypoint_h
#include "Core/Core.h" 
#include "Application.h"
#include "Log.h"
#ifdef SB_DEBUG_BUILD
#include "vld.h"
#endif
extern engine::Application* engine::CreateApplication();

int main(int argc, char **argv)
{
	engine::Log::Init();
	SB_ENGINE_INFO("Logs reporting for duty.");
	auto app = engine::CreateApplication();
	app->Run();
	delete app;
}

#endif //Entrypoint_h
