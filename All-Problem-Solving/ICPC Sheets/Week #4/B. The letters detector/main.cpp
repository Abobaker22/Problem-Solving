#include <iostream>

using namespace std ;

int main() {
    string s ;
    cin >> s ;
    int freq[256] = {0} , maxx = 0;
    for (int i = 0; i < s.size(); ++i) {
        freq[s[i]]++;
    }
    for (int i = 0; i < 256; ++i) {
        if(freq[i] != 0){
            if(freq[i] > freq[maxx])
                maxx = i;
        }
        else if(freq[i] == freq[maxx]){
            if(i < maxx)
                maxx = i ;
        }
    }
    cout << char(maxx) ;
    return 0;
}
