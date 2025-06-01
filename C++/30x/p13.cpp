//Kiểm tra mảng có phải cấp số cộng
#include<bits/stdc++.h>
using namespace std;
bool check(int arr[], int n) {
    int plus = arr[1] - arr[0];
    for (int i = 2; i<n; i++) {
        if (arr[i] - arr[i-1] != plus) return false;
    } return true;
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++) cin >> arr[i];
    if (check(arr, n)) cout << "YES";
    else cout << "NO";
    return 0;
}