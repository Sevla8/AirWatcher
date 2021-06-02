#ifndef PROVIDER_TEST_H
#define PROVIDER_TEST_H

#include "gtest/gtest.h"
#include "../src/model/Provider.h"

class ProviderTest : public ::testing::Test {
	protected:
		virtual void SetUp() {
			provider1 = Provider("Provider1");
			provider2 = Provider("Provider2");
		}

		Provider provider1;
		Provider provider2;
};

#endif