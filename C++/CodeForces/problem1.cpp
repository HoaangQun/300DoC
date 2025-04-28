#include <iostream>
int main() {
    int t; std::cin >> t;
    int num;
    for (int i = 0; i < t; i++) {
        std::cin >> num;
        if (num % 2 != 0) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}