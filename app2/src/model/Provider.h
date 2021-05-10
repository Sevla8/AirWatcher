#ifndef Provider_H
#define Provider_H

#include <string>
#include "User.h"
#include "../factory/Reader.h"

class Provider : public User {
	public:
		Provider(const ProviderData&);
		virtual ~Provider();
		bool operator<(const Provider&) const;
	friend ostream& operator<<(std::ostream&, const Provider&);
	protected:
	private:
		string id;
};

#endif
