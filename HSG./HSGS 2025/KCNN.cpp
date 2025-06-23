#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i<(b); i++)
#define f(x, a) for(auto x : (a))
#define MAX 100000
using namespace std;
int N[MAX];
unordered_map<int, int> dtance, ditance;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    FOR(i, 0, n) {
        cin >> N[i];
        dtance[N[i]] = i;
        ditance[N[i]] = MAX+1;
    } FOR(i, 0, n) {
        int d = abs(i - dtance[N[i]]);
        if (d < ditance[N[i]] && d>0) ditance[N[i]] = d;
    } int in = MAX+1;
    f(x, ditance) {
        if(x.second < in && x.second>0) in = x.second;
    } if(in == MAX+1) cout << "-1";
    else cout << in;
    return 0;
}
