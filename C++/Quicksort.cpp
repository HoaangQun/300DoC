#include <iostream>
using namespace std;

void sort(int arr[], int left, int right) {
    if (left >= right) return;
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        };
    } i++; int temp = arr[i];
    arr[i] = arr[right];
    arr[right] = temp;
    sort(arr, 0, i-1);
    sort(arr, i+1, right);
}
int main() {
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
    int n;
    cin >> n; int ssl[n];
    for (int i = 0; i<n; i++) {
        cin >> ssl[i];
    } sort(ssl, 0, n-1);
    for (int item : ssl) cout << item << " ";
    return 0;
}