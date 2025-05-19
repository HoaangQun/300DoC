//Tìm ước chung lớn nhất
#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b) {
    if (b == 0) return a;
    return GCD(b, a%b);
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b);
    return 0;
}