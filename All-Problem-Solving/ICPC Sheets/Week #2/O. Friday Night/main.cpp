#include <iostream>
#include <string>

using namespace std;

int main()
{

    int t , co = 0;
    cin >> t ;
    int x = 0 ;
    for(int i = 0 ; i < t ; i++){

        char c ;
        cin >> c ;
        x *= 10 ;
        x += c - '0';

        if(x % 4 == 0)
            co++;
    }

    cout << co;

    return 0;
}
