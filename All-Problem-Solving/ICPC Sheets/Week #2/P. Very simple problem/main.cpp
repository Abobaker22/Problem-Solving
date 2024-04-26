#include <iostream>

using namespace std;

int main()
{
    long long n , fac = 1 ;
    cin >> n ;
    if(n <= 4){
        for(long long i = 1 ; i <= n ; i++){
            fac *= i;
        }
        cout << fac%10 ;
    }
    else // اي رقم فوق ال 4 الفاكتوريال بتاعه ب 0
        cout << 0 ;

    return 0;
}
