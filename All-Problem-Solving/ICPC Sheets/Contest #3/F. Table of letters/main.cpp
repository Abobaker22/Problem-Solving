#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int x , y , index;
    cin >> x >> y >> index ;
    char arr[x][y] , res_ho[x][y] , res_ver[y][x];

    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < y ; j++){
            cin >> arr[i][j];
        }
    }

    string res[x+y];

    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < y ; j++){
            res[i] += arr[i][j];
        }
    }

    int k = x;
    for(int i = 0 ; i < y ; i++){
        for(int j = 0 ; j < x ; j++){
            res[k] += arr[j][i];
        }
        k++;
    }



    // Bubble Sort
    for (int i = 0; i < x + y - 1; i++)
    {
        for (int j = 0; j < x + y - i - 1; j++)
        {
            if (res[j] > res[j + 1])
            {
                swap(res[j], res[j + 1]);
            }
        }
    }

    cout << res[index-1];

    return 0;
}
