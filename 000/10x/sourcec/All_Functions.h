#include <unordered_map>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int MaxFre(int len, int a[]) {
    int max;
    int count = 0;
    for (int i = 0; i < len; i++) {
        int count2 = 0;
        for (int j = 0; j < len; j++) {
            if (a[j] == a[i]) count2 += 1;
        }
        if (count2 > count) max = a[i];
        count = count2;
    }
    
    return max;
};

unordered_map<char, int> Substrings(string &a) {
    unordered_map<char, int> f;
    for (char c : a) f[c]++;
    return f;
};

int Fibonacci(int a) {
    if (a == 0) return 0;
    if (a == 1) return 1;
    return Fibonacci(a - 1) + Fibonacci(a - 2);
};

int GCD(int a, int b) {
    if (b == 0) return a; return GCD(b, a % b);
};

bool Prime(int a) {
    if (a < 2) return false;
    if (a == 2) return true;
    if (a % 2 == 0) return false;
    for (int i = 3; i <= sqrt(a); i += 2) {
        if (a % i == 0) return false;
    }
    return true;
};

void ReverseS(string *a) {
    int length = (*a).size();
    string b(length, ' ');
    int j = 0;
    for (int i = length - 1; i >= 0; i -= 1) {
        b[j] = (*a)[i];
        j++;
    }
    (*a) = b;
};

int SecondMAX(int len_a, int a[]) {
    int max = a[0]; int max2 = a[0];
    for (int i = 1; i < len_a; i++) {
        if (max < a[i]) max = a[i];
    }
    for (int i = 1; i < len_a; ++i) {
        if (max2 < a[i] && a[i] < max) max2 = a[i]; }

    return max2;
};

void Sort(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i+1; j < n; ++j) {
            if (a[j] < a[min]) min = j;
        }
        if (min != i) {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
};

void Palindrome(string &a) {
    int len = a.size();
    int out = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] != a[len -1 - i]) out += 1;
    }
    if (out == 0) cout << "YES!\n";
    else cout << "NO.\n";
};

int Totals_Digits(int a) {
    int result = 0;
    do {
    result += a % 10;
    a /= 10;
    }while (a != 0);

    return result + a;
};
