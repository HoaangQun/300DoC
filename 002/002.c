//Nhap toa do 2 diem A, B
//tinh do dai vecto AB

#include <stdio.h>
#include <math.h>

double do_dai_vecto(double xA,double yA,double xB,double yB) {
	return sqrt(pow(xB-xA, 2) + pow(yB-yA, 2));
}

int main() {
	double xA, yA, xB, yB, AB;

	printf("A(xA, yA)? ");
	scanf("%lf%lf", &xA, &yA);
	
	printf("A(xB, yB)? ");
	scanf("%lf%lf", &xB, &yB);

	AB = do_dai_vecto(xA, yA, xB, yB);

	printf("|AB| = %.4lf \n", AB);

	return 0;
}
