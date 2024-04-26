#include <iostream>

using namespace std;

int main()
{
    long long n ,sum = 0;
    cin >> n;

    sum = (n*(n+1))/2; // so we will use this formula

//    for(int i = 1 ; i <= n ; i++){
//        //sum+=i;     //this exceed the time limit
//    }
    cout << sum << endl;
    return 0;
}
