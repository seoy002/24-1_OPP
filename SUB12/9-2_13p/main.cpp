#include <iostream>
#include "Car.h"
#include "Engineer.h"
using namespace std;
int main() {
	Car* myCar;
	myCar = new Car(100.0, 4, 4500.);
	Engineer* ee;
	ee = new Engineer;
	cout << ee->getCarPrice(myCar) << endl;
	cout << ee->getWheels(myCar) << endl;
	cout << ee->getSpeed(myCar) << endl;
}
