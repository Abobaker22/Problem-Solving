#include <iostream>
#include <algorithm>
using namespace std ;
 // problem G
int main() {
    int n , k ;
    cin >> n >> k;
    int arr[n] , pfx[n] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        pfx[i+1] = arr[i];
    }
    for (int i = 1; i < n+1; ++i) {
        pfx[i] += pfx[i-1];
    }

    int min = 100001 ;
    for (int i = 1; i < n+1; ++i) {
        if(pfx[i] > pfx[(i+k)%(n+1)]){
            if(pfx[i] - pfx[(i+k)%(n+1)] < min){
                min = pfx[i] - pfx[(i+k)%(n+1)];
            }
        }
        else{
            if(pfx[(i+k)%(n+1)] - pfx[i] < min){
                min = pfx[(i+k)%(n+1)] - pfx[i];
            }
        }
    }
    cout << min ;
    return 0;
}
