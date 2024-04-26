#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    long long arr[t] ,rev[t] ,co = 0;

    for(int i = 0 ; i < t ;i++){
        cin >> arr[i];
        rev[i] = arr[i] ;
    }

    reverse(rev + 0, rev + t);

    for(int i = 0 ; i < t ;i++){
        if(arr[i] == rev[i]){
            co++;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
