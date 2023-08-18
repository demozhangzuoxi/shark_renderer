#pragma once
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <imgui_internal.h>
#include "Shark_InspectorPanel.h"
class Shark_Editor:public Shark_Panel
{
public:
	Shark_Editor();
	~Shark_Editor();
	void RenderPanel();

public:
	GLFWwindow* _window=nullptr;
	Shark_InspectorPanel* _inspector=nullptr;
};

