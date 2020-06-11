#pragma once
class Point
{
public:
	Point(double x = 0, double y = 0) :x(x), y(y) {}
	double GetX() const;
	double GetY() const;
private:
	double x, y;
	friend double distance2(Point a, Point b);
};

