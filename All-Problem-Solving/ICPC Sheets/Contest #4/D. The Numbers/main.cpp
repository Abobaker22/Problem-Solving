#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n , q ;
    cin >> n >> q ;
    int arr[n] , freq[100001] = {0} ,pfx[n] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (freq[arr[i]] == 0)
            freq[arr[i]]++;
    }

    for (int i = 1; i < max; ++i) {
        pfx[i] = freq[i-1] ;
        pfx[i] += pfx[i-1] ;
    }

    for (int i = 0; i < max; ++i) {
        if(pfx[i] != 0)
            cout << i << " = " << pfx[i] <<"\n";
    }

    /*for (int i = 0; i < q; ++i) {
        int l , r ;
        cin >> l >> r ;
        for (int j = l; j < r; ++j) {
            
        }
        
    }*/
    return 0;
}
