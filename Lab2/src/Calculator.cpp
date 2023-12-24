#include <iostream>
#include "Point.h"
#include "Vector.h"
#define twoDTimes 1
#define twoDPer 2
#define twoDLength 3
#define twoDReverse 4
#define twoDNormalized 5
#define twoDSum 6
#define twoDSubtract 7
#define twoDDot 8
#define twoDAngle 9
#define twoDCollinear 10
#define threeDTimes 11
#define threeDPer 12
#define threeDLength 13
#define threeDReverse 14
#define threeDNormalized 15
#define threeDSum 16
#define threeDSubtract 17
#define threeDDot 18
#define threeDAngle 19
#define threeDCross 20
#define threeDComplanar 21
#define ekzit 22

namespace antov {

	Vector2d<float> vec2dInsert() {
		std::cout << "Отметьте способ ввода вектора - точки/p или координаты/c: ";
		char choice = ' ';
		Vector2d<float> res = Vector2d<float>(0, 0);
		std::cin >> choice;
		if (choice == 'p') {
			std::cout << "Координаты первой точки: ";
			float x1 = 0, y1 = 0;
			std::cin >> x1;
			std::cin >> y1;
			std::cout << "Координаты второй точки: ";
			float x2 = 0, y2 = 0;
			std::cin >> x2;
			std::cin >> y2;
			res = Vector2d<float>(x2 - x1, y2 - y1);
		}
		if (choice == 'c') {
			std::cout << "Координаты вектора: ";
			float X = 0, Y = 0;
			std::cin >> X;
			std::cin >> Y;
			res = Vector2d<float>(X, Y);
		}
		return res;
	}

	Vector3d<float> vec3dInsert() {
		std::cout << "Отметьте способ ввода вектора - точки/p или координаты/c: ";
		char choice = ' ';
		Vector3d<float> res = Vector3d<float>(0, 0, 0);
		std::cin >> choice;
		if (choice == 'p') {
			std::cout << "Координаты первой точки: ";
			float x1 = 0, y1 = 0, z1 = 0;
			std::cin >> x1;
			std::cin >> y1;
			std::cin >> z1;
			std::cout << "Координаты второй точки: ";
			float x2 = 0, y2 = 0, z2 = 0;
			std::cin >> x2;
			std::cin >> y2;
			std::cin >> z2;
			res = Vector3d<float>(x2 - x1, y2 - y1, z2 - z1);
		}
		if (choice == 'c') {
			std::cout << "Координаты вектора: ";
			float X = 0, Y = 0, Z = 0;
			std::cin >> X;
			std::cin >> Y;
			std::cin >> Z;
			res = Vector3d<float>(X, Y, Z);
		}
		return res;
	}

	void mainMenu() {
		system("cls");
		setlocale(LC_ALL, "Rus");

		std::cout << "++++++++++++++++++++++++++++++ Основные операции с векторами ++++++++++++++++++++++++++++++" << std::endl;
		std::cout << std::endl;
		std::cout << "1. Умножение 2д вектора на число" << std::endl;
		std::cout << "2. Деление 2д вектора на число" << std::endl;
		std::cout << "3. Вычисление длины 2д вектора" << std::endl;
		std::cout << "4. Обратный 2д вектор" << std::endl;
		std::cout << "5. Нормализация 2д вектора" << std::endl;
		std::cout << "6. Сложение 2д векторов" << std::endl;
		std::cout << "7. Вычитание 2д векторов" << std::endl;
		std::cout << "8. Скалярное произведение 2д векторов" << std::endl;
		std::cout << "9. Угол между 2д векторами" << std::endl;
		std::cout << "10. Коллинеарны ли 2д векторы?" << std::endl;
		std::cout << "11. Умножение 3д вектора на число" << std::endl;
		std::cout << "12. Деление 3д вектора на число" << std::endl;
		std::cout << "13. Вычисление длины 3д вектора" << std::endl;
		std::cout << "14. Обратный 3д вектор" << std::endl;
		std::cout << "15. Нормализация 3д вектора" << std::endl;
		std::cout << "16. Сложение 3д векторов" << std::endl;
		std::cout << "17. Вычитание 3д векторов" << std::endl;
		std::cout << "18. Скалярное произведение 3д векторов" << std::endl;
		std::cout << "19. Угол между 3д векторами" << std::endl;
		std::cout << "20. Векторное произведение 3д векторов" << std::endl;
		std::cout << "21. Компланарны ли 3д векторы?" << std::endl;
		std::cout << "22. Выход\n";
		std::cout << ">";
	}

