#include <iostream>
using namespace std;
int main() {
    long long n , q ;
    cin >> n >> q ;
    long long arr[n] ,pfx[n] = {0};
    for (long long i = 1; i < n+1; ++i) {
        cin >> arr[i];
        arr[i] = arr[i]/2;
        pfx[i] = pfx[i-1] + arr[i];
    }

    for (long long i = 1; i < q+1; ++i) {
        long long l , r ;
        cin >> l >> r ;
        if(l > r){
            swap(l,r);
        }

        cout << pfx[r]-pfx[l-1] << '\n';
    }

    return 0;
}
