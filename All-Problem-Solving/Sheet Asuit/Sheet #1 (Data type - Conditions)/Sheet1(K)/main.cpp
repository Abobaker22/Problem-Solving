#include <iostream>

using namespace std;

int main()
{
    int a ,b, c , MIN , MAX;
    cin >> a >> b >> c ;

    //MIN
    if (a <= b && a <= c)
        MIN = a;
    else if (b <= a && b <= c)
        MIN = b;
    else
        MIN = c;

    // MAX
    if (a >= b && a >= c)
        MAX = a;
    else if (b >= a && b >= c)
        MAX = b;
    else
        MAX = c;


    cout << MIN << " " << MAX;


    return 0;
}
