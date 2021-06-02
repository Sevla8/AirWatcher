#include "PrivateUserTest.h"

TEST_F(PrivateUserTest, GetId1) {
	EXPECT_EQ("user1", privateUser1.GetId());
}

TEST_F(PrivateUserTest, GetId2) {
	EXPECT_EQ("user2", privateUser2.GetId());
}

TEST_F(PrivateUserTest, GetScore1) {
	EXPECT_EQ(0, privateUser1.GetScore());
}

TEST_F(PrivateUserTest, GetScore2) {
	EXPECT_EQ(1, privateUser2.GetScore());
}

TEST_F(PrivateUserTest, GetMalicious1) {
	EXPECT_EQ(false, privateUser1.GetMalicious());
}

TEST_F(PrivateUserTest, GetMalicious2) {
	EXPECT_EQ(true, privateUser2.GetMalicious());
}

TEST_F(PrivateUserTest, operatorLT) {
	EXPECT_LT(privateUser1, privateUser2);
}