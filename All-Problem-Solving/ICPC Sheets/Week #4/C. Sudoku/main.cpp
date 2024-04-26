#include <iostream>
using namespace std ;

int main() {
    int arr[3][3] , freq[10] = {0};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> arr[i][j] ;
            freq[arr[i][j]] ++ ;
        }
    }
    for (int i = 1; i < 10; ++i) {
        if (freq[i] != 1) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" ;
    return 0;
}
