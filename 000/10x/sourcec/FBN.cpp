#include "All_Functions.h"

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    n = Fibonacci(n);
    cout << n << "\n";

    return 0;
}
