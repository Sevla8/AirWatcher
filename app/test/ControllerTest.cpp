#include "ControllerTest.h"

// Test of the method Controller::analyseAirQualityInCircularArea() method does

    // cout<<"Choose the longitude. (44 : 47.6)"<<endl;
    // cin>>longitude;
    // cout<<"Choose the latitude. (-1 : 5.3)"<<endl;

TEST_F(ControllerTest, AirQuality0FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Very good", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, -1.0f, .1f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality1FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Moderate", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, -0.3f, 0.1f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality2FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Moderate", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 0.4f, 0.1f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality3FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Moderate", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 1.1f, 0.1f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality4FisrtJanuary) {
	Date debut = Date(2019, 1, 1, 12, 0, 0);
	Date fin = Date(2019, 1, 1, 12, 0, 0);
	ASSERT_EQ("Moderate", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 1.8f, 0.1f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality1FourthJanuary) {
	Date debut = Date(2019, 1, 4, 12, 0, 0);
	Date fin = Date(2019, 1, 4, 12, 0, 0);
	ASSERT_EQ("Extremely bad", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, -0.3f, 0.1f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality2FourthJanuary) {
	Date debut = Date(2019, 1, 4, 12, 0, 0);
	Date fin = Date(2019, 1, 4, 12, 0, 0);
	ASSERT_EQ("Extremely bad", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 0.4f, 0.1f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality3FourthJanuary) {
	Date debut = Date(2019, 1, 4, 12, 0, 0);
	Date fin = Date(2019, 1, 4, 12, 0, 0);
	ASSERT_EQ("Extremely bad", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 1.1f, 0.1f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality4FourthJanuary) {
	Date debut = Date(2019, 1, 4, 12, 0, 0);
	Date fin = Date(2019, 1, 4, 12, 0, 0);
	ASSERT_EQ("Extremely bad", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, 1.8f, 0.1f, debut, fin, true)));
}

// TEST_F(ControllerTest, AirQuality3) {
// 	ASSERT_EQ("Very good", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(46.0f, 2.0f, 0.1f, debut, fin, true)));
// }

// TEST_F(ControllerTest, RankingSensorSimilarities)
// {
// 	vector<Sensor> res=controller.rankingSensorsSimilarity(sensor, debut, fin);
// 	if (sensorsRanked.size()==res.size())
// 	{
// 		for (int i=0; i<sensorsRanked.size(); i++)
// 		{
// 			ASSERT_EQ(sensorsRanked[i].getId(), sensorsDataSet[i].getId());
// 		}
// 	} else {
// 		ASSERT_STREQ("a", "e");
// 	}
// }
