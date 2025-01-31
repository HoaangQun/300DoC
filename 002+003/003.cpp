//nhap tam duong tron
//nhap ban kinh
//nhap toa do M
//kiem tra |MC| voi R

#include <iostream>
#include <cmath>
#include "vector.h"

using namespace std;

int main() {
	double xC, yC, R, xM, yM, l;

	cout << "Nhap vao toa do tam C(xC, yC)? ";
	cin >> xC >> yC;

	cout << "Nhap ban kinh R? ";
	cin >> R;

	cout << "Nhap vao toa do M(xM, yM)? ";
	cin >> xM >> yM;

	l = do_dai_vecto(xC, yC, xM, yM);

	if (l < R) {
		cout << "M nam trong C()\n";	
	} else if (l == R) {
		cout << "M nam tren C()\n";
	} else {
		cout << "M nam ngoai C()\n";
	}
	return 0;
}
