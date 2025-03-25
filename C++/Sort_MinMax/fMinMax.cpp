#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> list = {7, 8, 5, 6, 9, 3, 4, 2, 0, 1};
    int min = list[0]; int max = list[0];
    for (int i : list) {
        if (i > max) max = i;
        if (i < min) min = i;
    }
    cout << "min = " << min << "\nmax = " << max << "\n";

    return 0;
}