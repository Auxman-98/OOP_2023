#include <utility>
#include <iostream>

#include "Key.h"

namespace awhalen {
	Key::Key(std::string keyLabel, Command* command) :
		a_keyLabel{ std::move(keyLabel) }, a_Command{ command } {}

	void Key::assignCommand(Command* command)
	{
		std::cout << "��� ������� " << a_keyLabel
			<< " ��������� ������� " << command->getAction()
			<< std::endl;
		a_Command = command;
	}

	std::string Key::getKeyLabel() {
		return a_keyLabel;
	}

	Command* Key::getCommand() {
		return a_Command;
	}

	void Key::exec()
	{
		std::cout << "������ ������� " << a_keyLabel << std::endl;
		a_Command->exec();
	}
}