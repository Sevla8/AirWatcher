#include "ControllerTest.h"

TEST_F(ControllerTest, AirQuality0FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Very good", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, -1.0f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality1FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Moderate", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, -0.3f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality2FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Moderate", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 0.4f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality3FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Moderate", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 1.1f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality4FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Moderate", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 1.8f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality1FourthJanuary) {
	Date debut = Date(2019, 1, 4, 12, 0, 0);
	Date fin = Date(2019, 1, 4, 12, 0, 0);
	ASSERT_EQ("Extremely bad", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, -0.3f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality2FourthJanuary) {
	Date debut = Date(2019, 1, 4, 12, 0, 0);
	Date fin = Date(2019, 1, 4, 12, 0, 0);
	ASSERT_EQ("Extremely bad", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 0.4f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality3FourthJanuary) {
	Date debut = Date(2019, 1, 4, 12, 0, 0);
	Date fin = Date(2019, 1, 4, 12, 0, 0);
	ASSERT_EQ("Extremely bad", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 1.1f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality4FourthJanuary) {
	Date debut = Date(2019, 1, 4, 12, 0, 0);
	Date fin = Date(2019, 1, 4, 12, 0, 0);
	ASSERT_EQ("Extremely bad", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 1.8f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality1FithJanuary) {
	Date debut = Date(2019, 1, 5, 12, 0, 0);
	Date fin = Date(2019, 1, 5, 12, 0, 0);
	ASSERT_EQ("Good", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, -0.3f, 0.0001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality2FithJanuary) {
	Date debut = Date(2019, 1, 5, 12, 0, 0);
	Date fin = Date(2019, 1, 5, 12, 0, 0);
	ASSERT_EQ("Good", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 0.4f, 0.0001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality3FithJanuary) {
	Date debut = Date(2019, 1, 5, 12, 0, 0);
	Date fin = Date(2019, 1, 5, 12, 0, 0);
	ASSERT_EQ("Good", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 1.1f, 0.0001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality4FithJanuary) {
	Date debut = Date(2019, 1, 5, 12, 0, 0);
	Date fin = Date(2019, 1, 5, 12, 0, 0);
	ASSERT_EQ("Good", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 1.8f, 0.0001f, debut, fin, true)));
}

