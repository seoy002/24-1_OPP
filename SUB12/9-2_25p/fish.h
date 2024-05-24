#pragma once
#include "ani.h"
using namespace std;
class fish : public animal {
public:
	fish() : nfins(8) { cout << nfins << " Fish \n"; };
	int nfins;
	void swim() { cout << " I swim \n"; }
};
