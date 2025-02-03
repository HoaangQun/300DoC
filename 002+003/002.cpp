//Nhap toa do 2 diem A, B
//tinh do dai vecto AB

#include <iostream>
#include <iomanip>
#include "vector.h"
using namespace std;

int main() {
	double xA, yA, xB, yB, AB;

	cout << "A(xA, yA)? ";
	cin >> xA >> yA;

	cout << "B(xB, yB)? ";
	cin >> xB >> yB;

	AB = do_dai_vecto(xA, yA, xB, yB);

	cout << "|AB| = " << fixed << setprecision(4) << AB << endl;

	return 0;
}
