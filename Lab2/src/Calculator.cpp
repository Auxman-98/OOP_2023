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
		std::cout << "Îòìåòüòå ñïîñîá ââîäà âåêòîðà - òî÷êè/p èëè êîîðäèíàòû/c: ";
		char choice = ' ';
		Vector2d<float> res = Vector2d<float>(0, 0);
		std::cin >> choice;
		if (choice == 'p') {
			std::cout << "Êîîðäèíàòû ïåðâîé òî÷êè: ";
			Point2d<float> ps = Point2d<float>(0, 0);
                        float x1 = 0, y1 = 0;
                        std::cin >> x1;  ps.x = x1;
                        std::cin >> y1;  ps.y = y1;
			std::cout << "Êîîðäèíàòû âòîðîé òî÷êè: ";
			Point2d<float> pe = Point2d<float>(0, 0);
                        float x2 = 0, y2 = 0;
                        std::cin >> x2;  pe.x = x2;
                        std::cin >> y2;  pe.y = y2;
                        res.X = pe.x - ps.x;  res.Y = pe.y - ps.y;
		}
		if (choice == 'c') {
			std::cout << "Êîîðäèíàòû âåêòîðà: ";
			float X = 0, Y = 0;
			std::cin >> X;
			std::cin >> Y;
			res = Vector2d<float>(X, Y);
		}
		return res;
	}

	Vector3d<float> vec3dInsert() {
		std::cout << "Îòìåòüòå ñïîñîá ââîäà âåêòîðà - òî÷êè/p èëè êîîðäèíàòû/c: ";
		char choice = ' ';
		Vector3d<float> res = Vector3d<float>(0, 0, 0);
		std::cin >> choice;
		if (choice == 'p') {
			std::cout << "Êîîðäèíàòû ïåðâîé òî÷êè: ";
			Point3d<float> ps = Point3d<float>(0, 0, 0);
                        float x1 = 0, y1 = 0, z1 = 0;
                        std::cin >> x1;  ps.x = x1;
                        std::cin >> y1;  ps.y = y1;
                        std::cin >> z1;  ps.z = z1;
			std::cout << "Êîîðäèíàòû âòîðîé òî÷êè: ";
			Point3d<float> pe = Point3d<float>(0, 0, 0);
                        float x2 = 0, y2 = 0, z2 = 0;
                        std::cin >> x2;  pe.x = x2;
                        std::cin >> y2;  pe.y = y2;
                        std::cin >> z2;  pe.z = z2;
                        res.X = pe.x - ps.x;  res.Y = pe.y - ps.y;  res.Z = pe.z - ps.z;
		}
		if (choice == 'c') {
			std::cout << "Êîîðäèíàòû âåêòîðà: ";
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

		std::cout << "++++++++++++++++++++++++++++++ Îñíîâíûå îïåðàöèè ñ âåêòîðàìè ++++++++++++++++++++++++++++++" << std::endl;
		std::cout << std::endl;
		std::cout << "1. Óìíîæåíèå 2ä âåêòîðà íà ÷èñëî" << std::endl;
		std::cout << "2. Äåëåíèå 2ä âåêòîðà íà ÷èñëî" << std::endl;
		std::cout << "3. Âû÷èñëåíèå äëèíû 2ä âåêòîðà" << std::endl;
		std::cout << "4. Îáðàòíûé 2ä âåêòîð" << std::endl;
		std::cout << "5. Íîðìàëèçàöèÿ 2ä âåêòîðà" << std::endl;
		std::cout << "6. Ñëîæåíèå 2ä âåêòîðîâ" << std::endl;
		std::cout << "7. Âû÷èòàíèå 2ä âåêòîðîâ" << std::endl;
		std::cout << "8. Ñêàëÿðíîå ïðîèçâåäåíèå 2ä âåêòîðîâ" << std::endl;
		std::cout << "9. Óãîë ìåæäó 2ä âåêòîðàìè" << std::endl;
		std::cout << "10. Êîëëèíåàðíû ëè 2ä âåêòîðû?" << std::endl;
		std::cout << "11. Óìíîæåíèå 3ä âåêòîðà íà ÷èñëî" << std::endl;
		std::cout << "12. Äåëåíèå 3ä âåêòîðà íà ÷èñëî" << std::endl;
		std::cout << "13. Âû÷èñëåíèå äëèíû 3ä âåêòîðà" << std::endl;
		std::cout << "14. Îáðàòíûé 3ä âåêòîð" << std::endl;
		std::cout << "15. Íîðìàëèçàöèÿ 3ä âåêòîðà" << std::endl;
		std::cout << "16. Ñëîæåíèå 3ä âåêòîðîâ" << std::endl;
		std::cout << "17. Âû÷èòàíèå 3ä âåêòîðîâ" << std::endl;
		std::cout << "18. Ñêàëÿðíîå ïðîèçâåäåíèå 3ä âåêòîðîâ" << std::endl;
		std::cout << "19. Óãîë ìåæäó 3ä âåêòîðàìè" << std::endl;
		std::cout << "20. Âåêòîðíîå ïðîèçâåäåíèå 3ä âåêòîðîâ" << std::endl;
		std::cout << "21. Êîìïëàíàðíû ëè 3ä âåêòîðû?" << std::endl;
		std::cout << "22. Âûõîä\n";
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
				case twoDTimes: // Óìíîæåíèå íà ÷èñëî
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
					std::cout << "Äëèíà âåêòîðà: " << sVec.GetLength() << std::endl;
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
					std::cout << "Ðåçóëüòàò ñêàëÿðíîãî ïðîèçâåäåíèÿ: " << sVec.Dot(pair) << "\n";
					system("pause");
					printMenu();
				case twoDAngle:
					sVec = vec2dInsert();
					sVec.print2dVec();
					pair = vec2dInsert();
					pair.print2dVec();
					std::cout << "Óãîë ìåæäó âåêòîðàìè: " << sVec.Angle(pair) << "\n";
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
					std::cout << "Äëèíà âåêòîðà: " << seeVec.GetLength() << std::endl;
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
					std::cout << "Ðåçóëüòàò ñêàëÿðíîãî ïðîèçâåäåíèÿ: " << seeVec.Dot(compVec) << "\n";
					system("pause");
					printMenu();
				case threeDAngle:
					seeVec = vec3dInsert();
					seeVec.print3dVec();
					compVec = vec3dInsert();
					compVec.print3dVec();
					std::cout << "Óãîë ìåæäó âåêòîðàìè: " << seeVec.Angle(compVec) << "\n";
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
