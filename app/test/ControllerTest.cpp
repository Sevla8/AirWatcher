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

TEST_F(ControllerTest, RankingSensorSimilarities0) {
	Date debut = Date(2019, 1, 1, 1, 0, 0);
	Date fin = Date(2019, 1, 2, 12, 0, 0);
	vector<Sensor> res = controller2.RankingSensorsSimilarity(sensorId, debut, fin);

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

	ASSERT_EQ(sorted.size(), res.size());

	int i = 0;
	for (int i = 0; i < sorted.size(); ++i)
	{
		ASSERT_EQ(sorted[i], res[i].GetId());
		++i;
	}
}

TEST_F(ControllerTest, RankingSensorSimilarities1) {
	Date debut = Date(2019, 1, 1, 1, 1, 1);
	Date fin = Date(2019, 12, 1, 1, 1, 1);
	vector<Sensor> res = controller3.RankingSensorsSimilarity(sensorId, debut, fin);

	vector<string> sorted = vector<string>();
	{
		sorted.push_back("Sensor0");
		sorted.push_back("Sensor10");
		sorted.push_back("Sensor24");
		sorted.push_back("Sensor11");
		sorted.push_back("Sensor23");
		sorted.push_back("Sensor14");
		sorted.push_back("Sensor7");
		sorted.push_back("Sensor85");
		sorted.push_back("Sensor33");
		sorted.push_back("Sensor9");
		sorted.push_back("Sensor1");
		sorted.push_back("Sensor36");
		sorted.push_back("Sensor35");
		sorted.push_back("Sensor34");
		sorted.push_back("Sensor13");
		sorted.push_back("Sensor2");
		sorted.push_back("Sensor29");
		sorted.push_back("Sensor28");
		sorted.push_back("Sensor45");
		sorted.push_back("Sensor50");
		sorted.push_back("Sensor22");
		sorted.push_back("Sensor95");
		sorted.push_back("Sensor66");
		sorted.push_back("Sensor49");
		sorted.push_back("Sensor38");
		sorted.push_back("Sensor12");
		sorted.push_back("Sensor94");
		sorted.push_back("Sensor17");
		sorted.push_back("Sensor8");
		sorted.push_back("Sensor79");
		sorted.push_back("Sensor48");
		sorted.push_back("Sensor19");
		sorted.push_back("Sensor15");
		sorted.push_back("Sensor60");
		sorted.push_back("Sensor39");
		sorted.push_back("Sensor47");
		sorted.push_back("Sensor37");
		sorted.push_back("Sensor61");
		sorted.push_back("Sensor18");
		sorted.push_back("Sensor46");
		sorted.push_back("Sensor88");
		sorted.push_back("Sensor59");
		sorted.push_back("Sensor76");
		sorted.push_back("Sensor56");
		sorted.push_back("Sensor86");
		sorted.push_back("Sensor32");
		sorted.push_back("Sensor16");
		sorted.push_back("Sensor51");
		sorted.push_back("Sensor87");
		sorted.push_back("Sensor78");
		sorted.push_back("Sensor21");
		sorted.push_back("Sensor57");
		sorted.push_back("Sensor58");
		sorted.push_back("Sensor67");
		sorted.push_back("Sensor70");
		sorted.push_back("Sensor72");
		sorted.push_back("Sensor44");
		sorted.push_back("Sensor6");
		sorted.push_back("Sensor42");
		sorted.push_back("Sensor25");
		sorted.push_back("Sensor55");
		sorted.push_back("Sensor71");
		sorted.push_back("Sensor27");
		sorted.push_back("Sensor84");
		sorted.push_back("Sensor96");
		sorted.push_back("Sensor4");
		sorted.push_back("Sensor41");
		sorted.push_back("Sensor69");
		sorted.push_back("Sensor52");
		sorted.push_back("Sensor99");
		sorted.push_back("Sensor5");
		sorted.push_back("Sensor65");
		sorted.push_back("Sensor80");
		sorted.push_back("Sensor77");
		sorted.push_back("Sensor3");
		sorted.push_back("Sensor20");
		sorted.push_back("Sensor26");
		sorted.push_back("Sensor81");
		sorted.push_back("Sensor68");
		sorted.push_back("Sensor43");
		sorted.push_back("Sensor75");
		sorted.push_back("Sensor62");
		sorted.push_back("Sensor98");
		sorted.push_back("Sensor40");
		sorted.push_back("Sensor83");
		sorted.push_back("Sensor63");
		sorted.push_back("Sensor89");
		sorted.push_back("Sensor91");
		sorted.push_back("Sensor54");
		sorted.push_back("Sensor97");
		sorted.push_back("Sensor82");
		sorted.push_back("Sensor64");
		sorted.push_back("Sensor92");
		sorted.push_back("Sensor93");
		sorted.push_back("Sensor30");
		sorted.push_back("Sensor31");
		sorted.push_back("Sensor90");
		sorted.push_back("Sensor53");
		sorted.push_back("Sensor74");
		sorted.push_back("Sensor73");
	}

	ASSERT_EQ(sorted.size(), res.size());

	int i = 0;
	for (int i = 0; i < sorted.size(); ++i)
	{
		ASSERT_EQ(sorted[i], res[i].GetId());
		++i;
	}
}
