#include "ControllerTest.h"

// Test of the method Controller::analyseAirQualityInCircularArea() method does

    // cout<<"Choose the longitude. (44 : 47.6)"<<endl;
    // cin>>longitude;
    // cout<<"Choose the latitude. (-1 : 5.3)"<<endl;

TEST_F(ControllerTest, AirQuality1) {
	ASSERT_EQ("Bad", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(44.0f, -1.0f, 10.0f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality2) {
	ASSERT_EQ("Poor", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(47.0f, 5.0f, 1.0f, debut, fin, true)));
}

TEST_F(ControllerTest, AirQuality3) {
	ASSERT_EQ("Very good", controller.CalculateAirQualityValue(controller.analyseAirQualityInCircularArea(46.0f, 2.0f, 0.1f, debut, fin, true)));
}

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
