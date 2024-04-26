#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    long long arr[t];

    for(int i = 0 ; i < t ; i++){
        cin >> arr[i];
    }
    sort(arr + 0, arr + t);
    reverse(arr + 0, arr + t);

    for(int i = 0 ; i < t ; i++){
        cout << arr[i] << ' ' ;
    }

    return 0;
}
