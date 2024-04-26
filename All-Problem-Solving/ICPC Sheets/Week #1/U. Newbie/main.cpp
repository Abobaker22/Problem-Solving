#include <iostream>

using namespace std;

int main()
{
    long long n , k , a , res;
    cin >> n >> k >> a ;

    res = (-n+k) * a;

    if(res % 2 != 0)
        cout << "double";
    else if(res <= 2147483647 && res >= -2147483648)
        cout << "int";
    else
        cout << "long long";

    return 0;
}
