#include "LinuxTextBox.h"

#include <iostream>

using namespace factories;

void LinuxTextBox::setPosition() {
	std::cout << "������ ����� setPosition � ��������� LinuxTextBox" << std::endl;
}

void LinuxTextBox::getPosition() {
	std::cout << "������ ����� getPosition � ��������� LinuxTextBox" << std::endl;
}

void LinuxTextBox::setText() {
	std::cout << "������ ����� setText � ��������� LinuxTextBox" << std::endl;
}

void LinuxTextBox::getText() {
	std::cout << "������ ����� getText � ��������� LinuxTextBox" << std::endl;
}

void LinuxTextBox::onValueChanged() {
	std::cout << "������ ����� onValueChanged � ��������� LinuxTextBox" << std::endl;
}