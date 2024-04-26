#include <iostream>

using namespace std;

int main()
{
    int x ,result;
    cin >> x ; // 9999 >= x > 999

    result = x / 1000 ;

    if (result % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;
    return 0;
}
