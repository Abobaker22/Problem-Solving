#include <iostream>
using namespace std ;

int main() {
    int sz_of_no ;
    cin >> sz_of_no ;
    int arr[sz_of_no] , wst_time [sz_of_no] = {0} , pfx[sz_of_no+1] = {0} ;

    for (int i = 0; i < sz_of_no; ++i) {
        cin >> arr[i];
        wst_time[i] = 24 - arr[i];
    }
    for (int i = 1; i < sz_of_no+1; ++i) {
        pfx[i] = wst_time[i-1] + pfx[i-1];
    }

    int q , l , r ;
    cin >> q ;
    for (int i = 0; i < q; ++i) {
        cin >> l >> r;
        cout << pfx[r] - pfx[l-1] << '\n' ;
    }
    return 0;
}
