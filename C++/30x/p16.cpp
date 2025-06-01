//Tìm mảng con có tổng lớn nhất (Kadane's Algorithm)
#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[], int n) {
    int max_end = arr[0];
    int max_sofar = 0;
    for (int i = 0; i<n; i++) {
        max_end = max(0, max_end + arr[i]);
        max_sofar = max(max_sofar, max_end);
    } return max_sofar;
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } cout << kadane(arr, n);
    return 0;
}