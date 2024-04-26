#include <iostream>

using namespace std;

int main()
{
    int x , y ;
    cin >> x >> y;
    int arr[x][y], maxx = -100000000;

    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < y ; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < x ; i++){
        int sum = 0;
        for(int j = 0 ; j < y ; j++){
            sum += arr[i][j];
        }
        if(sum >= maxx)
            maxx = sum ;
    }
    cout << maxx ;

    return 0;
}
