#ifndef ATTRIBUTETEST_H
#define ATTRIBUTETEST_H

#include "gtest/gtest.h"
#include "../src/model/Attribute.h"
#include "../src/factory/Reader.h"

class AttributeTest : public ::testing::Test {
	protected:
		virtual void SetUp() {
			AttributeData attributeData1 = *Reader::readAttributes("../../dataset/tests/attributes.csv").begin();
			attribute1 = Attribute(attributeData1);

			AttributeData attributeData2 = *++Reader::readAttributes("../../dataset/tests/attributes.csv").begin();
			attribute2 = Attribute(attributeData2);
		}

		Attribute attribute1;
		Attribute attribute2;
};

#endif