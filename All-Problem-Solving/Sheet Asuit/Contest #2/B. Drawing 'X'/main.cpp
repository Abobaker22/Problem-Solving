#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(i == ceil(n/2.0) && j == ceil(n/2.0)){
                    cout << "X";
                }
                else if(i == j){
                    cout << "\\" ;
                }
                else if(i+j == n+1){
                    cout << "/" ;
                }
                else
                    cout << "*";

            }
            cout << "\n";
        }

    return 0;
}
