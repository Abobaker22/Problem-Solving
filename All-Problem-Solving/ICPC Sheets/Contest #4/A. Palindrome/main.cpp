#include <iostream>
using namespace std;
int main() {
    char c[3];
    for (int i = 0; i < 3; ++i) {
        cin >> c[i];
    }
    for (int i = 0; i < 3; ++i) {
        if(c[i] == c[(i+1)%3]) {
            cout << "YES";
            return 0;
        }
    }


    cout << "NO";
    return 0;
}
