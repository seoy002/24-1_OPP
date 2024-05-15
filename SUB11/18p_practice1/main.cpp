#include <iostream>
#include "store.h"
using namespace std;
int main() {
	store A[5], *B;
	cout << "  " << sizeof(A) << endl;
	for (int i = 0; i < 5; i++) {
		A[i] = store(2, 3, 4, 5 + i, 100, 500, 600, 700 + 100 * i);
	}
	
	cout << A[2].mango.many << "  " << A[2].mango.price << endl;
	cout << (A + 4)->mango.many << "  " << (A + 4)->mango.price << endl;
	B = A + 2;
	cout << A[2].mango.many << "  " << A[2].mango.price << endl;
	cout << (A + 4)->mango.many << "  " << (A + 4)->mango.price << endl;

	return 123;
}

