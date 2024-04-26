#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    long long sz;
    cin >> sz;
    string s;
    cin >> s;

    long long freq[256] = {0};
    for (int i = 0; i < sz; ++i) {
        freq[s[i]]++;
    }

    for (int i = 0; i < 256; ++i) {
        while (freq[i] > 0) {
            cout << char(i);
            freq[i]--;
        }
    }
    return 0;
}