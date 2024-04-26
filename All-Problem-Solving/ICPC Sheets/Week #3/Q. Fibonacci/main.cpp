#include <iostream>

using namespace std;

int main()
{
    long long tmp , n ,fab0 = 0  ,fab1 = 1 , co = 0;
    cin >> n ;

    for(int i = 1 ; i <= n ; i++){
        if(fab0 + fab1 == i){
            co++;
            tmp = fab0 ;
            fab0 = fab1 ;
            fab1 = tmp + fab1;
        }
    }
    cout << co+2 ;

    return 0;
}
