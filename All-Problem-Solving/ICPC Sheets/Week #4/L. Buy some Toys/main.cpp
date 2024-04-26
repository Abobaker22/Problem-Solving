#include <iostream>
#include <algorithm>
using namespace std ;

int main() {
    long long sz , x , sum = 0;
    cin >> sz >> x ;
    long long arr[sz];

    for (long long i = 0; i < sz; ++i) {
        cin >> arr[i];
    }
    sort(arr,arr+sz);

    long long i = 0 , co = 0;
    while(sum+arr[i] <= x){
        sum += arr[i];
        co++;
        i++;
    }
    cout << co ;
    return 0;
}