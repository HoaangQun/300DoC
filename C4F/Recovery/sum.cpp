#include <iostream>
#include <string>
using namespace std;

int sum(string *a) {
    int sum = 0;
    for (int i = 0; i < (*a).size(); ++i) {
        sum += ((*a)[i] - '0');
    } return sum;
};

int main(int argc, char* argv[]) {
    if (argc > 1) {
        string s = argv[1];
        cout << sum(&s) << "\n";
    } else cout << "./sum <input number>\n";

    return 0;
}