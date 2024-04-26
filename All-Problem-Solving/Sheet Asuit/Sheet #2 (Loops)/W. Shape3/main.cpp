#include <iostream>

using namespace std;

int main()
{
    int n , counter = 1;
    cin >> n ;

    for(int i = 1 ; i <= n ; i++){ // for lines
        for(int j = n-1 ; j >= i ; j--){ // for spaces
            cout << " ";
        }

        for(int k = 2 ; k <= i*2 ; k++){ // for *
            cout << "*" ;
        }
        cout << endl ;
    }



    for(int i = 1 ; i <= n ; i++){ // for lines reversed

        for(int j = 2 ; j <= i ; j++){
            cout << " ";
        }

        for(int k = n*2-1 ; k >= counter ; k--){
            cout << "*" ;
        }
        counter+=2;

        cout << endl ;
    }

    return 0;
}
