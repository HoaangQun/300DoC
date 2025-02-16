#include <fstream>
#include <list>
#include <algorithm>
#include <numeric>

using namespace std;

bool check(int K, const list<int>& a, int n, int m) {
    int use = 1;
    int now_size = 0;

    for (int eggs : a) {
        if (now_size + eggs > K) {
            use++;
            now_size = eggs;
            if (use > m) {
                return false;
            }
        } else {
            now_size += eggs;  
        }
    }

    return true;
}

int findMIN(const list<int>& a, int n, int m) {
    int Left = *max_element(a.begin(), a.end());
    int Right = accumulate(a.begin(), a.end(), 0);

    int result = Right;

    while (Left <= Right) {
        int middle = (Left + Right) / 2;
        if (check(middle, a, n, m)) {
            result = middle;
            Right = middle - 1;
        } else {
            Left = middle + 1;
        }
    }

    return result;
}

int main() {
    ifstream reader("EGGS.INP");
    int n, m;
    reader >> n >> m;

    list<int> a;
    for (int i = 0; i < n; i++) {
        int num;
        reader >> num;
        a.push_back(num);
    }

    reader.close();

    int K = findMIN(a, n, m);

    ofstream printer("EGGS.OUT");
    printer << K;
    printer.close();

    return 3;
}

