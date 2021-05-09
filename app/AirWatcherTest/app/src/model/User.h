#ifndef User_H
#define User_H

#include <string>
#include <iostream>
#include "../factory/Reader.h"
using namespace std;

class User {
	public:
		User();
		User(const UserData&);
		virtual ~User();
	friend ostream& operator<<(std::ostream&, const User&);
	protected:
		// string login;
		// string password;
	private:
};

#endif
