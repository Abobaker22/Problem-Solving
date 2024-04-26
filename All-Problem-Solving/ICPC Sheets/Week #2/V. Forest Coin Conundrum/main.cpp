#include <iostream>

using namespace std;

int main()
{
    long long a , b;
    long long t ;
    cin >> t ;

    for(long long i = 0 ; i < t ; i++){
        cin >> a >> b ;

        if(a < b) swap(a,b);

        if((a+b) % 3 == 0 && a/2 <= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
