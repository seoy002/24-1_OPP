//Matrix addition using 2D array
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int N = 2, M = 3;
    float **A, ** B, ** C;
    A = new float* [M];
    for (int n = 0; n < M; n++) A[n] = new float[N];
    B = new float* [N];
    for (int n = 0; n < N; n++) B[n] = new float[M];
    C = new float* [M];
    for (int n = 0; n < M; n++) C[n] = new float[M];
    srand(time(NULL));

    cout << "A = " << endl;
    for (int n = 0; n < M; n++) {
        for (int m = 0; m < N; m++) {
            A[n][m] = rand() % 10;
            cout << A[n][m] << "  ";
        }
        cout << endl;
    }

    cout << "\n" << "B = " << endl;

    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            B[n][m] = rand() % 10;
            cout << B[n][m] << "  ";
        }
        cout << endl;
    }

    for (int n = 0; n < M; n++) {
        for (int m = 0; m < M; m++) {
            C[n][m] = 0;
            for (int k = 0; k < N; k++) {
                C[n][m] += (A[n][k]) * (B[k][m]);
            }
        }
    }

    cout << "\n" << "C = " << endl;

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

