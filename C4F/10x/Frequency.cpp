#include "All_Functions.h"
#include <unordered_map>

int main() {
    string a;

    cout << "Enter a string: ";
    getline(cin, a);

    unordered_map<char, int> f = Substrings(a);
    for (auto i : f) cout << i.first << " : " << i.second << endl;

    return 0;
}
