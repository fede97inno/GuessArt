#include "Window.h"

Window::Window(const int inWidth, const int inHeight, const char* inTitle) : width{inWidth}, height{inHeight}
{
	InitWindow(width, height, inTitle);
	SetTargetFPS(30);
}
