#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i<=(b); i++)
#define ll long long
#define MAX 500001
using namespace std;
ll N[MAX];
void swapto(ll n, ll k) {
    k%=n;
    reverse(N+1, N+n+1);
    reverse(N+1, N+k+1);
    reverse(N+k+1, N+n+1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    ll n, q, first, second, thirt;
    cin >> n >> q;
    FOR(i, 1, n) cin >> N[i];
    FOR(i, 1, q) {
        cin >> first;
        if (first == 2) {cin >> second;
            swapto(n, second);
        }
        else {cin >> second >> thirt;
            N[second] = thirt;
            cout << accumulate(N+1, N+n+1, 0LL) << "\n";
        }
    }
    return 0;
}
