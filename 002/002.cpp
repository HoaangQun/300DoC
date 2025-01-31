//Nhap toa do 2 diem A, B
//tinh do dai vecto AB

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double do_dai_vecto(double xA,double yA,double xB,double yB) {
	return sqrt(pow(xB-xA, 2) + pow(yB-yA, 2));
}

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
