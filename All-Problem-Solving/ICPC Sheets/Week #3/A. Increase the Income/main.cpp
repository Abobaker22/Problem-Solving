#include <iostream>

using namespace std;

int main()
{
    long long t , add;
    cin >> t;

    long long price[t];

    for(int i = 0 ; i < t ; i++){
        cin >> price[i];
    }
    cin >> add;
    for(int i = 0 ; i < t ; i++){
        cout << price[i]+add << " " ;
    }
    return 0;
}
