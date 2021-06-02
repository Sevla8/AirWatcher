#ifndef CONTROLLERTEST_H
#define CONTROLLERTEST_H

#include "gtest/gtest.h"
#include "../src/control/Controller.h"
#include "../src/model/Sensor.h"
#include "../src/factory/Reader.h"

#include <vector>

class ControllerTest : public ::testing::Test {
	public:
		virtual void SetUp() {
			//sensorsRanked=Reader::readSensors("../../dataset/tests/sensorsRanked.csv"); sensorsRanked.csv A FAIRE

		}

		// virtual void TearDown() {}

		Controller controller;
		Date debut = Date(2019, 1, 4, 12, 0, 0);
		Date fin = Date(2019, 1, 8, 12, 0, 0);
		// Sensor sensor = sensorsDataSet[0];

};

#endif
