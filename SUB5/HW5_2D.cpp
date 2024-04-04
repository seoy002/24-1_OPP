//Matrix addition using 2D array
#include <iostream>
using namespace std;

int main() {
    int N = 2, M = 3;
    float A[3][2] = { {1,2},{3,4},{5,6} }, ** B, ** C;
    B = new float* [N];
    for (int n = 0; n < N; n++) B[n] = new float[M];
    C = new float* [M];
    for (int n = 0; n < M; n++) C[n] = new float[M];
    B[0][0] = 1; B[0][1] = 0; B[0][2] = 1;
    B[1][0] = 0; B[1][1] = 2; B[1][2] = 3;

    for (int n = 0; n < M; n++) {
        for (int m = 0; m < M; m++) {
            C[n][m] = 0;
            for (int k = 0; k < N; k++) {
                C[n][m] += (A[n][k]) * (B[k][m]);
            }
        }
    }

    for (int n = 0; n < M; n++) {
        for (int m = 0; m < M; m++) {
            cout << C[n][m] << "  ";
        }
        cout << endl;
    }
    for (int n = 0; n < N; n++) { delete[] B[n]; delete C[n]; }
    delete[] B;
    delete[] C;
}

