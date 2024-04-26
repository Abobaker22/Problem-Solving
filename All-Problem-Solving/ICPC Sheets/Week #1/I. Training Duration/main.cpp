#include <iostream>

using namespace std;

int main()
{
    long long x, days = 0 , years = 0 , months = 0 ;
    cin >> x ;
    if(x >= 365){
        years = x / 365 ;
        x = x % 365 ;
    }
    if(x >= 30 ){
        months = x / 30 ;
        x = x % 30 ;
    }
    days = x;

    cout << years << " years" << endl;
    cout << months << " months" <<  endl  ;
    cout << days << " days" <<  endl;

    return 0;
}
