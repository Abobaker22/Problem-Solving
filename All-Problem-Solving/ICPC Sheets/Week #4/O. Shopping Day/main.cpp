#include <iostream>
using namespace std;

int main() {
    long long t , q ;
    cin >> t >> q;
    long long arr[t] ,pfx[t+1] = {0};
    for (int i = 0; i < t; ++i)
        cin >> arr[i];
    for (int i = 0; i < t; ++i) {
        for (int j = 1; j < t; ++j) {
            if(arr[j] > arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for (int i = 1; i < t+1; ++i) {
        pfx[i] = arr[i-1];
        pfx[i] += pfx[i-1];
    }

    int x, y ;
    for (int i = 0; i < q; ++i) {
        cin >> x >> y;
        cout << pfx[x] - pfx[x-y] << '\n';
    }

    return 0;
}
