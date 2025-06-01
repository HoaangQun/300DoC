//Tìm số xuất hiện một lần trong mảng (mọi số khác xuất hiện 2 lần)
#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int n; cin >> n;
    int arr[n];
    unordered_map<int, int> last;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        last[arr[i]]++;
    } for (auto i : last) {
        if (i.second == 1) cout << i.first;
    }
    return 0;
}