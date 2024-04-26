#include <iostream>

using namespace std;

int main()
{
    long long years , days , cabisa = 0;
    cin >> years;



    if(years <= 4){
        days = years * 365;
        cout << days;
    }
    else{
        days = years * 365;
        cabisa = years / 4;
        cout << days + cabisa;
    }

    return 0;
}
