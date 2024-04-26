#include <iostream>

using namespace std;

int main()
{
    long long a , b , c, sum;
    cin >> a >> b >> c;
    sum = a+b;

    if(sum >= c){
        cout << "Yes" ;
    }
    else
        cout << "No" ;
    return 0;
}
