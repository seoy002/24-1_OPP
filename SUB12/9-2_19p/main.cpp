#include <iostream>
#include "Car.h"
#include "SUV.h"
#include "Motor.h"
#include "Engineer.h"
using namespace std;
int main() {
	Car* myCars[5];
	myCars[0] = new SUV;
	myCars[1] = new SUV;
	myCars[2] = new Motor;
	myCars[3] = new Motor;
	myCars[4] = new SUV;
	for (int i = 0; i < 5; i++) myCars[i]->klaxon(1);
	for (int i = 0; i < 5; i++) myCars[i]->setSparewheels(1);
}
