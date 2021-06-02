#ifndef SENSOR_TEST_H
#define SENSOR_TEST_H

#include "gtest/gtest.h"
#include "../src/model/Sensor.h"

class SensorTest : public ::testing::Test {
	protected:
		virtual void SetUp() {
			User* user1 = new PrivateUser("user1", 0, false);
			sensor1 = Sensor("Sensor1", 45.8, 46.9, false, user1, vector<Measurement>());

			User* user2 = new PrivateUser("user2", 10, true);
			sensor2 = Sensor("Sensor2", 49.8, 40.9, true, user2, vector<Measurement>());
		}

		Sensor sensor1;
		Sensor sensor2;
};

#endif