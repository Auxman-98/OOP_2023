#include <iostream>
#include "CopyCommand.h"

namespace awhalen {
	void CopyCommand::exec()
	{
		std::cout << "�����������" << std::endl;
	}

	void CopyCommand::undo()
	{
		std::cout << "�������� �����������" << std::endl;
	}

	std::string CopyCommand::getAction() 
	{
		return "�����������";
	}
}