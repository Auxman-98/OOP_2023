#include <iostream>

#include "CutCommand.h"

namespace awhalen {
	void CutCommand::exec()
	{
		std::cout << "Вырезать" << std::endl;
	}

	void CutCommand::undo()
	{
		std::cout << "Отменить вырезку" << std::endl;
	}

	std::string CutCommand::getAction()
	{
		return "Вырезка";
	}
}