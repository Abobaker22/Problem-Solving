#include <iostream>
using namespace std ;

int main() {
    int n ;
    cin >> n ;
    int arr[n] , div[n] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        for (int j = 1; j <= arr[i]/2; ++j) {
            if(arr[i] % j == 0){
                div[i]++;
            }
        }
        div[i]++;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n ; ++j) {
            if(div[j] > div[j-1]){
                swap(arr[j] , arr[j-1]);
                swap(div[j] ,div[j-1]);
            }
            else if(div[j] == div[j-1]){
                if(arr[j] > arr[j-1]) {
                    swap(arr[j], arr[j - 1]);
                    swap(div[j], div[j - 1]);
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    return 0;
}
