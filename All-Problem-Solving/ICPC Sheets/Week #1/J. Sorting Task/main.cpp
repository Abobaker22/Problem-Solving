#include <iostream>

using namespace std;

int main()
{
    long long a ,b ,c , maxx , minn , mid;
    cin >> a >> b >> c ;

    if(a >= b && a >= c){
        maxx = a;
        if(b >= c){
            minn = c;
            mid = b ;
        }
        else{
            minn = b;
            mid = c ;
        }
    }

    else if(b >= a && b >= c){
        maxx = b;
        if(a >= c){
            minn = c;
            mid = a ;
        }
        else{
            minn = a;
            mid = c ;
        }
    }

    else{
        maxx= c ;
        if(a >= b){
            minn = b;
            mid = a ;
        }
        else{
            minn = a;
            mid = b ;
        }
    }
    cout << minn << " " << mid << " " << maxx << endl;
    cout << a << " " << b << " " << c ;
    return 0;
}
