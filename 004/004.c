#include <stdio.h>
#include "triangle.h"

int main() {
	double a, b, c;

	printf("Nhap 3 canh cua tam giac: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	
	if (check(a, b, c)) {

		printf("%s\n", type(a, b, c));

		printf("Dien tich S = %.1lf\n", Heron(a, b, c));
	} else {
		printf("Tam giac khong hop le\n");
	}

	return 0;
}
