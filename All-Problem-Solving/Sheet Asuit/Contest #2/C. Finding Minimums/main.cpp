#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long x , minn = pow(10,9);
    int no , gr , flag = 1,co;
    cin >> no >> gr;

    for(int i = 1 ; i <= no ; i++){
        cin >> x;
        if(flag){
            minn = x;
            flag = 0;
            co = 0;
        }
        else{
            if(x <= minn){
                minn = x;

            }
        }
        co++;

        if(gr == co || i == no){
            cout << minn <<"\n";
            flag = 1;
        }
    }
    return 0;
}

//    int pl = gr;
//    for(int i = 1 ; i <= no ; i++){
//        cin >> x;
//        if(x <= minn){
//            minn = x;
//        }
//        if(i == gr){
//            cout << minn << endl;
//            minn = pow(10,9);
//            gr+=pl;
//            if(gr > no){
//                gr = no;
//            }
//        }
//    }
