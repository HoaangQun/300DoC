#include "S_to_V.h"

double S_to_V(double S) {
	double pi = 3.141593;
	double R = sqrt(S/4/pi);
	return (4.0/3.0)*pi*pow(R, 3);
}
