#include <iostream>
using namespace std;

int main() {
    string s ,t ;
    cin >> s >> t;
    int no_of_instructions = t.size() ,sz = s.size() ,pos = 1;

    for (int j = 0; j < no_of_instructions; ++j) {
        if(s[pos-1] == t[j]){
            pos++;
        }
    }

    cout << pos ;
    return 0;
}

