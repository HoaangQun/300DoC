//Tính số lần đổi chỗ để sắp xếp mảng
#include<bits/stdc++.h>
using namespace std;
int swapping = 0;
void sorted(int arr[], int left, int right) {
    if (left >= right) return;
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            swapping++;
        };
    } i++; int temp = arr[i];
    arr[i] = arr[right];
    arr[right] = temp;
    swapping++;
    sorted(arr, left, i-1);
    sorted(arr, i+1, right);
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++) cin >> arr[i];
    sorted(arr, 0, n-1);
    cout << swapping;
    return 0;
}