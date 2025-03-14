#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    freopen("input.INP", "r", stdin); freopen("output.OUT", "w", stdout);
    int l, r;
    cin >> r >> l;
    cin.ignore();
    string f;
    vector<vector<int>> trix;
    for (int i = 0; i < l; ++i) {
        getline(cin, f);
        stringstream ss(f);
        int num, count = 0; vector<int> a;
        while (ss >> num) {
            a.push_back(num);count++ ;if(count == r) break;
        }
        trix.push_back(a);
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < trix[i].size(); j++) {
            cout << trix[i][j] << " ";
        } cout << "\n";
    }

    return 0;
}
