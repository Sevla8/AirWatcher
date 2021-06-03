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
			Model model("../../dataset/tests/sensors.csv",
						"../../dataset/tests/cleaners.csv",
						"../../dataset/tests/attributes.csv",
						"../../dataset/tests/users.csv",
						"../../dataset/tests/providers.csv",
						"../../dataset/tests/measurements1.csv");
			controller.SetModel(model);

			Model model2("../../dataset/tests/sensors1.csv",
						 "../../dataset/tests/cleaners.csv",
						 "../../dataset/tests/attributes.csv",
						 "../../dataset/tests/users.csv",
						 "../../dataset/tests/providers.csv",
						 "../../dataset/tests/dataToTestSensorRanked.csv");
			controller2.SetModel(model2);

			sensor = *controller2.GetModel().GetSensors().begin();
		}

		Controller controller;
		Controller controller2;
		Date debut = Date(2019, 1, 1, 1, 0, 0);
		Date fin = Date(2019, 1, 2, 12, 0, 0);
		Sensor sensor;
};

#endif