	void printMenu()
	{
		mainMenu();

		Vector2d<float> sVec = Vector2d<float>(0, 0);
		Vector2d<float> pair = Vector2d<float>(0, 0);
		Vector3d<float> seeVec = Vector3d<float>(0, 0, 0);
		Vector3d<float> compVec = Vector3d<float>(0, 0, 0);
		Vector3d<float> triple = Vector3d<float>(0, 0, 0);
		float ant = 0;
		int choice = 0;
		std::cin >> choice;
		while (true) {
			if (choice == ekzit) {
				exit(0);
			}
			else {
				system("cls"); 
				switch (choice) {
				case twoDTimes: // Умножение на число
					sVec = vec2dInsert();
					sVec.print2dVec();
					std::cin >> ant;
					sVec.twoDVecTimes(ant);
					system("pause");
					printMenu();
				case twoDPer:
					sVec = vec2dInsert();
					sVec.print2dVec();
					std::cin >> ant;
					sVec.twoDVecPer(ant);
					system("pause");
					printMenu();
				case twoDLength:
					sVec = vec2dInsert();
					sVec.print2dVec();
					std::cout << "Длина вектора: " << sVec.GetLength() << std::endl;
					system("pause");
					printMenu();
				case twoDReverse:
					sVec = vec2dInsert();
					sVec.print2dVec();
					sVec.twoDVecReverse();
					system("pause");
					printMenu();
				case twoDNormalized:
					sVec = vec2dInsert();
					sVec.print2dVec();
					sVec.print2dNormalized();
					system("pause");
					printMenu();
				case twoDSum:
					sVec = vec2dInsert();
					sVec.print2dVec();
					pair = vec2dInsert();
					pair.print2dVec();
					sVec.twoDVecSum(pair);
					system("pause");
					printMenu();
				case twoDSubtract:
					sVec = vec2dInsert();
					sVec.print2dVec();
					pair = vec2dInsert();
					pair.print2dVec();
					sVec.twoDVecSubtr(pair);
					system("pause");
					printMenu();
				case twoDDot:
					sVec = vec2dInsert();
					sVec.print2dVec();
					pair = vec2dInsert();
					pair.print2dVec();
					std::cout << "Результат скалярного произведения: " << sVec.Dot(pair) << "\n";
					system("pause");
					printMenu();
				case twoDAngle:
					sVec = vec2dInsert();
					sVec.print2dVec();
					pair = vec2dInsert();
					pair.print2dVec();
					std::cout << "Угол между векторами: " << sVec.Angle(pair) << "\n";
					system("pause");
					printMenu();
				case twoDCollinear:
					sVec = vec2dInsert();
					sVec.print2dVec();
					pair = vec2dInsert();
					pair.print2dVec();
					sVec.Collinears2d(pair);
					system("pause");
					printMenu();
				case threeDTimes:
					seeVec = vec3dInsert();
					seeVec.print3dVec();
					std::cin >> ant;
					seeVec.threeDVecTimes(ant);
					system("pause");
					printMenu();
				case threeDPer:
					seeVec = vec3dInsert();
					seeVec.print3dVec();
					std::cin >> ant;
					seeVec.threeDVecPer(ant);
					system("pause");
					printMenu();
				case threeDLength:
					seeVec = vec3dInsert();
					seeVec.print3dVec();
					std::cout << "Длина вектора: " << seeVec.GetLength() << std::endl;
					system("pause");
					printMenu();
				case threeDReverse:
					seeVec = vec3dInsert();
					seeVec.print3dVec();
					seeVec.threeDVecReverse();
					system("pause");
					printMenu();
				case threeDNormalized:
					seeVec = vec3dInsert();
					seeVec.print3dVec();
					seeVec.print3dNormalized();
					system("pause");
					printMenu();
				case threeDSum:
					seeVec = vec3dInsert();
					seeVec.print3dVec();
					compVec = vec3dInsert();
					compVec.print3dVec();
					seeVec.threeDVecSum(compVec);
					system("pause");
					printMenu();
				case threeDSubtract:
					seeVec = vec3dInsert();
					seeVec.print3dVec();
					compVec = vec3dInsert();
					compVec.print3dVec();
					seeVec.threeDVecSubtr(compVec);
					system("pause");
					printMenu();
				case threeDDot:
					seeVec = vec3dInsert();
					seeVec.print3dVec();
					compVec = vec3dInsert();
					compVec.print3dVec();
					std::cout << "Результат скалярного произведения: " << seeVec.Dot(compVec) << "\n";
					system("pause");
					printMenu();
				case threeDAngle:
					seeVec = vec3dInsert();
					seeVec.print3dVec();
					compVec = vec3dInsert();
					compVec.print3dVec();
					std::cout << "Угол между векторами: " << seeVec.Angle(compVec) << "\n";
					system("pause");
					printMenu();
				case threeDCross:
					seeVec = vec3dInsert();
					seeVec.print3dVec();
					compVec = vec3dInsert();
					compVec.print3dVec();
					seeVec.printCross(compVec);
					system("pause");
					printMenu();
				case threeDComplanar:
					seeVec = vec3dInsert();
					seeVec.print3dVec();
					compVec = vec3dInsert();
					compVec.print3dVec();
					triple = vec3dInsert();
					triple.print3dVec();
					seeVec.Complanars(compVec, triple);
					system("pause");
					printMenu();
				default:
					break;
			    }
			}
		}
	}

}