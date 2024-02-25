#include "WindowsComboBox.h"

#include <iostream>

using namespace factories;

void WindowsComboBox::setPosition() {
	std::cout << "Вызван метод setPosition у контролла WindowsComboBox" << std::endl;
}

void WindowsComboBox::getPosition() {
	std::cout << "Вызван метод getPosition у контролла WindowsComboBox" << std::endl;
}

void WindowsComboBox::getSelectedIndex() {
	std::cout << "Вызван метод getSelectedIndex у контролла WindowsComboBox" << std::endl;
}

void WindowsComboBox::setSelectedIndex() {
	std::cout << "Вызван метод setSelectedIndex у контролла WindowsComboBox" << std::endl;
}

void WindowsComboBox::setItems() {
	std::cout << "Вызван метод setItems у контролла WindowsComboBox" << std::endl;
}

void WindowsComboBox::getItems() {
	std::cout << "Вызван метод getItems у контролла WindowsComboBox" << std::endl;
}