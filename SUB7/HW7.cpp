#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

void f1(int n, float* A) {
	for (int i = 0; i < n; i++) {
		A[i] = 5 * ((rand() % 4001) + 1000);
		cout << A[i] << endl;
	}
}

void f2(int n, float* A) {
	float B = -0.5;
	for (int i = n + 1; i < n + 4; i++) {
		A[i] = B * B;
		B += 0.5;
		cout << A[i] << endl;
	}
}

int All(int n) {
	float* A = new float[11];
	A[0] = 1234;
	cout << A[0] << endl;
	srand(time(NULL));
	f1(n, A + 1); f2(n, A);
	ofstream xx("mybin.dat", ios::binary | ios::out);
	if (!xx) return -1;
    xx.write((char*)A, sizeof(float) * 9);
	xx.close();
	return 1;
}

int main() {
	float* A = new float[11];
	All(5);
	ifstream xx("mybin.dat", ios::binary | ios::in);
	if (!xx) return -2;

	cout << "\n" << "mybin.dat" << endl;
	xx.read((char*)A, sizeof(float) * 9);
	for (int i = 0; i < 9; i++) cout << A[i] << endl;

	xx.seekg(0, xx.end);
	int fileSize = xx.tellg();
	cout << "\n" << "file size : " << fileSize << endl;
	xx.close();


	delete[] A;
	return 0;
}
