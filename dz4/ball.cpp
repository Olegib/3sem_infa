#include <cmath>

#include "ball.h"
# define M_PI          3.141592653589793238462643383279502884L /* pi */



Ball::Ball(Point initialPos)
{
	position = initialPos;
	vx = 0;
}

void Ball::push(double v, double a)
{
	vx += v * std::cos(a);
	vy += v * std::sin(a);
}

void Ball::fly(double t)
{
	position.x += vx * t;
	position.y += vy * t - (g * t * t / 2);
	if (position.y <= 0)
	{
		this->push(-2 * this->vy, M_PI/2);
		position.x += vx * t;
		position.y += vy * t - g * t * t / 2;
	}
}