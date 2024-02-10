#ifndef USER_H
#define USER_H

#include <iostream>
#include <utility>
#include <string>

using namespace std;

class User 
{
private:
	int aId{};
	string aName;
	string aLogin;
	string aPassword;

public:
	User() = default;

	User(int id, string name, string login, string password)
	{
		aId = id;
		aName = name;
		aLogin = login;
		aPassword = password;
	}

	[[nodiscard]] int getId() const { return aId; }
	[[nodiscard]] string getName() const { return aName; }
	[[nodiscard]] string getLogin() const { return aLogin; }
	[[nodiscard]] string getPassword() const { return aPassword; }

	friend ostream& operator<<(ostream& out, const User& user) {
		out << user.aId << " " << user.aName << " " << user.aLogin << " " << user.aPassword;
		return out;
	}

	friend istream& operator>>(istream& in, User& user) {
		string data;
		if (getline(in, data)) {
			size_t pos = 0;
			size_t lastPos = 0;
			string deLimiter = " ";
			string token;

			// ѕолучаем данные пользовател€ по пор€дку
			if ((pos = data.find(deLimiter)) != string::npos) {
				token = data.substr(lastPos, pos);
				user.aId = stoi(token);
				lastPos = pos + deLimiter.length();
			}

			if ((pos = data.find(deLimiter, lastPos)) != string::npos) {
				token = data.substr(lastPos, pos - lastPos);
				user.aName = token;
				lastPos = pos + deLimiter.length();
			}

			if ((pos = data.find(deLimiter, lastPos)) != string::npos) {
				token = data.substr(lastPos, pos - lastPos);
				user.aLogin = token;
				lastPos = pos + deLimiter.length();
			}

			user.aPassword = data.substr(lastPos);
		}

		return in;
	}
};

#endif