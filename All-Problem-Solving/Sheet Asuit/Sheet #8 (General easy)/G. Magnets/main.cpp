
#include <iostream>
using namespace std ;

int main() {
    int n , cnt = 0 , max = 1;
    cin >> n ;
    char arr[n][2];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 1; ++j) {
            if(arr[i][j+1] != arr[i+1][j]){
                cnt++;
            }
            else{
                max++;
                cnt = 0;
            }
        }
    }

    cout << max ;
    return 0;
}
