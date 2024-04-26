#include <iostream>

using namespace std;

int main()
{
    int a , b;
    double c;
    char s , q;
    cin >> a >> s >> b >> q >> c;

    if (s == '+'){
        if (a + b == c){
            cout << "Yes" << endl;
        }else
            cout << a + b;

    }

    if (s == '-'){
        if (a - b == c){
            cout << "Yes" << endl;
        }else
            cout << a - b;

    }

    if (s == '*'){
        if (a * b == c){
            cout << "Yes" << endl;
        }else
            cout << a * b;

    }

    return 0;
}
