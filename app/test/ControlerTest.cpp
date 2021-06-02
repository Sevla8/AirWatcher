#include "gtest/gtest.h"
#include "../src/control/Controller.h"
#include "../src/model/Sensor.h"
#include "../src/factory/Reader.h"

#include <vector>

 class ControllerTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
	  sensorsDataSet=Reader::readSensors("../../dataset/tests/sensors.csv");
	  //sensorsRanked=Reader::readSensors("../../dataset/tests/sensorsRanked.csv"); sensorsRanked.csv A FAIRE

  }

  // virtual void TearDown() {}

	vector<Sensor> sensorsDataSet;
	vector<Sensor> sensorsRanked;
	Date debut (2019, 1, 4, 12, 0, 0);
	Date fin (2019, 1, 8, 12, 0, 0);
	Sensor sensor = sensorsDataSet[0];

};

//Test of the method Controller::analyseAirQualityInCircularArea() method does
TEST_F(ControllerTest, AirQuality)
{
	ASSERT_STREQ("Bon", analyseAirQualityInCircularArea(44, -1, 10, debut));
}

TEST_F(ControllerTest, RankingSensorSimilarities)
{
	vector<Sensor> res=rankingSensorsSimilarity(sensor, debut, fin);
	if (sensorsRanked.size()==res.size())
	{
		for (int i=0; i<sensorsRanked.size(); i++)
		{
			ASSERT_STREQ(sensorsRanked[i].getId(), sensorsDataSet[i].getId());
		}
	} else {
		ASSERT_STREQ("a", "e");
	}
}


int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}