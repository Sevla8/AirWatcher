#include "control/Controller.h"
#include "factory/Reader.h"
#include <string>
#include "model/Date.h"

using namespace std;

int main(int argc, char const *argv[]) {

	Controller controller;

	cout << controller << endl;

	string airQuality = controller.analyseAirQualityInCircularArea(45.6, 1.8, 10.0, Date(2019, 4, 19, 12, 0, 0), Date(2019, 12, 21, 12, 0, 0));

	cout << "air quality = " << airQuality << endl;

	return 0;
}
