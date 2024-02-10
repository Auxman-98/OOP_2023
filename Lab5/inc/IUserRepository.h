#ifndef IUSERREPOSITORY_H
#define IUSERREPOSITORY_H

#include "User.h"
#include <vector>
using namespace std;

class IUserRepository
{
public:
	virtual User GetById(int id) = 0;
	virtual User GetByName(const string& name) = 0;
	virtual User GetByLoginPassword(const string& login, const string& password) = 0;
	virtual vector<User> Get() = 0;
	virtual void Add(User item) = 0;
	virtual void Remove(User item) = 0;
	virtual void Update(User item) = 0;
};

#endif