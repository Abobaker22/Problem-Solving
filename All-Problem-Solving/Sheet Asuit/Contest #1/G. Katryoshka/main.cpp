#include <iostream>

using namespace std;

int main()
{
    long long e , m , b , kat = 0 ;
    cin >> e >> m >> b ;

    if(e == 0 || b == 0)
        cout << 0 ;
    else{
        if ((m >= e && m >= b) || (m >= e && m < b) || (m < e && m >= b)){
            kat = min(e , b);
            cout << kat;
        }else if (m < b && m < e){
            kat = m ;
            e -= m ;
            b -= m ;
            kat += min(e/2 , b);
            cout << kat;
        }
    }


//    for(int i = 1 ; i <= e ; ){  // this code works but it takes more than one second with larger inputs so it can't be a good solution
//
//        if (e >= 1 && m >=1 && b >= 1){
//            kat++;
//            e--;
//            m--;
//            b--;
//        }else
//            break;
//    }
//
//    for(int j = 1 ; j <= e ; ){
//        if (e >= 2 && b >= 1){
//            kat++;
//            e-=2;
//            b--;
//        }else
//            break;
//    }
//
//    for(int k = 1 ; k <= e ; ){
//        if(e >= 2 && m >=1 && b >= 1){
//            kat++;
//            e-=2;
//            m--;
//            b--;
//        }else
//            break;
//    cout << kat ;
//    }

//    while (e != 0 && b !=0){ // this can't work also because of the time
//        if (e >= 1 && m >=1 && b >= 1){
//                kat++;
//                e--;
//                m--;
//                b--;
//        }else if (e >= 2 && b >= 1){
//            kat++;
//            e-=2;
//            b--;
//        }else if(e >= 2 && m >=1 && b >= 1){
//            kat++;
//            e-=2;
//            m--;
//            b--;
//        }else
//            break;
//    }
//    cout << kat ;

    return 0;
}
