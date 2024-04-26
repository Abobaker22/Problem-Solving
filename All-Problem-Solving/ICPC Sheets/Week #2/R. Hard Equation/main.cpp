#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long t , n; // 2x^2 +3y^3 + +4z^4 = n - w
    cin >> t ;

    for(long long i = 0 ; i < t ; i++){
        cin >> n;

        long long x , y , z , co = 0;
        long long a = sqrt(n/2) , b = cbrt(n/3) , c =sqrt(sqrt(n/4));

        for(long long j = 0; j <= a ; j++){
            x = j*j*2;
            for(long long k = 0 ; k <= b ; k++){
                y = k*k*k*3;
                for(long long l = 0 ; l <= c ; l++){
                    z = l*l*l*l*4;
                    if(x+y+z <= n)
                        co++;
                    else
                        break;
                }
            }
        }
        cout << co << '\n' ;
    }

    return 0;
}
