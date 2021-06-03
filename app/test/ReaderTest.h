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
			cleanerDataEmpty = Reader::readCleaners("../../dataset/tests/fichierVide.csv");
			sensorDataEmpty = Reader::readSensors("../../dataset/tests/fichierVide.csv");
			measurementDataEmpty = Reader::readMeasurements("../../dataset/tests/fichierVide.csv");
			userDataEmpty = Reader::readUsers("../../dataset/tests/fichierVide.csv");
			providerDataEmpty = Reader::readProviders("../../dataset/tests/fichierVide.csv");
			attributeDataEmpty = Reader::readAttributes("../../dataset/tests/fichierVide.csv");

			cleanerData = Reader::readCleaners("../../dataset/tests/cleaners.csv");
			sensorData = Reader::readSensors("../../dataset/tests/sensors.csv");
			measurementData = Reader::readMeasurements("../../dataset/tests/measurements.csv");
			userData = Reader::readUsers("../../dataset/tests/users.csv");
			providerData = Reader::readProviders("../../dataset/tests/providers.csv");
			attributeData = Reader::readAttributes("../../dataset/tests/attributes.csv");
		}

		set<CleanerData> cleanerDataEmpty;
		set<CleanerData> cleanerData;
		set<AttributeData> attributeDataEmpty;
		set<AttributeData> attributeData;
		set<SensorData> sensorDataEmpty;
		set<SensorData> sensorData;
		multiset<MeasurementData> measurementDataEmpty;
		multiset<MeasurementData> measurementData;
		set<UserData> userDataEmpty;
		set<UserData> userData;
		set<ProviderData> providerDataEmpty;
		set<ProviderData> providerData;
};

#endif