#include "Point.h"

#ifndef VECTOR_H_
#define VECTOR_H_

template <typename T>
class Vector2d {

public:
	Point2d<T> pfirst, plast;
	T X = plast.x - pfirst.x;
	T Y = plast.y - pfirst.y;

	Vector2d() {}

	Vector2d(T vx, T vy) {
		this->X = vx;
		this->Y = vy;
	};

	~Vector2d() {}

	void print2dVec() {
		std::cout << "{ " << Vector2d(*this).X << " " << Vector2d(*this).Y << " }\n";
	}

	Vector2d& operator+=(Vector2d right) {
		X += right.X;
		Y += right.Y;
		return *this;
	};

	void twoDVecSum(Vector2d a) {
		Vector2d c = Vector2d(*this) + a;
		std::cout << "Ñóììà âåêòîðîâ: ";
		c.print2dVec();
	};

	Vector2d& operator-=(Vector2d right) {
		X -= right.X;
		Y -= right.Y;
		return *this;
	};

	void twoDVecSubtr(Vector2d a) {
		Vector2d c = Vector2d(*this) - a;
		std::cout << "Ðàçíîñòü âåêòîðîâ: ";
		c.print2dVec();
	}

	Vector2d& operator*=(T app) {
		X *= app;
		Y *= app;
		return *this;
	};

	void twoDVecTimes(T app) {
		Vector2d res = Vector2d(*this) * app;
		std::cout << "Ïðîèçâåäåíèå: ";
		res.print2dVec();
	}

	Vector2d& operator/=(T app) {
		X /= app;
		Y /= app;
		return *this;
	};

	void twoDVecPer(T app) {
		if (app == 0) {
			std::cout << "Ïîïûòêà äåëåíèÿ íà íóëü!";
		} else {
		        Vector2d res = Vector2d(*this) / app;
		        std::cout << "×àñòíîå: ";
		        res.print2dVec();
		}
	}

	Vector2d& operator=(Vector2d right) {
		X = right.X;
		Y = right.Y;
		return *this;
	};

	Vector2d operator+(Vector2d right) const { return Vector2d(*this) += right; }
	Vector2d operator-(Vector2d right) const { return Vector2d(*this) -= right; }
	Vector2d operator*(T app) const { return Vector2d(*this) *= app; }
	Vector2d operator/(T app) const { return Vector2d(*this) /= app; }

	T GetLength() {
		return sqrt(X * X + Y * Y);
	};

	Vector2d Reverse() {
		return Vector2d(*this) *= -1;
	};

	void twoDVecReverse() {
		Vector2d res = Vector2d(*this).Reverse();
		std::cout << "Îáðàòíûé âåêòîð: ";
		res.print2dVec();
	}

	Vector2d Normalized() { return Vector2d(*this) /= GetLength(); };

	void print2dNormalized() {
		Vector2d res = Vector2d(*this).Normalized();
		std::cout << "Åäèíè÷íûé âåêòîð: ";
		res.print2dVec();
	}

	T Dot(Vector2d comp) {
		return (X * comp.X + Y * comp.Y);
	};

	T Angle(Vector2d comp) {
		double sres = Dot(comp);
		return acos(sres / (GetLength() * comp.GetLength()));
	};

	bool isCollinear(Vector2d comp) {
		bool flag = true;
		if (comp.GetLength() != 0) {
			if (X / comp.X != Y / comp.Y)
			{
				flag = false;
			}
		}
		return flag;
	};

	void Collinears2d(Vector2d comp) {
		if (Vector2d(*this).isCollinear(comp)) { 
			std::cout << "Âåêòîðû êîëëèíåàðíû!\n"; 
		} else { 
			std::cout << "Âåêòîðû íå êîëëèíåàðíû!\n";
		}
	}
};

template <typename T>
class Vector3d {
public:
	Point3d<T> pf3, pl3;
	T X = pl3.x - pf3.x;
	T Y = pl3.y - pf3.y;
	T Z = pl3.z - pf3.z;

	Vector3d() {}

	Vector3d(T vx, T vy, T vz) {
		this->X = vx;
		this->Y = vy;
		this->Z = vz;
	};

