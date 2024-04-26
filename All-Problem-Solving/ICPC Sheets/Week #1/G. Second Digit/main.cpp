#include <iostream>

using namespace std;

int main()
{
    int x , s;
    cin >> x;
    s = (x/100)%10;

    if(s % 2 == 0){
        cout << "EVEN";
    }
    else
        cout << "ODD";


    return 0;
}
