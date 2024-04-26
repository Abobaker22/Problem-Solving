#include <iostream>

using namespace std;

int main()
{
    long long t , no ;
    cin >> t ;

    long long arr[t];

    for(long long i = 0 ; i < t ; i++){
        cin >> arr[i];
    }
    cin >> no ;

    for(long long i = 0 ; i < t ; i++){
        if(no == arr[i]){
            cout << "YES";
            return 0;
        }

    }

    cout << "NO";

    return 0;
}
