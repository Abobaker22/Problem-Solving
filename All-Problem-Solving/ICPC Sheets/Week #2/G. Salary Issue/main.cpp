#include <iostream>

using namespace std;

int main()
{
    int x , m ,n;
    cin >> x >> n >> m;
    int maxx1 = 0 , maxx2 = 0;

    for(int i = 1 ; i <= n ; i++){
        if(x % i == 0 && n % i == 0){
            if(i >= maxx1){
                maxx1 = i ;
            }
        }
    }

    for(int i = 1 ; i <= m ; i++){
        if(x % i == 0 && m % i == 0){
            if(i >= maxx2){
                maxx2 = i ;
            }
        }
    }

    if(maxx1 >= maxx2){
        cout << maxx1*100;
    }
    else
         cout << maxx2*100;

    return 0;
}
