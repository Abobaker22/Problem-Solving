#include <iostream>

using namespace std;

int main()
{
    int t , co = 1;
    cin >> t ;
    int arr[t];
    for(int i = 0 ; i < t ; i++){
        cin >> arr[i];
    }
    int res = arr[0];
    int index = 0 ;

    for(int i = 0 ; i < t ; i++){
        if(index+res >= t){
            cout << co ;
            return 0 ;
        }
        index = res + index; // 1 3
        res = arr[index]; // 2 3

        co++; // 2 3
    }

    return 0;
}
