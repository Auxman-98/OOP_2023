#include <iostream>

#include "PasteCommand.h"

namespace awhalen {
	void PasteCommand::exec()
	{
		std::cout << "��������" << std::endl;
	}

	void PasteCommand::undo()
	{
		std::cout << "�������� �������" << std::endl;
	}

	std::string PasteCommand::getAction()
	{
		return "�������";
	}
}