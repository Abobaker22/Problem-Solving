#include <iostream>

using namespace std;

int main()
{
    int x ,y ;
    cin >> x >> y ;
    char arr[x][y];

    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < y ; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < y ; j++){
            if(arr[i][j] == '.' && arr[i][j+1] == '.' && (j != y-1)){
                cout << "YES";
                return 0 ;
            }
            else if(arr[i][j] == '.' && arr[i+1][j] == '.' && (i != x-1)){
                cout << "YES";
                return 0 ;
            }
            else if(arr[i][j] == '.' && arr[i+1][j+1] == '.' && ( (j != y-1) && (i != x-1)) ){
                cout << "YES";
                return 0 ;
            }
            else if(arr[i][j] == '.' && arr[i+1][j-1] == '.' && ( (j != 0) && (i != x-1)) ){
                cout << "YES";
                return 0 ;
            }
        }
    }
    cout << "NO";
    return 0;
}
