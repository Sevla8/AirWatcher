#include "ReaderTest.h"

/*
TEST 1
	On testera le comportement de la fonction readCleaners quand le fichier à lire est Empty
*/

TEST_F(ReaderTest, CleanersEmpty) {
	EXPECT_EQ(0, cleanerDataEmpty.size());
}

TEST_F(ReaderTest, SensorsEmpty) {
	EXPECT_EQ(0, sensorDataEmpty.size());
}

TEST_F(ReaderTest, AttributesEmpty) {
	EXPECT_EQ(0, attributeDataEmpty.size());
}

TEST_F(ReaderTest, MeasurementsEmpty) {
	EXPECT_EQ(0, measurementDataEmpty.size());
}

TEST_F(ReaderTest, providersEmpty) {
	EXPECT_EQ(0, providerDataEmpty.size());
}

TEST_F(ReaderTest, UsersEmpty) {
	EXPECT_EQ(0, userDataEmpty.size());
}

/*
TEST 1
	On testera le comportement de la fonction readCleaners quand le fichier à lire n'est pas Empty
*/

TEST_F(ReaderTest, CleanersNonEmpty) {
	EXPECT_EQ(2, cleanerData.size());
}

TEST_F(ReaderTest, SensorsNonEmpty) {
	EXPECT_EQ(100, sensorData.size());
}

TEST_F(ReaderTest, AttributesNonEmpty) {
	EXPECT_EQ(4, attributeData.size());
}

TEST_F(ReaderTest, MeasurementsNonEmpty) {
	EXPECT_EQ(17, measurementData.size());
}

TEST_F(ReaderTest, providersNonEmpty) {
	EXPECT_EQ(2, providerData.size());
}

TEST_F(ReaderTest, UsersNonEmpty) {
	EXPECT_EQ(2, userData.size());
}
