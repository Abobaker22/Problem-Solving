#include <iostream>

using namespace std;

int main()
{
    long long a , b , t1 , t2 , max1 = 0 , max2 = 0 ;
    cin >> t1 >> t2 ;

    for(long long i = 0 ; i < t1 ; i++){
        cin >> a;
        if(a >= max1)
            max1 = a;
    }

    for(long long j = 0 ; j < t2 ; j++){
        cin >> b;
        if(b >= max2)
            max2 = b;
    }

    if(max1 >= max2)
        cout << "LAMORO";
    else
        cout << "Ouda";
    return 0;
}
