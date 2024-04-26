#include <iostream>

using namespace std;

int main()
{
    int x , n , maxx;
    cin >> x >> n ;

    for(int i = 1 ; i <= x ; i++){
        if(x % i == 0 && n % i == 0){
            maxx = i;
        }
    }
    cout << maxx ;
    return 0;
}
