#include <iostream>
#include <ostream>

#ifndef _ARRAY3D_H_
#define _ARRAY3D_H_

template<typename T>

class Array3d
{
public:
	class Submatrix;
	int dimx, dimy, dimz;
	Submatrix* arr;
	class Submatrix {
	public:
		class Element;
		int dimx, dimy;
		Element* darr;
		class Element {
		public:
			T* earr;
			Element() {}
			Element(int size) {
				earr = new T[size];
				for (int i = 0; i < size; i++) {
					earr[i] = 0;
				}
			}
			T& operator[](int i) {
				return earr[i];
			}
			friend std::ostream& operator<<(std::ostream& os, const Element& _earr) {}
		};

		Submatrix() {}
		Submatrix(const int dim0, const int dim1)
		{
			dim0 < 1 ? dimx = 1 : dimx = dim0;
			dim1 < 1 ? dimy = 1 : dimy = dim1;

			darr = new Element[dimx];
			for (int i = 0; i < dimx; i++) {
				darr[i] = Element(dimy);
			}
		}

		Element& operator[](int i)
		{
			return darr[i];
		}

	};

	Array3d() {}
	Array3d(const int dim0, const int dim1,const int dim2) 
	{
		dim0 < 1 ? dimx = 1 : dimx = dim0;
		dim1 < 1 ? dimy = 1 : dimy = dim1;
		dim2 < 1 ? dimz = 1 : dimz = dim2;

		arr = new Submatrix[dimx];
		for (int i = 0; i < dimx; i++) {
			arr[i] = Submatrix(dimy, dimz);
		}
	}

	Submatrix& operator[](int i)
	{
		return arr[i];
	}

	~Array3d()
	{
		for (int i = 0; i < dimx; i++) {
			for (int j = 0; j < dimy; j++) {
				if (arr[i].darr[j].earr != nullptr)
					delete[](arr[i].darr[j].earr);
			}
			if (arr[i].darr != nullptr)
				delete[](arr[i].darr);
		}
		if (arr != nullptr)
			delete[] arr;
	}

	Submatrix GetValues0(int i)
	{
		Submatrix arr0(dimy, dimz);
		for (int k = 0; k < dimz; k++) {
			for (int j = 0; j < dimy; j++) {
				arr0[k][j] = arr[k][j][i];
			}
		}
		return arr0;
	}
	Submatrix GetValues1(int j)
	{
		Submatrix arr1(dimx, dimz);
		for (int k = 0; k < dimz; k++) {
			for (int i = 0; i < dimx; i++) {
				arr1[k][i] = arr[k][j][i];
			}
		}
		return arr1;
	}
	Submatrix GetValues2(int k)
	{
		Submatrix arr2(dimx, dimy);
		for (int j = 0; j < dimy; j++) {
			for (int i = 0; i < dimx; i++) {
				arr2[j][i] = arr[k][j][i];
			}
		}
		return arr2;
	}

	typename Submatrix::Element GetValues01(int i, int j)
	{
		typename Submatrix::Element arr01(dimz);
		for (int k = 0; k < dimz; k++) {
		    arr01[k] = arr[k][j][i];
		}
		return arr01;
	}
	typename Submatrix::Element GetValues02(int i, int k)
	{
		typename Submatrix::Element arr02(dimy);
		for (int j = 0; j < dimy; j++) {
		    arr02[j] = arr[k][j][i];
		}
		return arr02;
	}
	typename Submatrix::Element GetValues12(int j, int k)
	{
		typename Submatrix::Element arr12(dimx);
		for (int i = 0; i < dimx; i++) {
		   arr12[i] = arr[k][j][i];
		}
		return arr12;
	}

	void SetValues0(int i)
	{
	    std::cout << "Column " << i << std::endl;
		for (int k = 0; k < dimz; k++) {
			for (int j = 0; j < dimy; j++) {
				std::cout << " Row " << j << " Thread " << k << ": ";
				std::cin >> arr[k][j][i];
			}
		}
	}
	void SetValues1(int j)
	{
	    std::cout << "Row " << j << std::endl;
	    for (int k = 0; k < dimz; k++) {
		    for (int i = 0; i < dimx; i++) {
			    std::cout << "Column " << i << " Thread " << k << ": ";
			    std::cin >> arr[k][j][i];
		     }
	    }
	}
	void SetValues2(int k)
	{
	    std::cout << "Thread " << k << std::endl;
		for (int j = 0; j < dimy; j++) {
			for (int i = 0; i < dimx; i++) {
				std::cout << "Column " << i << " Row " << j << ": ";
				std::cin >> arr[k][j][i];
			}
		}
	}
	void SetValues01(int i, int j)
	{
	    std::cout << "Column " << i << " Row " << j << std::endl;
		for (int k = 0; k < dimz; k++) {
			std::cout << " Thread " << k << ": ";
			std::cin >> arr[k][j][i];
		}
	}
	void SetValues02(int i, int k)
	{
	    std::cout << "Column " << i << " Thread " << k << std::endl;
		for (int j = 0; j < dimy; j++) {
			std::cout << " Row " << j << ": ";
			std::cin >> arr[k][j][i];
		}
	}
	void SetValues12(int j, int k)
	{
	    std::cout << "Row " << j << " Thread " << k << std::endl;
		for (int i = 0; i < dimx; i++) {
			std::cout << "Column " << i << ": ";
			std::cin >> arr[k][j][i];
		}
	}
	
	void numOnes()
	{
	    for (int k = 0; k < dimz; k++)
		{
			for (int j = 0; j < dimy; j++)
		    {
				for (int i = 0; i < dimx; i++)
				{
				    arr[k][j][i] = 1;
				}
			}
	    }
	}
	void numZeros()
	{
	    for (int k = 0; k < dimz; k++)
		{
			for (int j = 0; j < dimy; j++)
		    {
				for (int i = 0; i < dimx; i++)
				{
				    arr[k][j][i] = 0;
				}
			}
	    }
	}
	void numFill(T scalar)
	{
	    if (scalar != 1 && scalar != 0) {
		    for (int k = 0; k < dimz; k++)
		    {
			    for (int j = 0; j < dimy; j++)
		        {
				    for (int i = 0; i < dimx; i++)
				    {
				        arr[k][j][i] = scalar;
				    }
			    }
	        }
		}
		else {
			std::cout << "Argument not intended for this method!";
			exit(1);
		}
	}
};

#endif
