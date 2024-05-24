#include "Game.h"

Game::Game()
{
	window = new Window(800, 600, "GuessArt");
	textures.push_back(LoadTexture("assets/image1.png"));
	textures.push_back(LoadTexture("assets/image2.png"));
}

void Game::Update()
{
	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(RAYWHITE);

		Vector2 position = { 0,0 };

		for (const Texture2D& texture : textures)
		{
			DrawTextureEx(texture, position , 0, 0.3f, RAYWHITE);
			position.x += 200;
		}

		EndDrawing();
	}
}

void Game::Close()
{
	for (const Texture2D& texture : textures)
	{
		UnloadTexture(texture);
	}

	CloseWindow();
}

Game::~Game()
{
	delete window;
}
