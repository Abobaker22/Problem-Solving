#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t ;
    cin >> t;
    long long arr[t] , maxx = -100000000 , minn = 100000000;

    for(int i = 0 ; i < t ; i++){
        cin >> arr[i] ;
        if(arr[i] >= maxx){
            maxx = arr[i];
        }
        if(arr[i] <= minn){
            minn = arr[i];
        }
    }

    for(int i = 0 ; i < t ; i++){
        if(arr[i] == maxx)
            arr[i] = minn;
        else if(arr[i] == minn)
            arr[i] = maxx;
    }

    for(int i = 0 ; i < t ; i++){
        cout << arr[i] << ' ' ;
    }

    return 0;
}
