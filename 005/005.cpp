#include <iostream>
#include "in_triangle.h"
using namespace std;

int main() {
	double xA, yA, xB, yB, xC, yC, xM, yM;
	
	cout << "A(xA, yA)? ";
	cin >> xA >> yA;
	
	cout << "B(xB, yB)? ";
	cin >> xB >> yB;
	
	cout << "C(xC, yC)? ";
	cin >> xC >> yC;
	
	cout << "M(xM, yM)? ";
	cin >> xM >> yM;

	double Sf = S_triangle(xA, yA, xB, yB, xC, yC);
	double S1 = S_triangle(xM, yM, xA, yA, xB, yB);
	double S2 = S_triangle(xM, yM, xB, yB, xC, yC);
	double S3 = S_triangle(xM, yM, xA, yA, xC, yC);

	check_in(S1, S2, S3, Sf);	

	return 0;
}
