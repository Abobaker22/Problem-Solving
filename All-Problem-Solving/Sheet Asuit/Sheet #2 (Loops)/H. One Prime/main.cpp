#include <iostream>

using namespace std;

int main()
{
    int x , div ,flag =0 ;
    cin >> x ;
    div = x / 2 ; //the closest number to divide by is the half of that number

    for (int i = 2 ; i <= div ; i++){
        if(x % i == 0){
            cout << "NO" ;
            flag = 1 ;
            break;
        }
    }

    if(flag == 0){
        cout << "YES" ;
    }

    return 0;
}







// i don't know why this code doesn't run
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int x , counter = 0 ;
//    cin >> x ;
//    if(x == 1){
//        cout << "NO" ;
//    }else{
//        for(int i = 1 ; i <= 10 ; i++){
//            if(x % i == 0){
//                counter++;
//            }
//        }
//        if(counter <= 2)
//            cout << "YES" ;
//        else
//            cout << "NO" ;
//    }
//
//    return 0;
//}
