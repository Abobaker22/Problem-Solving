#include <iostream>

using namespace std;

int main()
{
    int t , no ;
    char c ;
    cin >> t;

    for(int i = 0 ; i < t ; i++){
        cin >> no >> c;
        for(int j = 0 ; j < no ; j++){
            cout << c ;
        }
    }

    return 0;
}
