#include "Command.h"
#include <string>

#ifndef KEY_H
#define KEY_H

namespace awhalen {
	class Key
	{
	public:
		Key(std::string keyLabel, Command *command);
		void assignCommand(Command* command);
		void exec();
		Command* getCommand();
		std::string getKeyLabel();

	private:
		std::string a_keyLabel;
		Command* a_Command;
	};
}

#endif