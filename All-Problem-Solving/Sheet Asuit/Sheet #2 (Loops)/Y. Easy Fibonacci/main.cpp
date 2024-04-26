#include <iostream>

using namespace std;

int main()
{
    int n , x = 0, y = 1 ,temp;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++){
        if(i == 1)
            cout << x << " ";
        else if(i == 2)
            cout << y << " ";
        else{
            temp = y;
            y = x+y ;
            x = temp;
            cout << y << " ";
        }
    }

    return 0;
}
