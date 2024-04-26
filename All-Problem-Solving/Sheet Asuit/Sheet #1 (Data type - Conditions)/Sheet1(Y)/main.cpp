#include <iostream>

using namespace std;

int main()
{
    long long a , b , c , d , res ;
    cin >> a >> b >> c >> d ;
    a = a % 100 ;
    b = b % 100 ;
    c = c % 100 ;
    d = d % 100 ;
    res = (a * b * c * d) % 100;

    if(res / 10 < 1)
        cout << "0" << res;
    else
        cout << res << endl;


    return 0;
}
