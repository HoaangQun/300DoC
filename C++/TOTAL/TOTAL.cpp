#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> back(string &a) {
    vector<int> num = {};
    int n = a.size();
    for (int i = 0; i < n ; ++i) {
        if (a[i] == '-') {
            if (i + 1 < n && isdigit(a[i + 1])) {
                num.push_back(- (a[i + 1] - '0'));
                i++;
                }
            } else if (isdigit(a[i])) {
                num.push_back(a[i] - '0');
            }
    }
    return num;
};

int main() {
    freopen("TOTAL.INP", "r", stdin); freopen("TOTAL.OUT", "w", stdout);
    string s;
    getline(cin, s);

    vector<int> a = back(s);
    int n = a.size(); int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a.at(i);
    }

    cout << sum;

    return 0;
}
