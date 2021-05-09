#include <iostream>
#include <sstream>
using namespace std;

#include "Cleaner.h"
#include "Provider.h"
#include "../factory/Reader.h"

ostream& operator<<(std::ostream& os, const Cleaner& c) {
	return os << c.id << ";" << c.latitude << ";" << c.longitude <<
		";" << c.start << ";" << c.stop << ";" << c.provider << ";";
}

bool Cleaner::operator<(const Cleaner& c) const {
	return id < c.id;
}

Cleaner::Cleaner(const CleanerData& cd, const ProviderData& pd) :
	provider(pd),
	id(cd.id),
	latitude(cd.latitude),
	longitude(cd.longitude),
	start(cd.start),
	stop(cd.stop) {
}
