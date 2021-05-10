#include <iostream>
#include <sstream>
#include <string>

using namespace std;

#include "Controller.h"

Controller::Controller() {}

Controller::~Controller() {}

ostream& operator<<(std::ostream& os, const Controller& c) {
	return os << c.model;
}

Model Controller::getModel() const {
	return model;
}