#include "Command.h"
#include <iostream>

#ifndef _COPYCOMMAND_H_
#define _COPYCOMMAND_H_

namespace awhalen {
	class CopyCommand : public Command
	{
	public:
		void exec() override;

		void undo() override;

		std::string getAction() override;
	};
}

#endif