#include <iostream>

using namespace std;

int main()
{
    long long age , years = 0 , months = 0 , days = 0;
    cin >> age ;


    years = age / 365;
    months = (age -(years * 365)) / 30;
    days = (age -(years * 365))-(months * 30);


    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
