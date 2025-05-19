//Tìm số lớn thứ hai trong dãy số
#include<bits/stdc++.h>
using namespace std;
int second_maxi(int arr[], int n) {
    int max = arr[0];
    int smax = INT_MIN;
    for (int i = 0; i < n; i++) if (arr[i]>max) max = arr[i];
    for (int i = 0; i < n; ++i) if (arr[i]>smax && arr[i] < max) smax = arr[i];
    return smax;
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>> arr[i];
    cout << second_maxi(arr, n);
    return 0;
}