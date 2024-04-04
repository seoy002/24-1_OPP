//Matrix addition using 1D array
#include <iostream>
using namespace std;
int main() {
	int N = 2, M = 3;
	float A[] = { 1,2,3,4,5,6 }, * B, * C;
	B = new float[N * M];
	C = new float[M * M];
	B[0] = 1; B[1] = 0; B[2] = 1;
	B[3] = 0; B[4] = 2; B[5] = 3;

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
