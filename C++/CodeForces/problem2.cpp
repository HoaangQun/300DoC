#include <bits/stdc++.h>
using namespace std;
void create(char s[], int n) {
    int o[n]; fill(o, o+n, 1);
    int min = o[0]; int max = min;
    for (int i = 0; i<n-1; i++) {
        if (s[i] == '<') {
            o[i+1] -= (abs(o[i+1] - min) + 1); min = o[i+1];
        } else {
            o[i+1] += (abs(o[i+1] - max) + 1); max = o[i+1]; }
    } if (min <= 0) { int ty = 0 - min + 1; 
        for (int i = 0; i < n; i++) {
        o[i] += ty; cout << o[i] << " ";
    }} else for (int i = 0; i < n; i++) {
        cout << o[i] << " "; 
    }
}
int main() {
    int t, n;
    cin >> t;
    for (int task = 0; task < t; task++) {
        cin >> n; char s[n];
        cin >> s;
        create(s, n);
        if (task < t+1) cout << "\n";
    } 
    return 0;
}