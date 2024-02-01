#include <iostream>

#ifndef _ARRAY3D_H_
#define _ARRAY3D_H_

template<typename T>

class Array3d
{
public:
	int dimx, dimy, dimz;
	T* arr;

	Array3d() {}
	Array3d(const int dim0, const int dim1,const int dim2) 
	{
		dim0 < 1 ? dimx = 1 : dimx = dim0;
		dim1 < 1 ? dimy = 1 : dimy = dim1;
		dim2 < 1 ? dimz = 1 : dimz = dim2;

		arr = new T[dimx*dimy*dimz];
		for (int i = 0; i < dimx*dimy*dimz; i++) {
			arr[i] = 0;
		}
	}

	T& index(int i, int j, int k)
	{
		return arr[(i*dimy + j)*dimz + k];
	}

	~Array3d()
	{
		if (arr != nullptr)
			delete[] arr;
	}

    T* GetValues0(int i)
	{
		T* arr0 = new T[dimy*dimz];
		for (int j = 0; j < dimy; j++) {
			for (int k = 0; k < dimz; k++) {
				arr0[j * dimz + k] = index(k, j, i);
			}
		}
		return arr0;
	}
	T* GetValues1(int j)
	{
		T* arr1 = new T[dimx*dimz];
		for (int i = 0; i < dimx; i++) {
			for (int k = 0; k < dimz; k++) {
				arr1[i * dimz + k] = index(k, j, i);
			}
		}
		return arr1;
	}
	T* GetValues2(int k)
	{
		T* arr2 = new T[dimx*dimy];
		for (int i = 0; i < dimx; i++) {
			for (int j = 0; j < dimy; j++) {
				arr2[i * dimy + j] = index(k, j, i);
			}
		}
		return arr2;
	}
	T* GetValues01(int i, int j)
	{
		T* arr01 = new T[dimz];
		for (int k = 0; k < dimz; k++) {
		    arr01[k] = index(k, j, i);
		}
		return arr01;
	}
	T* GetValues02(int i, int k)
	{
		T* arr02 = new T[dimy];
		for (int j = 0; j < dimy; j++) {
		    arr02[j] = index(k, j, i);
		}
		return arr02;
	}
	T* GetValues12(int j, int k)
	{
		T* arr12 = new T[dimx];
		for (int i = 0; i < dimx; i++) {
		   arr12[i] = index(k, j, i);
		}
		return arr12;
	}

	void SetValues0(int i)
	{
	    std::cout << "Column " << i << std::endl;
		for (int k = 0; k < dimz; k++) {
			for (int j = 0; j < dimy; j++) {
				std::cout << " Row " << j << " Thread " << k << ": ";
				std::cin >> index(k, j, i);
			}
		}
	}
	void SetValues1(int j)
	{
	    std::cout << "Row " << j << std::endl;
	    for (int k = 0; k < dimz; k++) {
		    for (int i = 0; i < dimx; i++) {
			    std::cout << "Column " << i << " Thread " << k << ": ";
			    std::cin >> index(k, j, i);
		     }
	    }
	}
	void SetValues2(int k)
	{
	    std::cout << "Thread " << k << std::endl;
		for (int j = 0; j < dimy; j++) {
			for (int i = 0; i < dimx; i++) {
				std::cout << "Column " << i << " Row " << j << ": ";
				std::cin >> index(k, j, i);
			}
		}
	}
	void SetValues01(int i, int j)
	{
	    std::cout << "Column " << i << " Row " << j << std::endl;
		for (int k = 0; k < dimz; k++) {
			std::cout << " Thread " << k << ": ";
			std::cin >> index(k, j, i);
		}
	}
	void SetValues02(int i, int k)
	{
	    std::cout << "Column " << i << " Thread " << k << std::endl;
		for (int j = 0; j < dimy; j++) {
			std::cout << " Row " << j << ": ";
			std::cin >> index(k, j, i);
		}
	}
	void SetValues12(int j, int k)
	{
	    std::cout << "Row " << j << " Thread " << k << std::endl;
		for (int i = 0; i < dimx; i++) {
			std::cout << "Column " << i << ": ";
			std::cin >> index(k, j, i);
		}
	}
	
	void numOnes()
	{
	    for (int k = 0; k < dimz; k++) {
			for (int j = 0; j < dimy; j++) {
				for (int i = 0; i < dimx; i++) 
				{
				    index(k, j, i) = 1;
				}
			}
	    }
	}
	void numZeros()
	{
	    for (int k = 0; k < dimz; k++) {
			for (int j = 0; j < dimy; j++) {
				for (int i = 0; i < dimx; i++) 
				{
				    index(k, j, i) = 0;
				}
			}
	    }
	}
	void numFill(T scalar)
	{
		for (int k = 0; k < dimz; k++) {
			for (int j = 0; j < dimy; j++) {
				for (int i = 0; i < dimx; i++)
				{
					index(k, j, i) = scalar;
				}
			}
		}
	}
};

#endif
