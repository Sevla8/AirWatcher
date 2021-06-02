#ifndef READER_TEST_H
#define READER_TEST_H

#include "gtest/gtest.h"
#include "../src/factory/Reader.h"
#include "../src/model/Sensor.h"
#include "../src/model/Cleaner.h"
#include "../src/model/Attribute.h"
#include "../src/model/Provider.h"
#include "../src/model/User.h"
#include "../src/model/Measurement.h"

class ReaderTest : public ::testing::Test {
	protected:
		virtual void SetUp() {
			cleanerDataVide = Reader::readCleaners("../../dataset/tests/fichierVide.csv");
			sensorDataVide = Reader::readSensors("../../dataset/tests/fichierVide.csv");
			measurementDataVide = Reader::readMeasurements("../../dataset/tests/fichierVide.csv");
			userDataVide = Reader::readUsers("../../dataset/tests/fichierVide.csv");
			providerDataVide = Reader::readProviders("../../dataset/tests/fichierVide.csv");
			attributeDataVide = Reader::readAttributes("../../dataset/tests/fichierVide.csv");

			cleanerData = Reader::readCleaners("../../dataset/tests/cleaners.csv");
			sensorData = Reader::readSensors("../../dataset/tests/sensors.csv");
			measurementData = Reader::readMeasurements("../../dataset/tests/measurements.csv");
			userData = Reader::readUsers("../../dataset/tests/users.csv");
			providerData = Reader::readProviders("../../dataset/tests/providers.csv");
			attributeData = Reader::readAttributes("../../dataset/tests/attributes.csv");
		}

		set<CleanerData> cleanerDataVide;
		set<CleanerData> cleanerData;
		set<AttributeData> attributeDataVide;
		set<AttributeData> attributeData;
		set<SensorData> sensorDataVide;
		set<SensorData> sensorData;
		multiset<MeasurementData> measurementDataVide;
		multiset<MeasurementData> measurementData;
		set<UserData> userDataVide;
		set<UserData> userData;
		set<ProviderData> providerDataVide;
		set<ProviderData> providerData;
};

#endif