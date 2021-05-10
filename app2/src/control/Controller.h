#ifndef Controller_H
#define Controller_H

#include <string>
#include "../model/Sensor.h"
#include "../model/User.h"
#include "../model/Measurement.h"
#include "../model/Attribute.h"
#include "../model/Cleaner.h"
#include "../model/Provider.h"
#include "../model/Date.h"
#include "../model/GovernmentAgency.h"
#include "../model/PrivateUser.h"
#include "../model/Model.h"

class Controller {
	public:
	    Controller();
	    virtual ~Controller();
		Model getModel() const;
	friend ostream& operator<<(std::ostream&, const Controller&);
	protected:
		string analyseAirQualityInCircularArea(float lattitude, float longitude, float radius, Date begin, Date end);
	private:
		Model model;
};

#endif
