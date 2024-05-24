#include "Car.h"
#include <iostream> 
using namespace std;
Car::Car(float ss, int ww, float pp) {
	speed = ss;
	wheels = ww;
	price = pp;
	cout << " new Car \n";
}

void Car::setPrice(float x) { price = x; }
void Car::setWheels(int n) { wheels = n; }

float Car::getPrice() { return price; }
int Car::getWheels() { return wheels; }
float Car::getSpeed() { return speed; }
