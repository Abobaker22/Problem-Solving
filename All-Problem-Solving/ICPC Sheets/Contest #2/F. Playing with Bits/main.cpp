#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long dec = 0 , arr[100] = {0} , no , t , pos , bit;
    cin >> no >> t ;

    for(int i = 0 ; i < t ; i++){
        cin >> pos >> bit ;
        dec = 0;
        int j = 0 ;
        while(no > 0){
            arr[j] = no % 2;
            no /= 2;
            j++;
        }

        arr[pos] = bit;

        for(int b = 0 ; b < 100 ; b++){
            dec += pow(2,b)*arr[b];
        }
        cout << dec << endl ;
    }


//    for(int k = 0 ; k < 10; k++){
//        cout << arr[k] << " ";
//    }

    return 0;
}

