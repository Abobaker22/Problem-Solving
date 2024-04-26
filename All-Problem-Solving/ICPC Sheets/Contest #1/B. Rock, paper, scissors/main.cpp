#include <iostream>

using namespace std;

int main()
{
    char c1 , c2 ;
    cin >> c1 >> c2;


    if(c1 == c2){
         cout << "draw" ;
    }
    else if(c1 == 'R'){
        if(c2 == 'P'){
            cout << "p2";
        }
        else{
            cout << "p1";
        }
    }
    else if(c1 == 'P'){
        if(c2 == 'R'){
            cout << "p1";
        }
        else{
            cout << "p2";
        }
    }
    else if(c1 == 'S'){
        if(c2 == 'R'){
            cout << "p2";
        }
        else{
            cout << "p1";
        }
    }



    return 0;
}
