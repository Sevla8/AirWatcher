#include "control/Controller.h"
#include "factory/Reader.h"
#include <string>
#include "model/Date.h"
#include "user-interface/UserInterface.h"

using namespace std;

int main(int argc, char const *argv[]) {

	UserInterface ui;
	ui.displayMenu();
	// Controller controller;

	// cout << controller << endl;

	// string airQuality = controller.analyseAirQualityInCircularArea(45.6, 1.8, 10.0, Date(2019, 4, 19, 12, 0, 0), Date(2019, 12, 21, 12, 0, 0));
	// cout << "air quality = " << airQuality << endl;

	// for (const auto& sensor : controller.rankingSensorsSimilarity("Sensor10", Date(2019, 4, 19, 12, 0, 0), Date(2019, 12, 21, 12, 0, 0))) {
	// 	cout << sensor << endl;
	// }

	return 0;
	// string airQuality = controller.analyseAirQualityInCircularArea(45.6, 1.8, 10.0, Date(2019, 4, 19, 12, 0, 0), Date(2019, 12, 21, 12, 0, 0));

	// cout << "air quality = " << airQuality << endl;

	// return 0;
}
