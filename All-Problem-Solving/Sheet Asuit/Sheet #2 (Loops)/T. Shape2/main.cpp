#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;

    for(int i = 1 ; i <= n ; i++){ // for number of lines
       for(int k = i ; k < n ; k++){ // for spaces
        cout << " ";
       }

       for(int j = 2 ; j <= i*2 ;j++){ // for *
        cout << "*";
       }

       cout << endl;
    }

    return 0;
}
