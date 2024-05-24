#include "Car.h"
#include <iostream>
Car::Car(float ss, int ww, float pp) {
	speed = ss;
	wheels = ww;
	price = pp;
	std::cout << " new Car \n";
}
void Car::setSparewheels(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << n ;
	}
}
