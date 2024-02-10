#ifndef FILEUSERREPOSITORY_H
#define FILEUSERREPOSITORY_H

#include <utility>
#include "IUserRepository.h"

using namespace std;

class FileUserRepository : public IUserRepository
{
private:
	vector<User> users;
	string fileName;

public:
	explicit FileUserRepository(string newFileName) : fileName(move(newFileName)) {};

	User GetById(int id) override;
	User GetByName(const string& name) override;
	User GetByLoginPassword(const string& login, const string& password) override;

	vector<User> Get() override;

	void Add(User item) override;
	void Remove(User item) override;
	void Update(User item) override;
};

#endif