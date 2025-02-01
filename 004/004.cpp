#include <iostream>
#include <iomanip>
#include "triangle.h"
using namespace std;

int main() {
	double a, b, c;

	cout << "Nhap 3 canh cua tam giac: ";
	cin >> a >> b >> c;

	if (check(a, b, c)) {
		
		cout << type(a, b, c) << endl;

		cout << "Dien tich S = " << fixed << setprecision(1) << Heron(a, b, c) << endl;

	} else {
		cout << "Khong phai tam giac\n";
	}

	return 0;
}
