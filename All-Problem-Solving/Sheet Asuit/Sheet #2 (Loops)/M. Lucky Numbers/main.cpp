#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n1 , n2 , flag = 0;
    cin >> n1 >> n2;

    int arr[100000] = {0} ;
    arr[4] = 1;
    arr[7] = 1;
    arr[44] = 1;
    arr[47] = 1;
    arr[74] = 1;
    arr[77] = 1;
    arr[444] = 1;
    arr[477] = 1;
    arr[474] = 1;
    arr[447] = 1;
    arr[777] = 1;
    arr[747] = 1;
    arr[774] = 1;
    arr[744] = 1;
    arr[4444] = 1;
    arr[4777] = 1;
    arr[4774] = 1;
    arr[4744] = 1;
    arr[4477] = 1;
    arr[4447] = 1;
    arr[4474] = 1;
    arr[4747] = 1;
    arr[7444] = 1;
    arr[7477] = 1;
    arr[7447] = 1;
    arr[7474] = 1;
    arr[7744] = 1;
    arr[7747] = 1;
    arr[7774] = 1;
    arr[7777] = 1;

    for(int i = n1 ; i <= n2 ; i++){
        if(arr[i] == 1){
            cout << i << " ";
            flag = 1 ;
        }
    }
    if(flag == 0)
        cout << -1 ;
    return 0;
}
