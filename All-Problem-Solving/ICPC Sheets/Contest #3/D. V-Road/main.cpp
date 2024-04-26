#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int sz ;
    cin >> sz ;
    long long arr[sz][sz] , sum = 0;

    for(int i = 0 ; i < sz ; i++){
        for(int j = 0 ; j < sz ; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < sz ; i++){
        for(int j = 0 ; j < sz ; j++){
            if(i == j && (i < sz/2.0))
                sum += arr[i][j];
            else if(i < j && i+j == sz-1)
                sum += arr[i][j];
        }
    }
    cout << sum << endl;
    return 0;
}
