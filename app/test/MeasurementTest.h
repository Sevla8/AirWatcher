#ifndef MEASUREMENT_TEST__H
#define MEASUREMENT_TEST__H

#include "gtest/gtest.h"
#include "../src/model/Measurement.h"
#include "../src/model/Date.h"
#include "../src/model/Attribute.h"

class MeasurementTest : public ::testing::Test {
	protected:
		virtual void SetUp() {
			measurement1 = Measurement(5.2, Date(2000, 1, 1, 0, 0, 0), Attribute("NO2", "unit1", "description1"));
			measurement2 = Measurement(7.9, Date(2000, 1, 1, 12, 0, 0), Attribute("O3", "unit2", "description2"));
		}

		Measurement measurement1;
		Measurement measurement2;
};

#endif
