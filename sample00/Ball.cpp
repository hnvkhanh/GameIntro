#include "Ball.h"
#include <stdlib.h>

#include <d3d10.h>
#include <d3dx10.h>


Ball::Ball() {
	x = rand() % 1200 + 1;
	y = rand() % 600 + 1;
	int directionX = (rand() % 2) == 0? -1: 1;
	int directionY = (rand() % 2) == 0 ? -1 : 1;
	vx = 0.25 * directionX;
	vy = 0.25 * directionY;
}

void Ball :: move(DWORD dt) {
	x += vx * dt;
	y += vy * dt;
	return;
}

void Ball::changeDirection(float bottom_edge, float right_edge) {
	if (x < 0 || x > right_edge) {
		vx = -vx;
		if (x < 0) {
			x = 0;
		}
		else {
			x = right_edge;
		}
	}
	if (y < 0 || y > bottom_edge) {
		vy = -vy;
		if (y < 0) {
			y = 0;
		}
		else {
			y = bottom_edge;
		}
	}
	return;
}

float Ball :: getX() {
	return x;
}

float Ball::getY() {
	return y;
}
