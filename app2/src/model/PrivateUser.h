#ifndef PrivateUser_H
#define PrivateUser_H

#include <string>
#include <list>
#include "User.h"
#include "../factory/Reader.h"

class PrivateUser : public User {
	public:
		PrivateUser() {}
		PrivateUser(const UserData&);
		virtual ~PrivateUser();
		bool operator<(const PrivateUser&) const;
	friend ostream& operator<<(std::ostream&, const PrivateUser&);
	protected:
	private:
		string id;
		int score;
		bool malicious;
};

#endif
