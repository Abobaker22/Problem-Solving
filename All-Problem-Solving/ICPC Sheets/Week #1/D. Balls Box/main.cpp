#include <iostream>

using namespace std;

int main()
{
    long long x , a ,b ;
    cin >> a >> b >> x ; // 8 , 5 , 4

    if ((a % x == 0 || x % a == 0) && (b % x != 0 && x % b != 0)) {
        cout << "Ouda" << endl;
    } else if ((b % x == 0 || x % b == 0) && (a % x != 0 && x % a != 0)) {
        cout << "Gom3a" << endl;
    } else {
        cout << "Draw" << endl;
    }
    return 0;
}



// or

//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    long long x , a ,b ;
//    cin >> a >> b >> x ;
//
//    if((x % a == 0 || a % x == 0) && (x % b == 0 || b % x == 0)){
//        cout << "Draw";
//    }
//    else if(x % b == 0 || b % x == 0){
//        cout << "Gom3a";
//    }
//    else if((x % a == 0 || a % x == 0))
//        cout << "Ouda" ;
//    else
//        cout << "Draw";
//
//    return 0;
//}
