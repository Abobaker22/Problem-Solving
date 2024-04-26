#include <iostream>

using namespace std;

int main()
{
    long long n , x , b ,c , co = 0;
    cin >> n >> x;

    cin >> c ;

    for(int i = 0 ; i < n-1 ; i++){
        cin >> b;
        if(c + x >= b){
            co++;
        }
        else{
            cout << "NO";
            return 0;
        }
        c = b ;
    }
    if(co == n-1){
        cout << "YES";
    }

    return 0;
}
