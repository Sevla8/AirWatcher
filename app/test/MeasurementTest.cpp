#include "MeasurementTest.h"

TEST_F(MeasurementTest, GetValue1) {
	EXPECT_EQ(5.2f, measurement1.GetValue());
}

TEST_F(MeasurementTest, GetValue2) {
	EXPECT_EQ(7.9f, measurement2.GetValue());
}

TEST_F(MeasurementTest, GetDate1) {
	EXPECT_EQ(Date(2000, 1, 1, 0, 0, 0), measurement1.GetDate());
}

TEST_F(MeasurementTest, GetDate2) {
	EXPECT_EQ(Date(2000, 1, 1, 12, 0, 0), measurement2.GetDate());
}

TEST_F(MeasurementTest, operatorLT) {
	EXPECT_LT(measurement1, measurement2);
}
