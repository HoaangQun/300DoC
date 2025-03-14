#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    freopen("input.INP", "r", stdin); freopen("output.OUT", "w", stdout);
    string s;
    getline(cin, s);

    stringstream ss(s);
    int number;

    vector<int> a;
    while (ss >> number) {
        a.push_back(number);
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << "\n";
    }

    return 0;
}
