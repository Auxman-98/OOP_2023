#include "MacOSTextBox.h"

#include <iostream>

using namespace factories;

void MacOSTextBox::setPosition() {
	std::cout << "������ ����� setPosition � ��������� MacOSTextBox" << std::endl;
}

void MacOSTextBox::getPosition() {
	std::cout << "������ ����� getPosition � ��������� MacOSTextBox" << std::endl;
}

void MacOSTextBox::setText() {
	std::cout << "������ ����� setText � ��������� MacOSTextBox" << std::endl;
}

void MacOSTextBox::getText() {
	std::cout << "������ ����� getText � ��������� MacOSTextBox" << std::endl;
}

void MacOSTextBox::onValueChanged() {
	std::cout << "������ ����� onValueChanged � ��������� MacOSTextBox" << std::endl;
}