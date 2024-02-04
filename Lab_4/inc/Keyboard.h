#include <string>
#include <vector>

#include "Command.h"
#include "Key.h"

#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_

namespace awhalen {
	class Keyboard
	{
	public:
	    Keyboard();

		void undo();

		void addKey(const Key &key);

		void press(const std::string &key);

		void reassignKey(const std::string &key, Command *command);
	    
		
	private:
	    std::vector<Key> a_keyList;
		std::vector<Key> a_sequencing;
    };
}

#endif