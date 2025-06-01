//Tính tích của tất cả các phần tử (không dùng phép nhân trực tiếp)
#include<bits/stdc++.h>
using namespace std;
long long multiplication (long long n, long long a) {
    long long r = 0;
    for (long long i = 0; i<a; i++) {
        r+=n;
    } return r;
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    long long n; cin >> n;
    long long  arr[n];
    for (long long i = 0; i<n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            cout << 0;
            return 0;
        }
    } long long result = 1;
    for (long long x : arr) {
        cout << result << "\n";
        result = multiplication(result, x);}
    cout << result;
    return 0;
}