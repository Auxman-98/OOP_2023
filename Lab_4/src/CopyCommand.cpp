#include <iostream>
#include "CopyCommand.h"

namespace awhalen {
	void CopyCommand::exec()
	{
		std::cout << "Скопировать" << std::endl;
	}

	void CopyCommand::undo()
	{
		std::cout << "Отменить копирование" << std::endl;
	}

	std::string CopyCommand::getAction() 
	{
		return "Копирование";
	}
}