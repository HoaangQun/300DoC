#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    freopen("SUMN.INP", "r", stdin);
    freopen("SUMN.OUT", "w", stdout);
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N.size(); ++i) {
        sum += (N[i] - '0');
    }
    cout << sum;

    return 0;
}
