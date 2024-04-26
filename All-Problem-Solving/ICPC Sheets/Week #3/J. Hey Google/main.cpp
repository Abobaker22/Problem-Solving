#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s ;
    getline(cin , s);

    long long sz = s.size();

    for(int i = 0 ; i < sz ; i++){
        if(s[i] != '-')
            cout << s[i];
        else
            return 0 ;
    }

    return 0;
}
