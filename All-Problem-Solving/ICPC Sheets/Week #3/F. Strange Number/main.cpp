#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long t , p , pro = 1;
    cin >> t;
    string arr ;
    cin >> arr ;

    for(long long i = 0 ; i < t ; i++){
        p = (arr[i] - '0');
        pro = (pro * p) % 1000000007;
    }

    cout << pro ;

    return 0;
}
