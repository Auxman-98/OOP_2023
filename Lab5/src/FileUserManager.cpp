#include "FileUserManager.h"

void FileUserManager::LogIn(User user) {
	currentUser = user;
}

void FileUserManager::SignIn(User user) {
	currentUser = user;
	std::ofstream file("data.txt", std::ios::app);

	if (file.is_open()) {
		std::string userString =
			std::to_string(user.getId()) + " " + user.getName() + " " + user.getLogin() + " " + user.getPassword();
		file << userString << "\n";
		file.close();
	} else {
		std::cerr << "�� ������� ���������������� ������������ ��-�� ��������� ������" << std::endl;
	}
}

void FileUserManager::SignOut() {
	currentUser = User();
}

bool FileUserManager::IsAuthorized() const {
	return !currentUser.getName().empty();
}
