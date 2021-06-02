#include "ControllerTest.h"

// Test of the method Controller::analyseAirQualityInCircularArea() method does
TEST_F(ControllerTest, AirQuality) {
	ASSERT_EQ("Bon", controller.analyseAirQualityInCircularArea(44, -1, 10, debut, fin));
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
