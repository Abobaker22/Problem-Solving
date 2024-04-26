#include <iostream>

using namespace std;

int main()
{
    int co = 1999 , x , n;
    while(true){
        cin >> x ;
        if(x != co){
            cout << "Wrong" << endl;
        }
        else{
            cout << "Correct" << endl;
            return 0;
        }
    }

    return 0;
}
