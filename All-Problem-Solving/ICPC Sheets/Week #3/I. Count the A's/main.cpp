#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long co = 0 , sz;
    string s ;
    cin >> s ;

    sz = s.size();

    for(int i = 0 ; i < sz ; i++){
        if(s[i] == 'a' || s[i] == 'A')
            co++;
    }
    cout << co ;
    return 0;
}
