#ifndef Controller_H
#define Controller_H

#include <string>
#include "../model/Model.h"

class Controller {
	public:
		Controller();
		virtual ~Controller();
		Model getModel() const;
		string analyseAirQualityInCircularArea(float, float, float, const Date&, const Date&);
	friend ostream& operator<<(std::ostream&, const Controller&);
	protected:
	private:
		Model model;
};

#endif
