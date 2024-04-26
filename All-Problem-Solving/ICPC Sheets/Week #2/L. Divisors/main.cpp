#include <iostream>

using namespace std;

int main()
{
    int n , m ;
    cin >> n >> m;

    for(int i = 1 ; i <= m ; i++){
        if(n % i == 0){
            cout << i << " is a divisor of " << n << '\n';
        }
    }
    return 0;
}
