#include <iostream>

using namespace std;

int main()
{
    int n , i;
    cin >> n ;

    if(n == 1){
        cout << -1 ;
        return 0 ;
    }

    for(i = 1 ; i <= n ; i++){
        if(i % 2 == 0){
            cout<<i<<endl;
        }
    }
    return 0;
}
