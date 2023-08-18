#pragma once
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <vector>

class Shark_Panel
{
public:
	Shark_Panel();
	virtual void RenderPanel()=0;
};
static std::vector<Shark_Panel> panels;

