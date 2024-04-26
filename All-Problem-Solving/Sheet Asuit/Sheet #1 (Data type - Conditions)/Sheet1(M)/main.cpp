#include <iostream>

using namespace std;

int main()
{

    char x ;
    cin >> x;


    if (x >= 48 && x < 65)
        cout << "IS DIGIT" << endl;
    else if (x >= 65 && x <= 90){
        cout << "ALPHA\n";
        cout << "IS CAPITAL";
    }else if (x >= 97){ //to 122

        cout << "ALPHA\n";
        cout << "IS SMALL";
    }

    return 0;
}
