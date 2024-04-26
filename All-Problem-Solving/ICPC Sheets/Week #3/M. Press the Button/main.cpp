#include <iostream>

using namespace std;

int main()
{
    int t ,q ,arr[10] ,no;
    cin >> t;


    for(int i = 0 ; i < t ; i ++){
        cin >> q;
        for(int j = 0 ; j < 10 ; j++)
            cin >> arr[j] ;
        int index = 0;
        while(q > 0){
            q--;
            no = arr[index];
            index = no;

        }
        cout << no << '\n' ;
    }

    return 0;
}
