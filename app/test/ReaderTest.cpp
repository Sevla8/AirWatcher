#include "ReaderTest.h"

/*
TEST 1
	On testera le comportement de la fonction readCleaners quand le fichier à lire est vide
*/

TEST_F(ReaderTest, CleanersVide) {
	EXPECT_EQ(0, cleanerDataVide.size());
}

TEST_F(ReaderTest, SensorsVide) {
	EXPECT_EQ(0, sensorDataVide.size());
}

TEST_F(ReaderTest, AttributesVide) {
	EXPECT_EQ(0, attributeDataVide.size());
}

TEST_F(ReaderTest, MeasurementsVide) {
	EXPECT_EQ(0, measurementDataVide.size());
}

TEST_F(ReaderTest, ProvidersVide) {
	EXPECT_EQ(0, providerDataVide.size());
}

TEST_F(ReaderTest, UsersVide) {
	EXPECT_EQ(0, userDataVide.size());
}

/*
TEST 1
	On testera le comportement de la fonction readCleaners quand le fichier à lire n'est pas vide
*/

TEST_F(ReaderTest, CleanersNonVide) {
	EXPECT_EQ(2, cleanerData.size());
}

TEST_F(ReaderTest, SensorsNonVide) {
	EXPECT_EQ(100, sensorData.size());
}

TEST_F(ReaderTest, AttributesNonVide) {
	EXPECT_EQ(4, attributeData.size());
}

TEST_F(ReaderTest, MeasurementsNonVide) {
	EXPECT_EQ(17, measurementData.size());
}

TEST_F(ReaderTest, ProvidersNonVide) {
	EXPECT_EQ(2, providerData.size());
}

TEST_F(ReaderTest, UsersNonVide) {
	EXPECT_EQ(2, userData.size());
}
