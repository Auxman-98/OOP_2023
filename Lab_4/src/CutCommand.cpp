#include <iostream>

#include "CutCommand.h"

namespace awhalen {
	void CutCommand::exec()
	{
		std::cout << "��������" << std::endl;
	}

	void CutCommand::undo()
	{
		std::cout << "�������� �������" << std::endl;
	}

	std::string CutCommand::getAction()
	{
		return "�������";
	}
}