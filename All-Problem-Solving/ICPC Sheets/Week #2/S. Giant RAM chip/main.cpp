#include <iostream>

using namespace std;

int main()
{
    double slope , tmp ;
    long long co = 0 , x[100009] , y[100009] , t ; // slope = (y2-y1)/(x2-x1)
    cin >> t ;


    for(long long i = 0 ; i < t ; i++){
        cin >> x[i] >> y[i];
    }

    for(int i =0 ;i < t ; i++){
        if(i+2 < t){
            slope = (y[i+1] - y[i]) /  (double)(x[i+1] - x[i]);
            tmp = (y[i+2] - y[i+1]) /  (double)(x[i+2] - x[i+1]);
            if(slope == tmp)
                co++;
            else{
                cout << "NO";
                return 0;
            }
        }
        else{
            break;
        }
    }

    if(co == t-2)
        cout << "YES";




    return 0;
}
