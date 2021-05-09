#include "control/Controller.h"
#include <list>

using namespace std;

int main(int argc, char const *argv[]) {
	Controller controller;

	Model model = controller.getModel();

	list<Attribute>* attributes = model.getAttributes();

	list<Attribute>::const_iterator it = attributes->begin();

	// for (list<Attribute>::iterator it = controller.getModel().getAttributes()->begin(); it != controller.getModel().getAttributes()->end(); ++it) {
	// 	cout << *it;
	// }

	// cout << controller.getModel().getCleaners()->begin()->getLatitude();

	return 0;
}
