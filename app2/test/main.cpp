#include "gtest/gtest.h"
#include "ReaderTest.cpp"
#include "SensorTest.cpp"

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
