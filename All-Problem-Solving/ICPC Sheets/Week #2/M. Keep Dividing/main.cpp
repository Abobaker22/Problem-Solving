#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n , co = 0;
    cin >> n ;

//    for(int i = 2 ; i <= n ; i++){
//        if(n % i == 0){
//            co++;
//            n /= i;
//            i = 2;
//        }
//    }
    for(int i = 2 ; i <= sqrt(n) ; i++){
        while(n % i == 0){
            co++;
            n /= i;
        }
    }

    if(n > 1 )
        co++;

    cout << co ;
    return 0;
}
