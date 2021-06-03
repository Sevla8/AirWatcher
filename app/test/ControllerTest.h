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
			sensorsRanked=Reader::readSensors("../../dataset/tests/sensorsRanked.csv"); 
			sensor=sensorsRanked[0];
			controller2.setModel(model2);
			
		}

		// virtual void TearDown() {}

		Controller controller;
		Model model2= new Model("../../dataset/sensors.csv", "../../dataset/cleaners.csv", "../../dataset/attributes.csv" , 
								"../../dataset/users.csv", "../../dataset/providers.csv", "../../dataset/dataToTestSensorRanked.csv");
		Controller controller2=new Controller();
		Date debut = Date(2019, 1, 4, 12, 0, 0);
		Date fin = Date(2019, 1, 8, 12, 0, 0);
		vector<Sensor> sensorsRanked;
		Sensor sensor;
		

};

#endif
