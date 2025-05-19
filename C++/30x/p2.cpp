//Kiểm tra số nguyên tố
#include<bits/stdc++.h>
using namespace std;
string prime(int n) {
    if (n < 2) return "NO";
    if (n == 2) return "YES";
    if (n%2 == 0) return "NO";
    int root = sqrt(n);
    for (int i = 3; i <= root; i+=2) {
        if (n%i == 0) return "NO";
    } return "YES";
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int n; cin >> n;
    cout << prime(n);
    return 0;
}