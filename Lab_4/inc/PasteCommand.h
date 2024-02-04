#include "Command.h"
#include <iostream>

#ifndef _PASTECOMMAND_H_
#define _PASTECOMMAND_H_

namespace awhalen {
	class PasteCommand : public Command
	{
		void exec() override;

		void undo() override;

		std::string getAction() override;
	};
}

#endif