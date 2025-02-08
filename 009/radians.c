#include "radians.h"

void goc_phan_tu(double a) {
	a = a/60;
	double radians_a = a * M_PI / 180;
	double cos_a = cos(radians_a);

	if ( 0 <= a && a < 90 ) {
		printf("x thuoc goc phan tu thu I\n");
	} else if ( 90 <= a && a < 180 ) {
		printf("x thuoc goc phan tu thu II\n");
	} else if ( 180 <= a && a < 270 ) {
		printf("x thuoc goc phan tu thu III\n");
	} else if ( 270 <= a && a <= 360 ) {
		printf("x thuoc goc phan tu thu IV\n");
	} else {
		printf("Goc khong hop le!\n");
	}

	printf("cos(x) = %lf\n", cos_a);
}
