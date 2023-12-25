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
};

#endif
