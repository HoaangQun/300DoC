//S = 4piR^2
//V = 4/3piR^3
//pi = 3.141593

#include <stdio.h>
#include <math.h>

double S_to_V(double S) {
	double pi = 3.141593;
	double R = sqrt(S/4/pi);
	return (4.0/3.0)*pi*pow(R,3);
}

int main() {
	double S, V;
	printf("Nhap dien tich S: ");
	scanf("%lf", &S);
	
	V = S_to_V(S);
	
	printf("The tich V = %.6lf \n", V);

	return 0;
}
