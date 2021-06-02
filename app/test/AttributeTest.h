#ifndef ATTRIBUTETEST_H
#define ATTRIBUTETEST_H

#include "gtest/gtest.h"
#include "../src/model/Attribute.h"
#include "../src/factory/Reader.h"

class AttributeTest : public ::testing::Test {
	protected:
		virtual void SetUp() {
			attribute1 = Attribute("NO2", "unit1", "description1");
			attribute2 = Attribute("O3", "unit2", "description2");
		}

		Attribute attribute1;
		Attribute attribute2;
};

#endif