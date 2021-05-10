#ifndef Cleaner_H
#define Cleaner_H

#include <string>
#include "Date.h"
#include "Provider.h"
#include "../factory/Reader.h"

using namespace std;

class Cleaner {
	public:
		Cleaner(const CleanerData&, const ProviderData&);
		bool operator<(const Cleaner&) const;
	friend ostream& operator<<(std::ostream&, const Cleaner&);
	protected:
	private:
		string id;
		float latitude;
		float longitude;
		Date start;
		Date stop;
		Provider provider;
};

#endif
