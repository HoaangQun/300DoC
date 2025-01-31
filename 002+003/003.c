//nhap tam duong tron
//nhap ban kinh
//nhap toa do M
//kiem tra |MC| voi R

#include <stdio.h>
#include "vector.h"

int main() {
	double xC, yC, R, xM, yM, l;

	printf("Nhap toa do tam C(xC, yC)? ");
	scanf("%lf%lf", &xC, &yC);

	printf("Nhap ban kinh R? ");
	scanf("%lf", &R);

	printf("Nhap toa do M(xM, yM)? ");
	scanf("%lf%lf", &xM, &yM);

	l = do_dai_vecto(xC, yC, xM, yM);

	if (l < R) {
		printf("M nam trong C()\n");
	} else if (l == R) {
		printf("M nam tren C()\n");
	} else {
		printf("M nam ngoai C()\n");
	}

	return 0;
}
