#include <string>
#include <unordered_map>

#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_

class Keyboard
{
protected:
	std::unordered_map<std::string, std::string> actions;

public:
	void setAction(const std::string& key, const std::string& virtualKey)
	{
		actions[key] = virtualKey;
	}

	std::string getVirtualKey(const std::string& key)
	{
		if (actions.find(key) == actions.end()) { return ""; }
		return actions[key];
	}

	void undoAction()
	{
		if (!actions.empty())
		{
			actions.erase(actions.end());
		}
	}

	void relabelKey(const std::string& key, const std::string& virtualKey)
	{
		actions.erase(key);
		setAction(key, virtualKey);
	}
};

#endif