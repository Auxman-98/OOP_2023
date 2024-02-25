#include "WindowsForm.h"

#include <iostream>

using namespace factories;

void WindowsForm::setPosition() {
	std::cout << "Вызван метод setPosition у контролла WindowsForm" << std::endl;
}

void WindowsForm::getPosition() {
	std::cout << "Вызван метод getPosition у контролла WindowsForm" << std::endl;
}

void WindowsForm::addControl() {
	std::cout << "Вызван метод addControl у контролла WindowsForm" << std::endl;
}