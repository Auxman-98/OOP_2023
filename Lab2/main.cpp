#include <iostream>
#include <cmath>
#include "Point.h"
#include "Vector.h"
#include "Calculator.h"
using namespace antov;

int main()
{
	Vector2d<int> vec2i = Vector2d<int>(1, 10);
	vec2i.print2dVec();
	Vector3d<double> vec3db = Vector3d<double>(31, 96, 60);
	vec3db.print3dVec();
	Point2d<float> sp = Point2d<float>(3, 7);
	std::cout << "(" << sp.x << " " << sp.y << ")\n";
	Vector3d<float> simpleVec = Vector3d<float>(sqrt(2), sqrt(3), sqrt(5));
	simpleVec.print3dVec();
	system("pause");

	printMenu();
 
	return 0;
}
