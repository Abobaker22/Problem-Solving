#include <iostream>

using namespace std;

int main()
{
    char x ;
    cin >> x ;

    if(x >= 65 && x <= 90 ) // capital
        cout << char(x + 32) << endl;


    if(x >= 97 && x <= 122) // small
        cout << char(x - 32) << endl;



    return 0;
}

