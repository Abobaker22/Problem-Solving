#include <iostream>

using namespace std;

int main()
{
    double x ;
    cin >> x ;

    if (x /(int)x == 1){
        cout << "int " << x ;
    }
    else
        cout << "float " << (int)x << " " << x - (int)x;
    return 0;
}
