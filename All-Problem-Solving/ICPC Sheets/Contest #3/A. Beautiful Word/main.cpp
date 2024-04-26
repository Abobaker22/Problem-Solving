#include <iostream>

using namespace std;

int main()
{
    string s ;
    cin >> s;
    int sz = s.size();
    if(s[0] == 'L' && s[sz-1] == 'L'){
        cout << "YES" ;
    }
    else
        cout << "NO";

    return 0;
}
