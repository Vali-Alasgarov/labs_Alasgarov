#pragma once
#include <SDL.h>

class GameObject
{
public:
	GameObject(float x, float y, float w, float h, Uint8 r = 255, Uint8 g = 255, Uint8 b = 255, Uint8 a = 255);

	void Draw();
	void UpdatePosition(float x, float y);
private:
	SDL_FRect m_Transform;
	SDL_Color m_Color;
};
