#include <bits/stdc++.h>
using namespace std;

vector<int> list_render(const string *s) {
    stringstream ss((*s));
    int number;
    vector<int> list;
    while(ss >> number) list.push_back(number);
    return list;
}

void max_scmax(vector<int> *ssl) {
    int max = (*ssl)[0], scmax = (*ssl)[0];
    for (int i : (*ssl)) if (i > max) max = i;
    for (int i : (*ssl)) if (i > scmax && i < max) scmax = i;
    cout << "Max = " << max << "\nSecond Max = " << scmax << "\n";
}

int main() {
    string s; vector<int> a;
    cout << "put n int: ";
    getline(cin, s);
    a = list_render(&s);
    max_scmax(&a);

    return 0;
}