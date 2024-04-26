#include <iostream>

using namespace std;

int main()
{
    int n , x , MAX = 0;
    cin >> n ;

    for (int i = 0 ; i < n ; i++){
        cin >> x ;
        if (x >= MAX)
            MAX = x ;
    }
    cout << MAX;
    return 0;
}
