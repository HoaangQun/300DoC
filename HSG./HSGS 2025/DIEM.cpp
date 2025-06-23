#include <iostream>
#define FOR(i, a, b) for(int i = (a); i<(b); i++)
#define ll long long
#define MAX 100000
using namespace std;
ll m, v;
ll in = LLONG_MAX;
ll ax = LLONG_MIN;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    FOR(i, 0, n) {
        cin >> m >> v;
        in = min(in, m+v);
        ax = max(ax, m+v);
    } cout << ax - in;
    return 0;
}
