#include "WindowsButton.h"

#include <iostream>

using namespace factories;

void WindowsButton::setPosition() {
	std::cout << "Вызван метод setPosition у контролла WindowsButton" << std::endl;
}

void WindowsButton::getPosition() {
	std::cout << "Вызван метод getPosition у контролла WindowsButton" << std::endl;
}

void WindowsButton::setText() {
	std::cout << "Вызван метод setText у контролла WindowsButton" << std::endl;
}

void WindowsButton::getText() {
	std::cout << "Вызван метод getText у контролла WindowsButton" << std::endl;
}

void WindowsButton::click() {
	std::cout << "Вызван метод click у контролла WindowsButton" << std::endl;
}