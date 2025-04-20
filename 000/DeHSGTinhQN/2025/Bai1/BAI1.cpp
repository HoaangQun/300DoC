#include <iostream>
#include <climits>
using namespace std;
int maxi(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    } return max;
};

int greaterthani(int arr[], int n, int target) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] > target && arr[i] < min) {
            min = arr[i];
        }
    } return min;
};

int main() {
    freopen("BAI1.INP", "r", stdin); freopen("BAI1.OUT", "w", stdout);
    int n; cin >> n;
    int lst[n];
    for (int i = 0; i < n; i++) {
        cin >> lst[i]; }
    int max = maxi(lst, n);
    for (int i = 0; i < n; i++) {
        if (lst[i] == max) cout << "0 ";
        else cout << greaterthani(lst, n, lst[i]) << " ";
    }
    return 0;
}