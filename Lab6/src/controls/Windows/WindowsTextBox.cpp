#include "WindowsTextBox.h"

#include <iostream>

using namespace factories;

void WindowsTextBox::setPosition() {
	std::cout << "������ ����� setPosition � ��������� WindowsTextBox" << std::endl;
}

void WindowsTextBox::getPosition() {
	std::cout << "������ ����� getPosition � ��������� WindowsTextBox" << std::endl;
}

void WindowsTextBox::setText() {
	std::cout << "������ ����� setText � ��������� WindowsTextBox" << std::endl;
}

void WindowsTextBox::getText() {
	std::cout << "������ ����� getText � ��������� WindowsTextBox" << std::endl;
}

void WindowsTextBox::onValueChanged() {
	std::cout << "������ ����� onValueChanged � ��������� WindowsTextBox" << std::endl;
}