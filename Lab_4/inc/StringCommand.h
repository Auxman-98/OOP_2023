#include "Command.h"
#include <string>

#ifndef STRINGCOMMAND_H
#define STRINGCOMMAND_H

namespace awhalen {

	class StringCommand : public Command
	{
	public: 
		explicit StringCommand(std::string key);

		void exec() override;
		void undo() override;
		std::string getAction() override;

	private:
		std::string a_key;
	}; 

}

#endif