#ifndef CONTROLLERTEST_H
#define CONTROLLERTEST_H

#include "gtest/gtest.h"
#include "../src/control/Controller.h"
#include "../src/model/Model.h"
#include "../src/model/Sensor.h"
#include "../src/factory/Reader.h"

#include <vector>

class ControllerTest : public ::testing::Test {
	public:
		virtual void SetUp() {
			Model model("../../dataset/sensors.csv",
						"../../dataset/cleaners.csv",
						"../../dataset/attributes.csv",
						"../../dataset/users.csv",
						"../../dataset/providers.csv",
						"../../dataset/tests/measurements1.csv");
			controller.setModel(model);
		}

		// virtual void TearDown() {}

		Controller controller;
		// Sensor sensor = sensorsDataSet[0];

};

#endif
