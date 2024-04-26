#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long x ;
    int t , ones , sum;
    cin >> t;

    for(int i = 1 ; i <= t ; i++){
        cin >> x ;
        ones = 0 ;
        while(x > 0){
            if(x % 2 == 1){
                ones++;
            }
            x /= 2;
        }
        sum = 0;
        for(int j = 0 ; j < ones ; j++){
            sum += 1 * pow(2,j);
        }
        cout << sum << endl;

    }

    return 0;
}
