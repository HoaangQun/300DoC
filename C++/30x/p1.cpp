//In dãy Fibonacci nhỏ hơn n
#include<bits/stdc++.h>
using namespace std;
vector<int> fibonacci(int n) {
    if (n <= 1) return {0};
    if (n == 2) return {0, 1, 1};
    vector<int> fib = {0, 1};
    int i = 2;
    while (fib[i-1] + fib[i-2] < n) {
        fib.push_back(fib[i-1] + fib[i - 2]);
        i++;
    } return fib;
}
int main() {
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int n; cin >> n;
    vector<int> result = fibonacci(n);
    for (int i : result) cout << i << " ";
    return 0;
}