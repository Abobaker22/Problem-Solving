#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[100000] , i = 0 , sz = 0;
    fill(arr, arr + 100000, 1);

    do{
        cin >> arr[i];
        i++;
        sz++;
    }while(arr[i-1] != 0);

    reverse(arr ,arr+sz);
    for(int i = 0 ; i < sz ; i++)
        cout << arr[i] << ' ';

    return 0;
}
