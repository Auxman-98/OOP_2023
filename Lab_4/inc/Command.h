#include <string>

#ifndef _COMMAND_H_
#define _COMMAND_H_

namespace awhalen {
	class Command
	{
	public:
		/**/virtual void exec() = 0;
		
		virtual void undo() = 0;
		
		virtual std::string getAction() = 0;
	};
}


#endif