	~Vector3d() {}

	void print3dVec() {
		std::cout << "{ " << Vector3d(*this).X << " " << Vector3d(*this).Y << " " << Vector3d(*this).Z << " }\n";
	}

	Vector3d& operator+=(Vector3d right) {
		X += right.X;
		Y += right.Y;
		Z += right.Z;
		return *this;
	};

	void threeDVecSum(Vector3d a) {
		Vector3d res = Vector3d(*this) + a;
		std::cout << "Ñóììà âåêòîðîâ: ";
		res.print3dVec();
	}

	Vector3d& operator-=(Vector3d right) {
		X -= right.X;
		Y -= right.Y;
		Z -= right.Z;
		return *this;
	};

	void threeDVecSubtr(Vector3d a) {
		Vector3d res = Vector3d(*this) - a;
		std::cout << "Ðàçíîñòü âåêòîðîâ: ";
		res.print3dVec();
	}

	Vector3d& operator*=(T app) {
		X *= app;
		Y *= app;
		Z *= app;
		return *this;
	};

	void threeDVecTimes(T app) {
		Vector3d res = Vector3d(*this) * app;
		std::cout << "Ïðîèçâåäåíèå: ";
		res.print3dVec();
	}

	Vector3d& operator/=(T app) {
		X /= app;
		Y /= app;
		Z /= app;
		return *this;
	};

	void threeDVecPer(T app) {
		if (app == 0) {
			std::cout << "Попытка деления на нуль!\n";
		} else {
		        Vector3d res = Vector3d(*this) / app;
		        std::cout << "×àñòíîå: ";
		        res.print3dVec();
		}
	}

	Vector3d& operator=(Vector3d right) {
		X = right.X;
		Y = right.Y;
		Z = right.Z;
		return *this;
	};

	Vector3d operator+(Vector3d right) const { return Vector3d(*this) += right; }
	Vector3d operator-(Vector3d right) const { return Vector3d(*this) -= right; }
	Vector3d operator*(T app) const { return Vector3d(*this) *= app; }
	Vector3d operator/(T app) const { return Vector3d(*this) /= app; }

	T GetLength() {
		return sqrt(X * X + Y * Y + Z * Z);
	};

	Vector3d Reverse() {
		return Vector3d(*this) *= -1;
	};

	void threeDVecReverse() {
		Vector3d res = Vector3d(*this).Reverse();
		std::cout << "Îáðàòíûé âåêòîð: ";
		res.print3dVec();
	}

	Vector3d Normalize() { *this /= GetLength(); };
	Vector3d Normalized() { return Vector3d(*this) /= GetLength(); };

	void print3dNormalized() {
		Vector3d res = Vector3d(*this).Normalized();
		std::cout << "Åäèíè÷íûé âåêòîð: ";
		res.print3dVec();
	}

	T Dot(Vector3d comp) {
		return (X * comp.X + Y * comp.Y + Z * comp.Z);
	};

	T Angle(Vector3d comp) {
		double sres = Dot(comp);
		return acos(sres / (GetLength() * comp.GetLength()));
	};

	Vector3d Cross(Vector3d comp) {
		return Vector3d(Y*comp.Z - Z*comp.Y, Z*comp.X - X*comp.Z, X*comp.Y - Y*comp.X);
	}

	void printCross(Vector3d comp) {
		Vector3d res = Vector3d(*this).Cross(comp);
		std::cout << "Âåêòîðíîå ïðîèçâåäåíèå: ";
		res.print3dVec();
	}

	bool isComplanar(Vector3d comp1, Vector3d comp2) {
		bool flag = true;
		Vector3d cr12 = comp1.Cross(comp2);

		if (Dot(cr12) != 0) { flag = false; }
		return flag;
	};

	void Complanars(Vector3d comp1, Vector3d comp2) {
		if (Vector3d(*this).isComplanar(comp1, comp2)) { 
			std::cout << "Âåêòîðû êîìïëàíàðíû!"; 
		} else { 
			std::cout << "Âåêòîðû íå êîìïëàíàðíû!" << std::endl;
		}
	}
};

#endif
