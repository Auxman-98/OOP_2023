#include <iostream>
#include "Array3d.h"

int main() 
{
	setlocale(LC_ALL, "Rus");

	Array3d<int> myArray(2,2,2);
	for (int k = 0; k < 2; k++) {
		for (int j = 0; j < 2; j++) {
			for (int i = 0; i < 2; i++) {
				myArray.index(i, j, k) = (i*2 + j)*2 + k;
			}
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				std::cout << myArray.index(i, j, k) << "\t";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}

	std::cout << "Срез массива по координате x=1" << std::endl;
	int* slice0d1 = new int[2 * 2];
	slice0d1 = myArray.GetValues0(1);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			std::cout << slice0d1[i * 2 + j] << "\t";
		}
		std::cout << std::endl;
	}
	delete[] slice0d1;
	std::cout << std::endl;
	std::cout << "Срез массива по координатам x=0 и y=0" << std::endl;
	int* slice01d00 = new int[2];
	slice01d00 = myArray.GetValues01(0, 0);
	for (int i = 0; i < 2; i++) {
		std::cout << slice01d00[i] << "\t";
	}
	delete[] slice01d00;
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << "Новые элементы с координатой x=1" << std::endl;
	myArray.SetValues0(1);
	for (int k = 0; k < 2; k++) {
		for (int j = 0; j < 2; j++) {
			std::cout << myArray.index(k, j, 1) << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Новые элементы с координатами y=1 и z=0" << std::endl;
	myArray.SetValues12(1, 0);
	for (int i = 0; i < 2; i++) {
		std::cout << myArray.index(0, 1, i) << "\t";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "np.ndarray.fill(100)" << std::endl;
	system("pause");
	myArray.numFill(100);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				std::cout << myArray.index(i, j, k) << "\t";
			}
			std::cout << std::endl; 
		}
		std::cout << std::endl; 
		std::cout << std::endl; 
	}

	std::cout << "Проверка вызова метода np.zeros" << std::endl;
	system("pause");
	myArray.numFill(0);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				std::cout << myArray.index(i, j, k) << "\t";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}
	
	system("pause");
	return 0;
}
