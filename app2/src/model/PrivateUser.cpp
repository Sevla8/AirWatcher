#include <iostream>
#include "PrivateUser.h"
#include "User.h"
#include "../factory/Reader.h"

using namespace std;

ostream& operator<<(std::ostream& os, const PrivateUser& pu) {
	return os << pu.id << ";" << pu.score << ";" <<
		pu.malicious << ";";
}

bool PrivateUser::operator<(const PrivateUser& pu) const {
	return id < pu.id;
}

PrivateUser::PrivateUser(const UserData& ud) :
	User(),
	id(ud.id),
	score(0),
	malicious(false) {
}

PrivateUser::~PrivateUser() {}