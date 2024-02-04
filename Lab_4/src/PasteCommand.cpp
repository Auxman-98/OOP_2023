#include <iostream>

#include "PasteCommand.h"

namespace awhalen {
	void PasteCommand::exec()
	{
		std::cout << "Вставить" << std::endl;
	}

	void PasteCommand::undo()
	{
		std::cout << "Отменить вставку" << std::endl;
	}

	std::string PasteCommand::getAction()
	{
		return "Вставка";
	}
}