#include <iostream>
#include <sstream>
using namespace std;

#include "Attribute.h"
#include "../factory/Reader.h"

ostream& operator<<(std::ostream& os, const Attribute& a) {
	return os << a.id << ";" << a.unit << ";" << a.description << ";";
}

bool Attribute::operator<(const Attribute& a) const {
	return id < a.id;
}

Attribute::Attribute(const AttributeData& ad) :
	id(ad.id),
	unit(ad.unit),
	description(ad.description) {
}
