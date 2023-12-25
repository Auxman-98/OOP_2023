#ifndef POINT_H_
#define POINT_H_

template<class T>
class Point2d
{
public: 
	T x = 0 , y = 0;
	Point2d() {}
	Point2d(T x, T y) {
		this->x = x;
		this->y = y;
	};
	~Point2d() {}

	T Distance(Point2d ess) {
		return sqrt((ess.x - x) * (ess.x - x) + (ess.y - y) * (ess.y - y));
	}
};

template<class T>
class Point3d
{
public:
	T x = 0, y = 0, z = 0;
	Point3d() {}
	Point3d(T x, T y, T z) {
		this->x = x;
		this->y = y;
		this->z = z;
	};
	~Point3d() {}

	T Distance(Point3d ess) {
		return sqrt((ess.x - x) * (ess.x - x) + (ess.y - y) * (ess.y - y) + (ess.z - z) * (ess.z - z));
	}
};

#endif
