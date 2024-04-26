#include <iostream>

using namespace std;

int main()
{

    int t , co = 1;
    cin >> t;
    string s;
    cin >> s;

    for(int i =0 ; i < t ; i++){
        if(s[i] == s[i+1]){
            co++;
        }
        else{
            cout << co << s[i];
            co = 1;
        }

    }
//    char d ,c ;
//    int t , co = 1;
//    cin >> t ;
//    cin >> d ;
//
//    for(int i = 0 ; i < t-1 ; i++){
//
//        cin >> c;
//
//        if(d == c){
//            co++;
//            if(i == t-2){
//                cout << co << d;
//            }
//        }
//        else{
//            cout << co << d;
//            co = 1;
//        }
//        d = c;
//    } a solution tha have a logical problem

    return 0;
}
