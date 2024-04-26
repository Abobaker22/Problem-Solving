#include <iostream>

using namespace std;

int main()
{
    string x;
    cin >> x ;

    long long sz = x.size();

    if((x[sz-1]-'0') % 2 == 0)
        cout << "Even";
    else
        cout << "Odd" << endl;

    return 0;
}
