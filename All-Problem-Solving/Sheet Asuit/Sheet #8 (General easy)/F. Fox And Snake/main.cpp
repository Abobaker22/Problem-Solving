#include <iostream>
using namespace std;

int main() {
    int n , m ;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = '#';
        }
    }
    for (int i = 1; i < n; i+=4) {
        for (int j = 0; j < m; ++j) {
            if(i % 2 != 0 && j < m-1){
                arr[i][j] = '.';
            }
        }
    }

    for (int i = 3; i < n; i+=4) {
        for (int j = 0; j < m; ++j) {
            if(i % 2 != 0 && j > 0){
                arr[i][j] = '.';
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j];
        }
        cout << '\n';
    }
    return 0;
}
