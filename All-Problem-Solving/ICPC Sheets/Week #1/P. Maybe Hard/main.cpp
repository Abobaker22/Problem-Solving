#include <iostream>

using namespace std;

int main()
{
    long long maxx, minn ,a , b , x , co = 0 , temp , div;
    cin >> a >> b >> x;

    if(a > b){
        maxx = a;
        minn = b;
    }
    else{
        maxx = b;
        minn = a;
    }
//    if(a > b){   // this code doesn't work because it passes the limit of time
//        temp = b;
//        b = a;
//        a = temp;
//    }
//    for(int i = a ; i <= b ; i++){
//        if(i % x == 0){
//            co++;
//        }
//    }
//    cout << co;

    div = (maxx / x) - ((minn - 1) / x);
    cout << div ;

    return 0;
}
