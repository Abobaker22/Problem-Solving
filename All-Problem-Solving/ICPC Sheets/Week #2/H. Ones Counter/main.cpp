#include <iostream>

using namespace std;

int main()
{
    long long x1;
    int t , x2 , rem;
    cin >> t;

    for(int i = 0 ; i < t ; i++){
        cin >> x1 >> x2 ;
        int co = 0;
        while(x1 > 0){
            rem = x1 % 2;

            if(rem == 1)
                co++;

            x1 /= 2;
        }
        if(co == x2)
            cout << "YES" << '\n' ;
        else
            cout << "NO" << '\n' ;
    }

    return 0;
}
