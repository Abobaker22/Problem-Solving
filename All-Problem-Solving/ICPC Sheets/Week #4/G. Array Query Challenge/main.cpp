#include <iostream>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    long long arr[t] , pfx[t+1] = {0} , pre[100001] = {0};
    for (int i = 1; i < 100001; ++i) {
        pre[i] = pre[i-1] + i ;
    }
    for (int i = 0; i < t; ++i) {
        cin >> arr[i];
        pfx[i+1] = arr[i];
        pfx[i+1] += pfx[i];
    }

    int q , l , r , cnt = 0;
    cin >> q ;
    for (int i = 0; i < q; ++i) {
        cin >> l >> r ;
        int res = pfx[r] - pfx[l-1] + pre[r-l+1];
        cout << res << '\n' ;
    }
    return 0;
}
