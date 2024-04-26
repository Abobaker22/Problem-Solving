#include <iostream>

using namespace std;

int main()
{
    long long fi,la,n,s;
    int t ;
    cin >> t ;

    for(int i = 1; i<= t;i++){
        n = s = 0;
        cin >> fi >> la;
        if(fi > la){
            long long temp = fi;
            fi = la;
            la = temp;
        }
        n = la - fi + 1;
        s = n/2.0 * (fi + la);
        cout << s << endl;
    }

    return 0;
}
