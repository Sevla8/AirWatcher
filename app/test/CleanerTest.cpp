#include "CleanerTest.h"

TEST_F(CleanerTest, GetId1) {
	EXPECT_EQ("Cleaner1", cleaner1.GetId());
}

TEST_F(CleanerTest, GetId2) {
	EXPECT_EQ("Cleaner2", cleaner2.GetId());
}

TEST_F(CleanerTest, GetLatitude1) {
	EXPECT_EQ(45.5, cleaner1.GetLatitude());
}

TEST_F(CleanerTest, GetLatitude2) {
	EXPECT_EQ(48.5, cleaner2.GetLatitude());
}

TEST_F(CleanerTest, GetLongitude1) {
	EXPECT_EQ(47.5, cleaner1.GetLongitude());
}

TEST_F(CleanerTest, GetLongitude2) {
	EXPECT_EQ(41.5, cleaner2.GetLongitude());
}

TEST_F(CleanerTest, GetDateStart1) {
	EXPECT_EQ(Date(2003, 1, 1, 1, 1, 1), cleaner1.GetStart());
}

TEST_F(CleanerTest, GetDateStart2) {
	EXPECT_EQ(Date(2008, 1, 1, 1, 1, 1), cleaner2.GetStart());
}

TEST_F(CleanerTest, GetDateStop1) {
	EXPECT_EQ(Date(2005, 1, 1, 1, 1, 1), cleaner1.GetStop());
}

TEST_F(CleanerTest, GetDateStop2) {
	EXPECT_EQ(Date(2009, 1, 1, 1, 1, 1), cleaner2.GetStop());
}

TEST_F(CleanerTest, operatorLT) {
	EXPECT_LT(cleaner1, cleaner2);
}
