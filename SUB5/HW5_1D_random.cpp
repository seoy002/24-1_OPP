//Matrix addition using 1D array
#include <iostream>
#include <ctime>
using namespace std;
int main() {
	int N = 2, M = 3;
	float *A, * B, * C;
	A = new float[M * N];
	B = new float[N * M];
	C = new float[M * M];
	srand(time(NULL));
	
	cout << "A = " << endl;
	for (int n = 0; n < M; n++) {
		for (int m = 0; m < N; m++) {
			A[n * N + m] = rand() % 10;
			cout << A[n * N + m] << "  ";
		}
		cout << endl;
	}


	cout << "\n" << "B = " << endl;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			B[n * M + m] = rand() % 10;
			cout << B[n * M + m] << "  ";
		}
		cout << endl;
	}

	cout << "\n" << "C = " << endl;
	for (int n = 0; n < M; n++) {
		for (int m = 0; m < M; m++) {
			C[n * M + m] = 0;
			for (int k = 0; k < N; k++) {
				C[n * M + m] += A[n * N + k] * B[M * k + m];
			}
		}
	}

	for (int n = 0; n < M; n++) {
		for (int m = 0; m < M; m++) {
			cout << C[n * M + m] << "  ";
		}
		cout << endl;
	}
	delete[] B;
	delete[] C;
}
