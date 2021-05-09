#include <iostream>
using namespace std;

#include "Provider.h"
#include "../factory/Reader.h"

ostream& operator<<(std::ostream& os, const Provider& p) {
	return os << p.id << ";";
}

bool Provider::operator<(const Provider& p) const {
	return id < p.id;
}

Provider::Provider(const ProviderData& pd) :
	User(),
	id(pd.id) {
}

Provider::~Provider() {}