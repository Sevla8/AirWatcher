#ifndef PRIVATE_USER_TEST_H
#define PRIVATE_USER_TEST_H

#include "gtest/gtest.h"
#include "../src/model/PrivateUser.h"

class PrivateUserTest : public ::testing::Test {
	protected:
		virtual void SetUp() {
			privateUser1 = PrivateUser("user1", 0, false);
			privateUser2 = PrivateUser("user2", 1, true);
		}

		PrivateUser privateUser1;
		PrivateUser privateUser2;
};

#endif