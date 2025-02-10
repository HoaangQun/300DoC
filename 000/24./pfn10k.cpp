#include <iostream>
#include <cmath>
using namespace std;

bool perfect_number(int z) {
	if (z < 2) return false;
	int cp = 1;
	
	for (int i = 2; i <= sqrt(z); i++) {
		if (z % i == 0) {
			cp += i;
			if (i != z / i) {
				cp += z / i;
			}
		}
	}

	return cp == z;

}

int main() {
	for (int i = 2; i < 10000; i++) {
		if (perfect_number(i)) {
			cout << i << endl;
		}
	}

	return 0;
}
