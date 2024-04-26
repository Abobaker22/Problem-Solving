#include <iostream>
using namespace std;
int main() {
    int no , tmp , digit ,cnt1 = 0 , cnt2 = 0;
    cin >> no ;
    tmp = no ;

    while(tmp != 0){
        cnt1++;
        digit = tmp % 10 ;
        tmp /= 10 ;
        if(digit == 4 || digit == 7)
            cnt2++;
        else
            break;
    }
    if(cnt1 == cnt2) {
        cout << "YES";
        return 0;
    }

    int arr[14] = {4,7,44,47,74,77,444,777,447,774,474,744,747,477};
    for (int i = 0; i < 14; ++i) {
        if(no % arr[i] == 0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
