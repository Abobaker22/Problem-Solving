#include <iostream>
#include <cmath>

using namespace std ;

int main() {
    int t , no;
    cin >> t >> no;
    char arr[t] ;
    int freq[2] = {0};
    for (int i = 0; i < t; ++i) {
        cin >> arr[i];
        if(arr[i] == '1'){
            freq[0] = 0;
        }
        else{
            freq[0]++;
            if((freq[0])*10 >= no){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
