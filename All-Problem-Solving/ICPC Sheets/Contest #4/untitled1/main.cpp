#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t ;
    cin >> t;
    int arr[t] ,freq[100001] = {0};

    for (int i = 0; i < t; ++i) {
        cin >> arr[i] ;
        freq[arr[i]]++;
    }
    for (int i = 0; i < t; ++i) {
        for (int j = 1; j < t; ++j) {
            if(freq[arr[j]] > freq[arr[j-1]]){
                swap(arr[j] , arr[j-1]);
            }
            else if(freq[arr[j]] == freq[arr[j-1]]){
                if(arr[j] < arr[j-1])
                    swap(arr[j] , arr[j-1]);
            }
        }
    }
    for (int i = 0; i < t; ++i) {
        cout << arr[i] << ' ';
    }
    return 0;
}
