#include <iostream>

using namespace std;

int main()
{
    int n , fd , sd ;
    cin >> n ;
    fd = n % 10;
    sd = n / 10;

    if(sd == 0 || (fd % sd != 0 && sd % fd != 0))
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
