#include <iostream>
#include <climits>
#include <cstdio>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i<(b); i++)
typedef long long ll;
#define MAX 1000000
ll a[MAX]; //mảng phần tử
ll sum[MAX]; // mảng tổng ước
ll L = LLONG_MAX, R = LLONG_MIN; //min, max
void ssum() {
    //duyệt từ 1 đến căn max
    for (ll i = 1; i*i <= R; ++i) {
        ll n = i*i;
        //nếu bình phương i >= min
        if (n >= L) {
            //tổng ước tại vị trí i^2-min thêm i
            sum[n -L] += i;//sum[9-4]+=3 (có thể ô này k có giá trị)
            n += i;//giá trị sàng
        } else {
            n = ((L -1)/ i +1) *i;//tìm bội nhỏ nhất >= min
        } for(;n <= R; n+=i){
            sum[n -L] += i + n/i;//cộng dồn 2 ước
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BOMCHUM.inp", "r", stdin);
    freopen("BOMCHUM.out", "w", stdout);
    int q; cin >> q;
    FOR(i, 0, q) {
        cin >> a[i];
        L = min(L, a[i]);
        R = max(R, a[i]);
    } ssum();
    FOR(i, 0, q) cout << sum[a[i] -L] << " ";//in ra giá trị

    return 0;
}
