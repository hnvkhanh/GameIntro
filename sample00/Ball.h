#pragma once

#include <d3d10.h>
#include <d3dx10.h>

class Ball
{
private:
	float x, y, vx, vy;
public:
	Ball();
	void move(DWORD);
	void changeDirection(float, float);
	float getX();
	float getY();
};

