#include "All_Functions.h"

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (Prime(n)) cout << "Prime!\n";
    else cout << "not Prime\n";

    return 0;
}
