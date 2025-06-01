//Kiểm tra hai chuỗi là đảo chữ cái của nhau
#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    string s1, s2;
    cin >> s1 >> s2;
    unordered_map<char, int> substr1, substr2;
    int len1 = s1.size(), len2 = s2.size();
    if (len1 != len2) cout << "Not equal";
    else {
        for (int i = 0; i < len1; i++) {
            substr1[s1[i]]++;
            substr2[s2[i]]++;
        } if (substr1 == substr2) cout << "Equal";
    }
    return 0;
}