#include <iostream>

using namespace std;

int main()
{
    char c ;
    int n , x;
    cin >> c >> n ;

    for(int i = 0 ; i < n ; i++){
        cin >> x ;
        for(int j = 0 ; j < x ; j++)
            cout << c;
        cout << endl;
    }

    return 0;
}
