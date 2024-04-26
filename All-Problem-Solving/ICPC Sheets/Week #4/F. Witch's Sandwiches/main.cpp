#include <iostream>
using namespace std ;
int main() {
    int t , q;
    cin >> t >> q;
    long long arr[t] , pfx[t+1] = {0};

    for (int i = 0; i < t; ++i) {
        cin >> arr[i];
        pfx[i+1] = arr[i] ;
    }
    for (int i = 1; i < t+1; ++i) {
        pfx[i] += pfx[i-1] ;
    }
    int x , y;
    for (int i = 0; i < q; ++i) {
        cin >> x >> y ;
        cout << (pfx[y] - pfx[x-1])*10 << '\n';
    }
    return 0;
}
