#pragma once
#include "raylib.h"

class Window
{
public:
	Window(const int inWidth, const int inHeight, const char* inTitle);
	~Window() = default;

private:
	const int width;
	const int height;
};