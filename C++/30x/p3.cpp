//Đếm số lần xuất hiện của ký tự trong chuỗi
#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    string a; cin >> a;
    unordered_map<char, int> time;
    int len = a.size();
    for (int i = 0; i<len; i++) time[a[i]]++;
    for (auto x : time) cout << x.first << " : " << x.second;
    return 0;
}