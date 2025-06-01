//Xoay mảng sang trái k lần
#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i<n; i++) cin >> arr[i];
    for (int i = 0; i<n; i++) {
        cout << arr[(i+k) % n] << " ";
    }
    return 0;
}