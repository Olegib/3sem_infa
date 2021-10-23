#pragma once

const float g = 9.81;

struct Point {
	double x, y;
};


class Ball {
public:
	Ball(Point initialPos);

	void push(double v, double a);
	void fly(double t);

	Point position;

private:
	double vx = 0; 
	double vy = 0;
};