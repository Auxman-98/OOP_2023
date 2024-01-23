#include <string>

#ifndef _COMMAND_H_
#define _COMMAND_H_

class Command
{
private:
	std::string key;
	std::string virtualKey;

public:
	Command(const std::string& key, const std::string& virtualKey)
		: key(key), virtualKey(virtualKey)
	{
	}

	std::string getKey() const
	{
		return key;
	}

	std::string getVirtualKey() const
	{
		return virtualKey;
	}
};

#endif