#include <iostream>
using namespace std;
//f(x) = acos(b + ct), f'(t) = -acsin(b+ct), F(x) = (a/c)sin(b+ct)
void main() {
	float a, b, c, dt, t, num, anal;
	//diffrentiation
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "t = "; cin >> t;
	cout << "dt = "; cin >> dt;

	anal = -a * c * sin(b + c * t);
	num = a * (cos(b + c * (t + dt)) - cos(b + c * t)) / dt;
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << (num - anal) / anal * 100 << "%\n";

	//integration
	float A, B;
	int N;
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
	cout << "N = "; cin >> N;
	dt = (B - A) / N;
	num = 0;
	for (int i = 0; i < N; i++) {
		num += a * cos(b + c * (A + i * dt)) * dt;
	}

	anal = (a / c) * sin(b + c * B) - sin(b + c * A));
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << (num - anal) / anal * 100 << "%\n";
}
