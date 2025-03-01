#include "All_Functions.h"

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    n = Totals_Digits(n);
    cout << n << endl;
    
    return 0;
}
