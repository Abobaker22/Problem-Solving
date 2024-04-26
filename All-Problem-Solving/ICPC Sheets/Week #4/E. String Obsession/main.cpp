#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int freq[256] = {0} , co = 0;
    for (int i = 0; i < s.size(); ++i) {
        if(freq[s[i]] == 0){
            freq[s[i]]++;
            co++;
        }
    }
    cout << co ;

    return 0;
}
