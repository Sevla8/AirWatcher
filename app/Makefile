CPPFLAGS= -ansi -pedantic -Wall -std=c++11 -g
CPP=g++

airwatcher : ./model/Attribute.o ./model/Cleaner.o ./model/Date.o ./model/GovernmentAgency.o ./model/Measurement.o ./model/PrivateUser.o ./model/Provider.o ./model/Sensor.o ./model/User.o ./control/Controller.o ./control/Reader.o
	@echo "linking of airwatcher"
	$(CPP) -o $@ $^

%.o: %.cpp
	@echo "compiling $<"
	$(CPP) -c $< $(CPPFLAGS)

clean :
	clear
	@echo "removing existing compilled files"
	rm *.o


testMemoire :
	make clean
	make
	valgrind ./airwatcher

debug :
	make clean
	make
	gdb ./airwatcher