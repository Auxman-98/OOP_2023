#include "LinuxForm.h"

#include <iostream>

using namespace factories;

void LinuxForm::setPosition() {
	std::cout << "Вызван метод setPosition у контролла LinuxForm" << std::endl;
}

void LinuxForm::getPosition() {
	std::cout << "Вызван метод getPosition у контролла LinuxForm" << std::endl;
}

void LinuxForm::addControl() {
	std::cout << "Вызван метод addControl у контролла LinuxForm" << std::endl;
}