//Đảo ngược chuỗi
#include<bits/stdc++.h>
using namespace std;
string reverse(string s) {
    int n = s.size();
    string r = "";
    for (int i = n-1; i>=0; i-=1) r.push_back(s[i]);
    return r;
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    string n;
    getline(cin, n);
    cout << reverse(n);
    return 0;
}