#include <iostream>

using namespace std;

int main()
{
    int n , x ;
    long long res ;
    cin >> n ;

    while(n--){
        cin >> x ;
        res = 1;
        for(int j = 1 ; j <= x ; j++){
            res *= j;
        }
        cout << res << endl;
    }

    return 0;
}

