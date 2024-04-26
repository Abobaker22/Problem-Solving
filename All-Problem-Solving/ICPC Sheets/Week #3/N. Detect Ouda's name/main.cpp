#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sz = s.size();

    for(int i = 0 ; i < sz ; i++){
        if(s[i] == 'O' && s[i+1] == 'u' && s[i+2] == 'd' && s[i+3] == 'a'){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO" ;
    return 0;
}
