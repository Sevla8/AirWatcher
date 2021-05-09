#ifndef Attribute_H
#define Attribute_H

#include <string>
#include "../factory/Reader.h"
using namespace std;

class Attribute {
	public:
		Attribute() {}
		Attribute(const AttributeData&);
		bool operator<(const Attribute&) const;
	friend ostream& operator<<(std::ostream&, const Attribute&);
	protected:
	private:
		string id;
		string unit;
		string description;
};

#endif
