#include <iostream>
#include <utility>

#include "StringCommand.h"

namespace awhalen {
	void StringCommand::exec()
	{
		std::cout << "���������� " + a_key << std::endl;

	}

	void StringCommand::undo()
	{
		std::cout << "�������� ������ " + a_key << std::endl;

	}

	StringCommand::StringCommand(std::string key)
		: a_key{std::move(key)} {}

	std::string StringCommand::getAction() {
		return "������";
	}
}