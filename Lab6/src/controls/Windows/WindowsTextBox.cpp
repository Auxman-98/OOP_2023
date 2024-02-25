#include "WindowsTextBox.h"

#include <iostream>

using namespace factories;

void WindowsTextBox::setPosition() {
	std::cout << "Вызван метод setPosition у контролла WindowsTextBox" << std::endl;
}

void WindowsTextBox::getPosition() {
	std::cout << "Вызван метод getPosition у контролла WindowsTextBox" << std::endl;
}

void WindowsTextBox::setText() {
	std::cout << "Вызван метод setText у контролла WindowsTextBox" << std::endl;
}

void WindowsTextBox::getText() {
	std::cout << "Вызван метод getText у контролла WindowsTextBox" << std::endl;
}

void WindowsTextBox::onValueChanged() {
	std::cout << "Вызван метод onValueChanged у контролла WindowsTextBox" << std::endl;
}