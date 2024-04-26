#include <iostream>
using namespace std;
int main() {
    int n ;
    cin >> n;
    int arr[n+1] , index[100001] = {0} ;
    for (int i = 1; i < n+1; ++i) {
        cin >> arr[i];
        index[arr[i]] = i;
    }
    for (int i = 1; i < 100001; ++i) {
        if(index[i] != 0){
            cout << index[i] << ' ';
        }
    }
    return 0;
}
