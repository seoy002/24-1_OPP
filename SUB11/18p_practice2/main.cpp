#include <iostream>
#include "store.h"
using namespace std;
int main() {
	store A[5], *B;
	cout << "  " << sizeof(A) << endl;
	for (int i = 0; i < 5; i++) {
		A[i] = store(2, 3, 4, 5 + i, 100, 500, 600, 700 + 100 * i);
	}
	
	cout << A[2].total_num() << endl;
	cout << (A + 4)->total_num() << endl;
	B = A + 2;
	cout << B[0].total_num() << endl;
  cout << (B + 2)->total_num() << endl;

	return 123;
}

