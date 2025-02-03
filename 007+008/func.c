#include "func.h"

void ham_so_bac_nhat(double a, double b) {
	double x = -(b/a);
	printf("x = %.2lf\n", x);
}

void ham_so_bac_hai(double a, double b, double c) {
	double Delta = pow(b, 2) - 4*a*c;
	
	double x1 = (-b - sqrt(Delta))/2*a;
	printf("x1 = %.5lf\n", x1);

	double x2 = (-b + sqrt(Delta))/2*a;	
	printf("x2 = %.5lf\n", x2);
}
