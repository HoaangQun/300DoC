//Đếm số chữ cái, chữ số và ký tự đặc biệt trong chuỗi
#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    string n; cin >> n;
    int for_3[3] = {0, 0, 0};
    for (int i = 0; i<n.size(); i++) {
        if (isdigit(n[i])) for_3[1]++;
        else if (isalpha(n[i])) for_3[0]++;
        else for_3[2]++;
    } cout << "Letters: " << for_3[0]
    << "\nDigits: " << for_3[1]
    << "\nSpecials: " << for_3[2];

    return 0;
}