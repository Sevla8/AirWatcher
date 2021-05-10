#ifndef Measurement_H
#define Measurement_H

#include <string>
#include "Date.h"
#include "Attribute.h"
#include "../factory/Reader.h"
using namespace std;

class Measurement {
	public:
		Measurement(const MeasurementData&);
		Measurement(const MeasurementData&, const AttributeData&);
		bool operator<(const Measurement&) const;
	friend ostream& operator<<(std::ostream&, const Measurement&);
	protected:
	private:
		float value;
		Date date;
		Attribute attribute;
};

#endif
