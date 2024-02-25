#include "WindowsLabel.h"

#include <iostream>

using namespace factories;

void WindowsLabel::setPosition() {
	std::cout << "Вызван метод setPosition у контролла WindowsLabel" << std::endl;
}

void WindowsLabel::getPosition() {
	std::cout << "Вызван метод getPosition у контролла WindowsLabel" << std::endl;
}

void WindowsLabel::setText() {
	std::cout << "Вызван метод setText у контролла WindowsLabel" << std::endl;
}

void WindowsLabel::getText() {
	std::cout << "Вызван метод getText у контролла WindowsLabel" << std::endl;
}