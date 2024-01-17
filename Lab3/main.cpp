#include <iostream>
#include "Array3d.h"

int main() 
{
	setlocale(LC_ALL, "Rus");

	Array3d<int> myArray(2,2,2);
	for (int k = 0; k < 2; k++) {
		for (int j = 0; j < 2; j++) {
			for (int i = 0; i < 2; i++) {
				myArray[i][j][k] = (i*2 + j)*2 + k;
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				std::cout << myArray[i][j][k] << "\t";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}
	
	std::cout << "Ñðåç ìàññèâà ïî êîîðäèíàòå x=1" << std::endl;
	Array3d<int>::Submatrix slice0d1 = myArray.GetValues0(1);
	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < 2; i++) {
			std::cout << slice0d1[j][i] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Ñðåç ìàññèâà ïî êîîðäèíàòàì x=0 è y=0" << std::endl;
	Array3d<int>::Submatrix::Element slice01d00 = myArray.GetValues01(0, 0);
	for (int i = 0; i < 2; i++) {
		std::cout << slice01d00[i] << "\t";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "Íîâûå ýëåìåíòû ñ êîîðäèíàòîé x=1" << std::endl;
	myArray.SetValues0(1);
	for (int k = 0; k < 2; k++) {
		for (int j = 0; j < 2; j++) {
			std::cout << myArray[k][j][1] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Íîâûå ýëåìåíòû ñ êîîðäèíàòàìè y=1 è z=0" << std::endl;
	myArray.SetValues12(1, 0);
	for (int i = 0; i < 2; i++) {
		std::cout << myArray[0][1][i] << "\t";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "np.ndarray.fill(100)" << std::endl;
	system("pause");
	myArray.numFill(100);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				std::cout << myArray[i][j][k] << "\t";
			}
			std::cout << std::endl; 
		}
		std::cout << std::endl; 
		std::cout << std::endl; 
	}

	std::cout << "Ïðîâåðêà âûçîâà ìåòîäà np.zeros" << std::endl;
	myArray.numFill(0);
        for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				std::cout << myArray[i][j][k] << "\t";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}
	
	system("pause");
	return 0;
}
