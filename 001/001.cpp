//S = 4piR^2
//V = 4/3piR^3
//pi = 3.141593

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double S_to_V(double S) {
	double pi = 3.141593;
	double R = sqrt(S/4/pi);
	return (4.0/3.0)*pi*pow(R, 3);
}

int main() {
	double S, V;

	cout << "Nhap dien tich S: ";
	cin >> S;

	V = S_to_V(S);

	cout << "The tich V = " << fixed << setprecision(6) << V << endl;

	return 0;
}
