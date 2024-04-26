#include <iostream>

using namespace std;

int main()
{
    int  t ;
    cin >> t;
    long long arr[t] , maxx = -10000000;

    for(int i = 0 ; i < t ; i++){
        cin >> arr[i];
    }
    for(int i = 1 ; i <= t ; i++){
        for(int j = i+1 ; j <= t ; j++){
            if((arr[i-1]*i - arr[j-1]*j) >= maxx){
                maxx = arr[i-1]*i - arr[j-1]*j;
            }
        }
    }
    cout << maxx << endl;
    return 0;
}
