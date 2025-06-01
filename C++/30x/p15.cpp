//Tìm chuỗi con đối xứng dài nhất trong chuỗi
#include <bits/stdc++.h>
using namespace std;
bool is_par(const string &s, int left, int right) {
    while (right > left) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    } return true;
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    string s; cin >> s;
    int len = s.size();
    int l = 0;
    int r = 1;
    int index[2] = {0, 0};
    if (is_par(s, l, len-1)) {
        cout << s;
        return 0;
    }while (l<len-1 && r<len) {
        if (s[l] == s[r] && is_par(s, l, r)) {
            index[0] = l;
            index[1] = r;
        }
        r++;
        if (r>=len) {
            l++;
            r = index[1]-index[0]+l;
        }
    } for (int i = index[0]; i < index[1]+1; i++) {
        cout << s[i];
    }
    return 0;
}