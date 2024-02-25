#include "OSFactory.h"
#include "WindowsFactory.h"
#include "MacOSFactory.h"
#include "LinuxFactory.h"
#include "Production.h"

#include <iostream>

using namespace factories;

int main()
{
	setlocale(LC_ALL, "Rus");
	OSFactory* factory;

	int operatingSystem = 0;
	std::cout << "Your OS is: Windows - 1, Linux - 2, MacOS - 3?" << std::endl;
	std::cin >> operatingSystem;

	switch (operatingSystem) {
	case 1:
		factory = new WindowsFactory;
		break;
	case 2:
		factory = new LinuxFactory;
		break;
	case 3:
		factory = new MacOSFactory;
		break;
	default:
		return -1;
	}

	OS* os = Production::createOS(factory);
	os->vb[0]->getText();
	os->vf[0]->addControl();
	os->vl[0]->setPosition();
	os->vtb[0]->setText();
	os->vcb[0]->getSelectedIndex();
	os->vcb[0]->getItems();

	return 0;
}