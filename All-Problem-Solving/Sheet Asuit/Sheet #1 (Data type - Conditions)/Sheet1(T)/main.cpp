#include <iostream>

using namespace std;

int main()
{
    long long a , b , c ;  //-199320 -83881 -638945   -> c a b
    int MAX , MIN , DEF;

    cin >> a >> b >> c ;

    if (a >= b && a >= c){
        MAX = a;
        if(b >= c){
            DEF = b;
            MIN = c;
        }else{
            DEF = c;
            MIN = b;
        }
    }

    if (b >= a &&  b >= c){
        MAX = b;
        if(a >= c){
            DEF = a;
            MIN = c;
        }else{
            DEF = c;
            MIN = a;
        }
    }

    if (c >= a &&  c >= b){
        MAX = c;
        if(a >= b){
            DEF = a;
            MIN = b;
        }else{
            DEF = b;
            MIN = a;
        }
    }

    cout << MIN << endl << DEF << endl << MAX << endl ;
    cout << endl << a << endl << b << endl << c << endl ;

    return 0;
}
