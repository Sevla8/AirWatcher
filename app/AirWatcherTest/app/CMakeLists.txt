cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_BUILD_TYPE Debug)
project(AirWatcher VERSION 0.1.0)

# include(CTest)
# enable_testing()

set(SOURCE_FILES
	src/main.cpp
	src/model/Attribute.cpp
	src/model/Cleaner.cpp
	src/model/Date.cpp
	src/model/GovernmentAgency.cpp
	src/model/Measurement.cpp
	src/model/Model.cpp
	src/model/PrivateUser.cpp
	src/model/Provider.cpp
	src/model/Sensor.cpp
	src/model/User.cpp
	src/factory/Reader.cpp
	src/control/Controller.cpp
)

set(HEADERS
	src/model/Attribute.h
	src/model/Cleaner.h
	src/model/Date.h
	src/model/GovernmentAgency.h
	src/model/Measurement.h
	src/model/Model.h
	src/model/PrivateUser.h
	src/model/Provider.h
	src/model/Sensor.h
	src/model/User.h
	src/factory/Reader.h
	src/control/Controller.h
)

add_executable(AirWatcher ${SOURCE_FILES} ${HEADERS})