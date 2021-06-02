#include "gtest/gtest.h"
#include "../src/factory/Reader.h"
#include "../src/model/Sensor.h"
#include "../src/model/Cleaner.h"
#include "../src/model/Attribute.h"
#include "../src/model/Provider.h"
#include "../src/model/User.h"

class ReaderTest: public ::testing::Test{

	virtual void SetUp() {
		cleanerDataVide = Reader::readCleaners("../../dataset/tests/fichierVide.csv");
		sensorsDataVide = Reader::readSensors("../../dataset/tests/fichierVide.csv");
		measurementsDataVide = Reader::readMeasurements("../../dataset/tests/fichierVide.csv");
		usersDataVide = Reader::readUsers("../../dataset/tests/fichierVide.csv");
		providersDataVide = Reader::readProviders("../../dataset/tests/fichierVide.csv");
		attributesDataVide = Reader::readAttributes("../../dataset/tests/fichierVide.csv");

		cleanerData = Reader::readCleaners("../../dataset/tests/cleaners.csv");
		sensorsData = Reader::readSensors("../../dataset/tests/sensors.csv");

		usersData = Reader::readUsers("../../dataset/tests/users.csv");
		providersData = Reader::readProviders("../../dataset/tests/providers.csv");
		attributesData = Reader::readAttributes("../../dataset/tests/attributes.csv");
	}


	set<CleanerData> cleanerDataVide;
	set<CleanerData> cleanerData;
	set<AttributeData> attributeDataVide;
	set<AttributeData> attributeData;
	set<SensorData> sensorDataVide;
	set<SensorData> sensorData;
	set<MeasurementData> measurementDataVide;
	set<MeasurementData> measurementData;
	set<UserData> userDataVide;
	set<UserData> userData;
	set<ProviderData> providerDataVide;
	set<ProviderData> providerData;

}
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


