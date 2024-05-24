#pragma once
#include "Window.h"
#include <vector>

class Game
{
public:
	Game();
	~Game();
	void Update();
	void Close();

private:
	Window* window;

	std::vector<Texture2D> textures;
};