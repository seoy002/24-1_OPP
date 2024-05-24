#pragma once
class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2) {};
	Car(float, int, float);
	int wheels;
	void setPrice(float);
	float getPrice();
	void setWheels(int);
	int getWheels();
	float getSpeed();

	friend class Engineer;
// protected://상속 O
	float price;

// private : //상속 X
	float speed;
};
