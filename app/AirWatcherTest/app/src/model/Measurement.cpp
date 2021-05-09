#include <iostream>
#include <sstream>
using namespace std;

#include "Measurement.h"
#include "Date.h"
#include "../factory/Reader.h"

ostream& operator<<(std::ostream& os, const Measurement& m) {
	return os << m.value << ";" << m.date << ";" <<
		m.attribute << ";";
}

bool Measurement::operator<(const Measurement& m) const {
	return date < m.date;
}

Measurement::Measurement(const MeasurementData& md) :
	value(md.value),
	date(md.date) {
}

Measurement::Measurement(const MeasurementData& md, const AttributeData& ad) :
	value(md.value),
	date(md.date),
	attribute(ad) {
}
