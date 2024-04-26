#include <iostream>

using namespace std;

int main()
{
    int first_intersection , second_intersection;
    long long a , b , c , d ;
    cin >> a >> b >> c >> d ;

    if(c < a && d < a || c > b){
        cout << "-1" ;
        return 0;
    }


    if (c >= a && c <= b)
        first_intersection = c ;
    else if (a >= c && a <= d)
        first_intersection = a ;
    if (b >= c && b <= d)
        second_intersection = b ;
    else if (d >= a && d <= b)
        second_intersection = d ;

    cout << first_intersection << " " << second_intersection;


    return 0;
}
