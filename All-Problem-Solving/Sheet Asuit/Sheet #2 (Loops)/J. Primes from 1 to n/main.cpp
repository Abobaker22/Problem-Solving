#include <iostream>

using namespace std;

int main()
{
    int n ,div ,counter;
    cin >> n; // 10

    for(int i= 2 ; i <= n ; i++){ // 2 -> 10
        counter = 0 ;
        for(int j = 1 ; j <= i ; j++){ // 2 -> 2
            if(i % j == 0){
                counter++;
            }
        }
        if(counter <= 2){
            cout << i << " " ;
        }
    }

    return 0;
}
