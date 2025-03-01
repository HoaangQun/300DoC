#include "All_Functions.h"

int main() {
    int n;
    cout << "Enter a positive integer for array: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }

    int max = MaxFre(n, a);
    cout << max << endl;

    return 0;
}
