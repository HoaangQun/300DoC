#include <iostream>
#define FOR(i, a, b) for(int i = (a); i<(b); i++)
#define MAX 100000
#define ll long long
using namespace std;
ll HCN[MAX];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;ll d, r; cin >> n;
    FOR(i, 0, n) {
        cin >> d >> r;
        HCN[i] = d*r;
    } d = 1;
    FOR(i, 1, n) {
        if (HCN[i] < HCN[i-1]) d++;
        else d = 1;
    } cout << d;
    return 0;
}
