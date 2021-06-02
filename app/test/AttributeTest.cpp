#include "AttributeTest.h"

TEST_F(AttributeTest, GetId1) {
	EXPECT_EQ("NO2", attribute1.GetId());
}

TEST_F(AttributeTest, GetId2) {
	EXPECT_EQ("O3", attribute2.GetId());
}

TEST_F(AttributeTest, operatorLT) {
	EXPECT_LT(attribute1, attribute2);
}
