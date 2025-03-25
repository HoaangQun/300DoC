#include <iostream>
#include <string>
#include <vector>
using namespace std;

string word(const string *a) {
    vector<string> o = {"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "};
    vector<string> teen = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixten", "seventeen", "eighteen", "nineteen"};
    vector<string> e = {"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "};
    if ((*a).size() == 1) return o[(*a)[0] - '0'];
    if ((*a).size() == 2) {
        if ((*a)[0] - '0' == 1) return teen[(*a)[1]-'0'];
        else {
            return e[(*a)[0] - '0'] + o[(*a)[1] - '0'];
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        string s = argv[1];
        cout << word(&s) << "\n";
    } else cout << "./ + value";

    return 0;
}