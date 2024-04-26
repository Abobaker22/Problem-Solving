#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string s;
    getline(cin , s);
    int sz = s.size();


    for(int i = 0 ; i < sz ; i++){
       if(s[i] >= 97)
            s[i] = toupper(s[i]);
       else
            s[i] = tolower(s[i]);
    }
    cout << s ;
    return 0;
}
