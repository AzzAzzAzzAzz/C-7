#include<iostream>
#include"Point.h"
using namespace std;

double distance(Point a, Point b) {
	return sqrt((a.GetX() - b.GetX()) * (a.GetX() - b.GetX()) + (a.GetY() - b.GetY()) * (a.GetY() - b.GetY()));
}

double distance2(Point a, Point b) {
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
int main()
{
	Point p1, p2(1, 1);
		cout << "P1和P2两点的距离是：" << distance(p1, p2) << endl;
		cout << "P1和P2两点的距离是：" << distance2(p1, p2) << endl;
	return 0;

}

