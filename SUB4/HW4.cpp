#include <fstream>
#include<iostream>
using namespace std;
int main() {
	ofstream xx("HW4.txt");
	if (!xx) {
		cout << " can't open file\n";
		return -1;
	}
	float t, dt, T, pi = 3.141592;
	t = 0.0;
	dt = 1./10./10.;
	T = 10./10.;
	for (t = 0.0; t < T; t += dt) {
		xx << t << " " << 100 * cos(20 * pi * t) * cos(220 * pi * t);
		xx << " " << 60 * sin(240 * pi * t) + 80 * sin(220 * pi * t) << endl;
	}
	xx.close();
	return 1;
}
