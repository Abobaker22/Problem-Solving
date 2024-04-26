#include <iostream>
using namespace std;

int main() {
    /* Frequency
     * string s ;
    cin >> s;
    int freq[256] = {0};
    for (int i = 0; i < s.size(); ++i) {
        freq[s[i]]++ ;
    }
    char c ;
    cin >> c ;
    cout << freq[c];*/

/* Bubble Sort
 * int arr[3][3] = {{7,8,9},
                     {4,5,6},
                     {1,2,3}} ;
    for (int i = 0; i < 3; ++i) {
        for (int j = 1; j < 3; ++j) {
            if(arr[j-1][1] > arr[j][1]){
                for (int k = 0; k < 3; ++k) {
                    swap(arr[j-1][k], arr[j][k]) ;
                }
            }

        }

    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << ' ' ;
        }
        cout << '\n' ;
    }*/

    /* Prefix
     * int n ;
    cin >> n ;
    int arr[n] , pfx[n+1] = {0};

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        pfx[i+1] = arr[i];
    }

    for (int i = 1; i <= n; ++i) {
        pfx[i] += pfx[i-1];
    }
    for (int i = 1; i <= n; ++i) {
        cout << pfx[i] << ' ';
    }*/

    return 0;
}
