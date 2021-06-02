#ifndef DATE_TEST__H
#define DATE_TEST__H

#include "gtest/gtest.h"
#include "../src/model/Date.h"

class DateTest : public ::testing::Test {
	protected:
		virtual void SetUp() {
			date2 = Date(2000, 1, 1, 0, 0, 0);
			date3 = Date(2000, 1, 1, 12, 0, 0);
		}

		Date date1;
		Date date2;
		Date date3;
};

#endif
