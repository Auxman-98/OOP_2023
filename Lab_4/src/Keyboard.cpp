#include <Windows.h>
#include "Keyboard.h"
#include "CopyCommand.h"
#include "PasteCommand.h"
#include "CutCommand.h"
#include "StringCommand.h"

namespace awhalen {
	
	Keyboard::Keyboard()
	{
		addKey(Key("Ctrl+C", new CopyCommand()));
		addKey(Key("Ctrl+V", new PasteCommand()));
		addKey(Key("Ctrl+X", new CutCommand()));
	}

	void Keyboard::undo()
	{
		Sleep(2000);

		if (!a_sequencing.empty()) {
			a_sequencing[a_sequencing.size() - 1].getCommand()->undo();
			a_sequencing.pop_back();

			for (Key sequenceKey : a_sequencing)
				if (sequenceKey.getCommand()->getAction() == "Печать")
					std::cout << sequenceKey.getKeyLabel();
			std::cout << std::endl;
		}
	}

	void Keyboard::addKey(const Key& key)
	{
		a_keyList.push_back(key);
	}

	void Keyboard::press(const std::string& key)
	{
		Sleep(2000);

		for (Key a_key : a_keyList) {
			if (a_key.getKeyLabel() == key) {
				a_key.exec();
				a_sequencing.push_back(a_key);
				return;
			}
		}

		Key pressedKey(key, new StringCommand(key));
		pressedKey.exec();

		addKey(pressedKey);
		a_sequencing.push_back(pressedKey);

		for (Key sequenceKey : a_sequencing)
			if (sequenceKey.getCommand()->getAction() == "Печать")
				std::cout << sequenceKey.getKeyLabel();
		std::cout << std::endl;
	}

	void Keyboard::reassignKey(const std::string& key, Command* command)
	{
		Sleep(2000);

		for (Key& reassignedKey : a_keyList) {
			if (reassignedKey.getKeyLabel() == key) {
				reassignedKey.assignCommand(command);
				return;
			}
		}

		addKey(Key(key, command));
	}

}