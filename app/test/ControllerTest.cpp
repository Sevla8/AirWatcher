#include "ControllerTest.h"

TEST_F(ControllerTest, AirQuality0FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Very good", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, -1.0f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality1FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Moderate", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, -0.3f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality2FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Moderate", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, 0.4f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality3FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Moderate", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, 1.1f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality4FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Moderate", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, 1.8f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality1FourthJanuary) {
	Date debut = Date(2019, 1, 4, 12, 0, 0);
	Date fin = Date(2019, 1, 4, 12, 0, 0);
	ASSERT_EQ("Extremely bad", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, -0.3f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality2FourthJanuary) {
	Date debut = Date(2019, 1, 4, 12, 0, 0);
	Date fin = Date(2019, 1, 4, 12, 0, 0);
	ASSERT_EQ("Extremely bad", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, 0.4f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality3FourthJanuary) {
	Date debut = Date(2019, 1, 4, 12, 0, 0);
	Date fin = Date(2019, 1, 4, 12, 0, 0);
	ASSERT_EQ("Extremely bad", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, 1.1f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality4FourthJanuary) {
	Date debut = Date(2019, 1, 4, 12, 0, 0);
	Date fin = Date(2019, 1, 4, 12, 0, 0);
	ASSERT_EQ("Extremely bad", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, 1.8f, 0.001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality1FithJanuary) {
	Date debut = Date(2019, 1, 5, 12, 0, 0);
	Date fin = Date(2019, 1, 5, 12, 0, 0);
	ASSERT_EQ("Good", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, -0.3f, 0.0001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality2FithJanuary) {
	Date debut = Date(2019, 1, 5, 12, 0, 0);
	Date fin = Date(2019, 1, 5, 12, 0, 0);
	ASSERT_EQ("Good", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, 0.4f, 0.0001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality3FithJanuary) {
	Date debut = Date(2019, 1, 5, 12, 0, 0);
	Date fin = Date(2019, 1, 5, 12, 0, 0);
	ASSERT_EQ("Good", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, 1.1f, 0.0001f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality4FithJanuary) {
	Date debut = Date(2019, 1, 5, 12, 0, 0);
	Date fin = Date(2019, 1, 5, 12, 0, 0);
	ASSERT_EQ("Very good", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, -0.3f, 0.8f, debut, fin, true)));
}


TEST_F(ControllerTest, AirQualityMultipleSensorsFithJanuary) {
	Date debut = Date(2019, 1, 5, 12, 0, 0);
	Date fin = Date(2019, 1, 5, 12, 0, 0);
	ASSERT_EQ("Good", controller.CalculateAirQualityValue(controller.AnalyseAirQualityInCircularArea(44.0f, 1.8f, 0.0001f, debut, fin, true)));
}

TEST_F(ControllerTest, RankingSensorSimilarities) {
	vector<Sensor> res = controller2.RankingSensorsSimilarity(sensor.GetId(), debut, fin);

	vector<string> sorted = vector<string>();
	sorted.push_back("Sensor0");
	sorted.push_back("Sensor2");
	sorted.push_back("Sensor7");
	sorted.push_back("Sensor6");
	sorted.push_back("Sensor10");
	sorted.push_back("Sensor9");
	sorted.push_back("Sensor8");
	sorted.push_back("Sensor1");
	sorted.push_back("Sensor5");
	sorted.push_back("Sensor4");
	sorted.push_back("Sensor3");

	int i = 0;
	for (int i = 0; i < sorted.size(); ++i)
	{
		ASSERT_EQ(sorted[i], res[i].GetId());
		++i;
	}
}
