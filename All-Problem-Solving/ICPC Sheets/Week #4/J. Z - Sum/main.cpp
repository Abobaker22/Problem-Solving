#include <iostream>
using namespace std ;

int main() {
    long long sz , sum = 0;
    cin >> sz ;
    long long arr[sz][sz] ;

    for (long long i = 0; i < sz; ++i) {
        for (long long j = 0; j < sz; ++j) {
            cin >> arr[i][j];
            if(i == 0 || i == sz-1 || i+j == sz-1){
                sum += arr[i][j];
            }
        }
    }
    cout << sum ;

    return 0;
}
