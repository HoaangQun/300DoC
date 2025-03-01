#include "All_Functions.h"

int main() {
    int a, b;
    cout << "Enter 2 positive integers: ";
    cin >> a >> b;

    int gcd = GCD(a, b);
    cout << gcd << "\n";

    return 0;
}
