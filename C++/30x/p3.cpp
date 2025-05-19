//Đếm số lần xuất hiện của ký tự trong chuỗi
#include<bits/stdc++.h>
using namespace std;
void find_time(string s, char a) {
    int time = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == a) time += 1;
    } cout << a << ": " << time << "\n";
}
bool not_in_arr(string arr, char a) {
    for (int i = 0; i < arr.size(); i++) if (arr[i] == a) return false;
    return true;
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    string a; cin >> a;
    string e = "";
    for (int i = 0; i < a.size(); i++) {
        if (not_in_arr(e, a[i])) {
            e.push_back(a[i]);
            find_time(a, a[i]);
        }
    }
    return 0;
}