#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    cin >> s;

    int sz = s.length();

    for(int i = 0 ; i < sz ; i++){
        cout << s[i] << ' ';
    }

    return 0;
}
