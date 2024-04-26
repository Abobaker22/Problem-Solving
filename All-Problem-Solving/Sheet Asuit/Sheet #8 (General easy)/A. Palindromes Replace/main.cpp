#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s ;
    cin >> s ;
    int size = s.size();

    for (int i = 0; i < size; ++i) {
        if(s[i] == '?'){
            for (int j = 0; j < size; ++j) {
                if(i+j == size-1){
                    if(s[j] == '?')
                        s[i] = 'a';
                    else
                        s[i] = s[j];
                }
            }
        }
    }

    string rev = s;
    reverse(rev.begin(),rev.end());

    if(s == rev){
        cout << s ;
    }
    else{
        cout << -1 ;
    }
    return 0;
}
