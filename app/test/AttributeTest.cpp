#include "AttributeTest.h"

TEST_F(AttributeTest, GetId1) {
	EXPECT_EQ("NO2", attribute1.GetId());
}

TEST_F(AttributeTest, GetId2) {
	EXPECT_EQ("O3", attribute2.GetId());
}

TEST_F(AttributeTest, GetUnit1) {
	EXPECT_EQ("unit1", attribute1.GetUnit());
}

TEST_F(AttributeTest, GetUnit2) {
	EXPECT_EQ("unit2", attribute2.GetUnit());
}

TEST_F(AttributeTest, GetDescription1) {
	EXPECT_EQ("description1", attribute1.GetDescription());
}

TEST_F(AttributeTest, GetDescription2) {
	EXPECT_EQ("description2", attribute2.GetDescription());
}

TEST_F(AttributeTest, operatorLT) {
	EXPECT_LT(attribute1, attribute2);
}
