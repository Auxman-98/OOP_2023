#include "Command.h"
#include <iostream>

#ifndef _CUTCOMMAND_H_
#define _CUTCOOMAND_H_

namespace awhalen {
	class CutCommand : public Command
	{
		void exec() override;

		void undo() override;

		std::string getAction() override;
	};
}

#endif