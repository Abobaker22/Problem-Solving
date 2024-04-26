#include <iostream>

using namespace std;

int main()
{
    char c ,res;
    cin >> c ;

    if(c >= 97)
        res = c - 32;
    else
        res = c + 32;
    cout << res;

    return 0;
}
