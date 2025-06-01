//Tìm số đối xứng nhỏ nhất lớn hơn n
#include<bits/stdc++.h>
using namespace std;
bool is_par(int n) {
    string check = to_string(n);
    int left = 0;
    int right = check.size() -1;
    while (right > left) {
        if (check[right] != check[left]) return false;
        left++;
        right--;
    }
    return true;
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int n; cin >> n; n++;
    while (is_par(n) == false) n++;
    cout << n;
    return 0;
}