#include <iostream>

using namespace std;

int main()
{
    int n , a , b , fd , sd , td , fod , fid ;
    long long  sum = 0;
    cin >> n >> a >> b ;

    for(int i = 1 ; i <= n ; i++){
        if(i < 10 && i >= a && i <= b){
            sum += i;
        }
        else {
            int num = i ;
            int mysum = 0;

            while(num){
                int digit = num % 10;
                mysum += digit;
                num /= 10;
            }
            if(mysum >= a && mysum <= b){
                sum+=i;
            }
        }
    }
    cout << sum ;
    return 0;
}
