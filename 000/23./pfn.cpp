#include <cmath>
#include <iostream>
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
	int n;
	cout << "Nhap vao mot so tu nhien: ";
	cin >> n;

	if (perfect_number(n)) {
		cout << "So vua nhap la so hoan hao!\n";
	} else {
		cout << "So vua nhap khong phai so hoan hao.\n";
	}

	return 0;
}
