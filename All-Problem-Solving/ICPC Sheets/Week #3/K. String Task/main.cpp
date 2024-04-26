#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int szx ,szy;
    string x , y;
    cin >> x >> y ;

    szx = x.size();
    szy = y.size();

    sort(x.begin() , x.end());
    sort(y.begin() , y.end());

    if(x < y)
        cout << x ;
    else
        cout << y;


    return 0;
}


