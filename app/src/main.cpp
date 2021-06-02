#include "control/Controller.h"
#include "factory/Reader.h"
#include <string>
#include "model/Date.h"
#include "ui/UserInterface.h"

using namespace std;

int main(int argc, char const *argv[]) {

	UserInterface ui;
	ui.displayMenu();
	return 0;
}
