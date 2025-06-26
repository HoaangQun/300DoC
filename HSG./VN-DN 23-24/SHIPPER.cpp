#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a); i<(b); i++)
#define f(x, a) for(auto x : (a))
using namespace std;
unordered_map<ll, int> dem;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m, d = -1; ll t; cin >> n >> m;
    FOR(i, 0, n) {
        cin >> t;
        dem[t]++;
    } f(x, dem) {
        if (x.second > d && x.second <= m) d=x.second;
    } cout << d;
    return 0;
}
