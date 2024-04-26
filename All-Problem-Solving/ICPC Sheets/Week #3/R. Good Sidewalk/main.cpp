#include <iostream>

using namespace std;

int main()
{
    int t ;
    string s;
    cin >> t;

    for(int i = 0 ; i < t ; i++){
        cin >> s ;
        int sz = s.size() , flag = 0;
        for(int j = 0 ; j < sz ; j++){
            if(s[j] == s[j+1]){
                cout << "Bad" << '\n' ;
                flag = 1 ;
            }
            if(flag)
                break;
        }
        if(!flag)
            cout << "Good" << '\n' ;
    }

    return 0;
}
