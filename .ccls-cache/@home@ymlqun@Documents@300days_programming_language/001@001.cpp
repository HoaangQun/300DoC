//S = 4piR^2
//V = 4/3piR^3
//pi = 3.141593

#include <iostream>
#include <iomanip>
#include "S_to_V.h"

using namespace std;

int main() {
	double S, V;

	cout << "Nhap dien tich S: ";
	cin >> S;

	V = S_to_V(S);

	cout << "The tich V = " << fixed << setprecision(6) << V << endl;

	return 0;
}
