#include <iostream>

using namespace std;

int main()
{
    long long a , b , c , d ,res ;
    cin >> a >> b >> c >> d ;

    res = (a%100)*(b%100) *(c%100)*(d%100) ;


    cout << res % 100 << endl;
    return 0;
}
