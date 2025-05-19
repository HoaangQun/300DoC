//Tìm số đối xứng nhỏ nhất lớn hơn n
#include<bits/stdc++.h>
using namespace std;
bool ss(int n) {
    string to_n = to_string(n);
    int len = to_n.size();
    for (int i = 0; i<len; i++) {
        if (to_n[i] != to_n[len-1-i]) return false;
    } return true;
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int n; cin >> n; n++;
    while (ss(n) == false) n++;
    cout << n;
    return 0;
}