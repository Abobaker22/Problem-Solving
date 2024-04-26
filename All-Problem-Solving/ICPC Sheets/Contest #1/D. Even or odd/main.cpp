#include <iostream>

using namespace std;

int main() {
    int n;
    char q;
    cin >> n >> q;
    int dig1 = (n % 10) / 1;
    int dig2 = (n % 100) / 10;
    int dig3 = (n % 1000) / 100;
    int dig4 = (n % 10000) / 1'000;
    int dig5 = (n % 100000) / 10'000;
    int isRequiredOdd;
    if (q == 'o') isRequiredOdd = 1;
    else isRequiredOdd = 0;
    if ((dig1 + dig2) % 2 == isRequiredOdd ||
        (dig2 + dig3) % 2 == isRequiredOdd ||
        (dig3 + dig4) % 2 == isRequiredOdd ||
        (dig4 + dig5) % 2 == isRequiredOdd) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
