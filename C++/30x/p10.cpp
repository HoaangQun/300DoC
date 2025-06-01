//Tìm phần tử xuất hiện nhiều nhất trong mảng
#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> id;
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++) cin >> arr[i];
    for (int i = 0; i<n; i++) id[arr[i]]++;
    int len = id.size(); int max_value = 0;
    int max_key;
    for (auto item : id) {
        if (item.second > max_value) max_key = item.first;
    } cout << max_key;

    return 0;
}