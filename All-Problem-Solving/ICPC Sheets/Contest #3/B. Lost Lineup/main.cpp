#include <iostream>

using namespace std;

int main()
{
    int pos ;
    cin >> pos; // 4
    int no[pos-1] ,res[pos-1]; // 1 2 0

    for(int i = 0 ; i < pos-1 ; i++){
        cin >> no[i] ;
    }
    int j = 2;
    for(int i = 0 ; i < pos-1; i++){
        res[no[i]] = j ;
        j++;
    }

    cout << 1 << " ";

    for(int i = 0 ; i < pos-1 ; i++){
        cout << res[i] << ' ' ;
    }

    return 0;
}
