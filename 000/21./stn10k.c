#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool prime(int z) {
	if (z < 2) {return false; }
	if (z == 2) {return true; }
	if (z % 2 == 0) {return false; }
	for (int i = 3; i <= sqrt(z); i+= 2) {
		if (z % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	for (int i = 1; i < 10000; i++) {
		if (prime(i)) {
			printf("%d\n", i);
		}
	}

	return 0;
}
