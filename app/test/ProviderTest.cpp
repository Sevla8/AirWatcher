#include "ProviderTest.h"

TEST_F(ProviderTest, GetId1) {
	EXPECT_EQ("Provider1", provider1.GetId());
}

TEST_F(ProviderTest, GetId2) {
	EXPECT_EQ("Provider2", provider2.GetId());
}

TEST_F(ProviderTest, operatorLT) {
	EXPECT_LT(provider1, provider2);
}
