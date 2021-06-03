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

			Model model3("../../dataset/tests/sensors.csv",
						 "../../dataset/tests/cleaners.csv",
						 "../../dataset/tests/attributes.csv",
						 "../../dataset/tests/users.csv",
						 "../../dataset/tests/providers.csv",
						 "../../dataset/measurements.csv");
			controller3.SetModel(model3);

			sensor = *controller2.GetModel().GetSensors().begin();
		}

		Controller controller;
		Controller controller2;
		Controller controller3;
		Sensor sensor;
};

#endif
