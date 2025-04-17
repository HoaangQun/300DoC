#include <bits/stdc++.h>
using namespace std;

int F(int n) {
    int factorial = 1;
    for (int i = 2; i <= n; ++i) factorial *= i;
    return factorial;}

int C(int k, int n) {return F(n) / (F(k) * F(n - k));}

vector<string> Binomial(int n, bool isMinus) {
    vector<string> B;
    for (int i = 0; i <= n; ++i) {
        int coeff = C(i, n);
        if (isMinus && (i % 2 == 1)) coeff *= -1;

        string term = "";

        if (coeff == -1) term += "-";
        else if (coeff != 1) term += to_string(coeff);
        else if (i != 0) term += "";

        if (n - i > 0) term += "a";
        if (n - i > 1) term += "^" + to_string(n - i);

        if (i > 0) term += "b";
        if (i > 1) term += "^" + to_string(i);

        B.push_back(term);
    }
    return B;
}

string Coefficient(int n, bool isMinus) {
    if (n < 0) return "Không hỗ trợ số mũ âm!";
    vector<string> terms = Binomial(n, isMinus);
    string result = "";

    for (int i = 0; i < terms.size(); ++i) {
        if (i > 0 && terms[i][0] != '-') result += " + ";
        if (i > 0 && terms[i][0] == '-') result += " - ", result += terms[i].substr(1);
        else result += terms[i];
    }
    return result;}

int main() {
    int n;
    char op;
    while (true) {
        cout << "(a ? b)^";
        cin >> op >> n;
        bool isMinus = (op == '-');
        cout << "= " << Coefficient(n, isMinus) << "\n\n";}
    return 0;
}