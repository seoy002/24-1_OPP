#include "Motor.h"
#include <iostream>
void Motor::setSparewheels(int ii) {
	spareWheels = ii*2;
	std::cout << spareWheels <<"\n";
}
