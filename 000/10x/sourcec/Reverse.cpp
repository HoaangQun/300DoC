#include "All_Functions.h"

int main() {
    string n;
    cout << "Enter a string: ";
    getline(cin, n);
    
    ReverseS(&n);
    cout << "Reverse = " << n << endl;

    return 0;
}
