#include <iostream>
using namespace std;

int F(int N) {
    if (N == 0) return 0;
    if (N == 1) return 1;

    return F(N-1) + F(N-2);
};

int main() {
    int N;
    cout << "Nhap vao vi tri trong day Fibonacci: ";
    cin >> N;

    cout << "Gia tri tai vi tri thu " << N << " la " << F(N) << endl;

    return 0;
}