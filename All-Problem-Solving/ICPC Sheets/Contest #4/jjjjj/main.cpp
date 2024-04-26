#include <iostream>
using namespace std;
int main() {
    int n ,cnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i*i + j*j == n*n){
                cnt++;
            }
        }
    }
    cout << cnt/2 ;

    return 0;
}
