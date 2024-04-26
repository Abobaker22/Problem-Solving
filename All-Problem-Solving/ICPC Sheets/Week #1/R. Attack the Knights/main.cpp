#include <iostream>

using namespace std;

int main()
{
    int x1,y1,x2,y2 ;
    cin >> x1>>y1>>x2>>y2;

    if((x2 == x1 && y2 == y1))
        cout << "Yes";
    else if((x2 == x1-1 && y2 == y1+2) || (x2 == x1+2 && y2 == y1-1))
        cout <<"Yes";
    else if((x2 == x1+2 && y2 == y1+1) || (x2 == x1+1 && y2 == y1+2))
        cout <<"Yes";
    else if((x2 == x1+1 && y2 == y1-2) || (x2 == x1-2 && y2 == y1+1))
        cout <<"Yes";
    else if((x2 == x1-2 && y2 == y1-1) || (x2 == x1-1 && y2 == y1-2))
        cout <<"Yes";
    else
        cout << "No";
    return 0;
}
