#include <iostream>

using namespace std;

int main()
{
    long long power,z;
    cin >> power;
    do{
        cin >> z ;

        if(power >= z)
            cout << "Win" << '\n' ;

        else{
            cout << "Lose" << '\n' ;
            return 0;
        }

    }while(power >= z);


    return 0;
}
