//Tách mảng thành hai phần có tổng gần bằng nhau nhất
#include<bits/stdc++.h>
using namespace std;
int total(vector<int> arr) {
    int result = 0;
    for (int x : arr) result += x;
    return result;
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int n; cin >> n;
    int temp;
    vector<int> arr;
    for (int i = 0; i<n; i++) {
        cin >> temp;
        arr.push_back(temp);
    } sort(arr.begin(), arr.end());
    int max_dif = arr.back();
    vector<int> ssl;
    while (abs(total(arr) - total(ssl)) > max_dif) {
        ssl.push_back(arr.back());
        arr.pop_back();
    } for (int x : arr) cout << x << " ";
    cout << "\n";
    for (int x : ssl) cout << x << " ";
    return 0;
}