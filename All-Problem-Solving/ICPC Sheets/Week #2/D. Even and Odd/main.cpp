#include <iostream>

using namespace std;

int main()
{
    int x , size1 , max_even = 0 , min_odd = 1000000000 ;
    cin >> size1;

    for(int i = 0 ; i < size1 ; i++){
        cin >> x;
        if(x%2 == 0){
            if(x >= max_even){
                max_even = x ;
            }
        }
        else{
            if(x <= min_odd){
                min_odd = x ;
            }
        }
    }
    cout << max_even << ' ' << min_odd << endl;
    return 0;
}
