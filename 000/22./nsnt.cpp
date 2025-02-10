#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int z) {
	if (z < 2) return false;
	if (z == 2) return true;
	if (z % 2 == 0) return false;
	for (int i = 3; i <= sqrt(z); i += 2) {
		if (z % i == 0) {return false;}
	}

	return true;
}

int main() {
	int n;

	cout << "Nhap vao so tu nhien n: ";
	cin >> n;

	while(!is_prime(n)) {
		n ++;
	}

	cout << n << endl;
	
	return 0;
}
