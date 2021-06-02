#ifndef CLEANER_TEST__H
#define CLEANER_TEST__H

#include "gtest/gtest.h"
#include "../src/model/Cleaner.h"

class CleanerTest : public ::testing::Test {
	protected:
		virtual void SetUp() {
			cleaner1 = Cleaner("Cleaner1", 45.5, 47.5, Date(2003, 1, 1, 1, 1, 1), Date(2005, 1, 1, 1, 1, 1), Provider("provider1"));
			cleaner2 = Cleaner("Cleaner2", 48.5, 41.5, Date(2008, 1, 1, 1, 1, 1), Date(2009, 1, 1, 1, 1, 1), Provider("provider2"));
		}

		Cleaner cleaner1;
		Cleaner cleaner2;
};

#endif