#include <stdio.h>

int tong_so_tien(int kW) {
	if (kW < 0) { printf("khong hop le!\n");
	return 0; }
	int t;
	if (kW <= 100) {
		t = kW * 500;
	} else if (kW > 100 && kW <= 250) {
		t = 100 * 500 + (kW - 100) * 800;
	} else if (kW > 250 && kW <= 350) {
		t = 100 * 500 + 150 * 800 + (kW - 250) * 1000;
	} else {
		t = 100 * 500 + 150 * 800 + 100 * 1000 + (kW - 350) * 1500; }
	return t;

};

int main() {
	int kW = 1;
	do {
		printf("Nhap so kW tieu thu: ");
		scanf("%d", &kW);
		int t = tong_so_tien(kW);
		printf("%d\n", t);
	}while (kW != 0);
	
	return 0;
}
