#ifndef Model_H
#define Model_H

#include <string>
#include <set>
#include "Sensor.h"
#include "Cleaner.h"

class Model {
	public:
		Model();
	friend ostream& operator<<(std::ostream&, const Model&);
	friend class Controller;
	protected:
	private:
		set<Sensor> sensors;
		set<Cleaner> cleaners;
};

#endif
