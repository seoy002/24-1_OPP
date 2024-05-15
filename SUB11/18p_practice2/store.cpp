#include "store.h"
float store::total() {
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	x += mango.show();
	return x;
}
int store::total_num() {
	int x = apple.many;
	x += pear.many;
	x += peach.many;
	x += mango.many;
	return x;
}
