#include <iostream>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    int arr[t] , freq[100001] = {0} , co = 0;
    for (int i = 0; i < t; ++i) {
        cin >> arr[i];
        if(freq[arr[i]] == 0){
            freq[arr[i]]++;
            co++;
            cout << co << ' ';
        }
        else
            cout << co << ' ';
    }
    return 0;
}
