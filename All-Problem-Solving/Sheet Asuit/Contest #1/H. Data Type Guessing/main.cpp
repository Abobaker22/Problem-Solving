#include <iostream>

using namespace std;

int main()
{
    long long n , k , a , temp;
    long double res ;
    cin >> n >> k >> a ;
    res = (n*k)/(float)a ;
    temp = res;

    if (res/temp != 1)
        cout << "double" << endl;
    else if (res <= 2147483647 && res >= -2147483647)
        cout << "int" << endl;
    else
        cout << "long long" << endl;

    return 0;
}
