#include <iostream>
using namespace std;

#include "User.h"
#include "../factory/Reader.h"

ostream& operator<<(std::ostream& os, const User& p) {
	return os << ";";
}

User::User() {}

User::User(const UserData& ud) {}

User::~User() {}

