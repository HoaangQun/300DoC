//S = 4piR^2
//V = 4/3piR^3
//pi = 3.141593

#include <stdio.h>
#include <math.h>
#include "S_to_V.h"

int main() {
	double S, V;
	printf("Nhap dien tich S: ");
	scanf("%lf", &S);
	
	V = S_to_V(S);
	
	printf("The tich V = %.6lf \n", V);

	return 0;
}
