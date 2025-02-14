#include <stdio.h>

int F(int N) {
    if (N == 0) return 0;
    if (N == 1) return 1;

    return F(N-1) + F(N-2);
};

int main() {
    int N;
    printf("Nhap vao vi tri trong day Fibonacci: ");
    scanf("%d", &N);

    printf("Gia tri tai vi tri thu %d la %d \n", N, F(N));

    return 0;
}