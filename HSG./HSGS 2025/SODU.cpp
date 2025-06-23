#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    n = pow(3, n);
    cout << fmod(pow(2, n),5);
    return 0;
}
