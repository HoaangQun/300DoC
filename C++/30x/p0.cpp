//Tính tổng các chữ số của số nguyên n
#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    string n; cin >> n;
    int t = 0;
    for(int i = 0; i < n.size(); i++) {
        t += (n[i] - '0');
    } cout << t;
    return 0;
}