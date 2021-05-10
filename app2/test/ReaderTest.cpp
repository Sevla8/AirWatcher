#include "gtest/gtest.h"
#include "../src/factory/Reader.h"

// TEST(Reader, readCleaners) {
// 	set<CleanerData> cleanerData = Reader::readCleaners("../../dataset/cleaners.csv");
// 	set<CleanerData> x;
// 	CleanerData cd1;
// 	cd1.id = "Cleaner0";
// 	cd1.latitude = 45.333333;
// 	cd1.longitude = 1.333333;
// 	cd1.start = Date(2019, 2, 1, 12, 0, 0);
// 	cd1.stop = Date(2019, 3, 1, 0, 0, 0);
// 	x.insert(cd1);
// 	CleanerData cd2;
// 	cd2.id = "Cleaner1";
// 	cd2.latitude = 46.666667;
// 	cd2.longitude = 3.666667;
// 	cd2.start = Date(2019, 2, 1, 12, 0, 0);
// 	cd2.stop = Date(2019, 3, 1, 0, 0, 0);
// 	x.insert(cd2);

// 	auto it1 = cleanerData.begin();
// 	auto it2 = x.begin();
// 	while (it1 != cleanerData.end() && it2 != x.end()) {
// 		ASSERT_EQ(*it1, *it2);
// 		++it1;
// 		++it2;
// 	}
// }
