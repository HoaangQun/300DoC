#include "in_triangle.h"

int main() {
	double xA, yA, xB, yB, xC, yC, xM, yM;

	printf("A(xA, yA)? ");
	scanf("%lf%lf", &xA, &yA);
	
	printf("B(xB, yB)? ");
	scanf("%lf%lf", &xB, &yB);

	printf("C(xC, yC)? ");
	scanf("%lf%lf", &xC, &yC);

	printf("M(xM, yM)? ");
	scanf("%lf%lf", &xM, &yM);

	double Sf = S_triangle(xA, yA, xB, yB, xC, yC);
	double S1 = S_triangle(xM, yM, xA, yA, xB, yB);
	double S2 = S_triangle(xM, yM, xB, yB, xC, yC);
	double S3 = S_triangle(xM, yM, xA, yA, xC, yC);

	check_in(S1, S2, S3, Sf);

	return 0;
}
