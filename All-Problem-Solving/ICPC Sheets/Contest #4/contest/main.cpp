#include <iostream>
using namespace std ;
int main() {
    //d problem
    long long n ,cnt = 0;
    cin >> n ;
    long long arr[n] , pfx[n] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        pfx[i+1] = arr[i];
    }
    for (int i = 1; i < n+1; ++i) {
        pfx[i] += pfx[i-1];
    }
    for (int i = 0; i < n; ++i) {
        if(pfx[i] < n){
            cnt++;
        }
    }

    cout << cnt ;
    return 0;
}
