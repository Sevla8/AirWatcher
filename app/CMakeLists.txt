cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_BUILD_TYPE Debug)
project(AirWatcher VERSION 0.1.0)

enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(SOURCE_FILES
	src/model/Attribute.h
	src/model/Attribute.cpp
	src/model/Cleaner.h
	src/model/Cleaner.cpp
	src/model/Date.h
	src/model/Date.cpp
	src/model/GovernmentAgency.h
	src/model/GovernmentAgency.cpp
	src/model/Measurement.h
	src/model/Measurement.cpp
	src/model/Model.h
	src/model/Model.cpp
	src/model/PrivateUser.h
	src/model/PrivateUser.cpp
	src/model/Provider.h
	src/model/Provider.cpp
	src/model/Sensor.h
	src/model/Sensor.cpp
	src/model/User.h
	src/model/User.cpp
	src/factory/Reader.h
	src/factory/Reader.cpp
	src/control/Controller.h
	src/control/Controller.cpp
	src/ui/UserInterface.h
	src/ui/UserInterface.cpp
)

set(TEST_FILES
	test/ReaderTest.cpp
	test/ReaderTest.h
	test/ControllerTest.h
	test/ControllerTest.cpp
)

add_executable(AirWatcher src/main.cpp ${SOURCE_FILES})
add_executable(Test test/main.cpp ${TEST_FILES} ${SOURCE_FILES})

target_link_libraries(Test gtest gtest_main pthread)

add_test(test Test)