#include "SensorTest.h"

TEST_F(SensorTest, GetId1) {
	EXPECT_EQ("Sensor1", sensor1.GetId());
}

TEST_F(SensorTest, GetId2) {
	EXPECT_EQ("Sensor2", sensor2.GetId());
}

TEST_F(SensorTest, GetLatitude1) {
	EXPECT_EQ(45.8f, sensor1.GetLatitude());
}

TEST_F(SensorTest, GetLatitude2) {
	EXPECT_EQ(49.8f, sensor2.GetLatitude());
}

TEST_F(SensorTest, GetLongitude1) {
	EXPECT_EQ(46.9f, sensor1.GetLongitude());
}

TEST_F(SensorTest, GetLongitude2) {
	EXPECT_EQ(40.9f, sensor2.GetLongitude());
}

TEST_F(SensorTest, GetMalfunctioning1) {
	EXPECT_EQ(false, sensor1.GetMalfunctioning());
}

TEST_F(SensorTest, GetMalfunctioning2) {
	EXPECT_EQ(true, sensor2.GetMalfunctioning());
}
