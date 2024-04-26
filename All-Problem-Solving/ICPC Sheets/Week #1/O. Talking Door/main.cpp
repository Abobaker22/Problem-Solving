#include <iostream>

using namespace std;

int main()
{
    long long x , ld;
    cin >> x ;
    ld = x % 10 ;

    if(x % 2 == 0){
        if(ld == 4){
            cout << "lucky even";
        }
        else{
            cout << "unlucky even";
        }
    }
    else{
        if(ld == 7){
            cout << "lucky odd";
        }
        else{
            cout << "unlucky odd";
        }

    }

    return 0;
}
