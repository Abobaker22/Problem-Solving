#include <iostream>

using namespace std;

int main()
{
    char s ;
    int a , b ;
    cin >> a >> s >> b ;

    if (s == '>'){
        if(a > b)
            cout << "Right";
        else
            cout << "Wrong";
    }
    else if (s == '<'){
        if(a < b)
            cout << "Right";
        else
            cout << "Wrong";
    }
    else if (s == '='){
        if(a == b)
            cout << "Right";
        else
            cout << "Wrong";
    }


    return 0;
}
