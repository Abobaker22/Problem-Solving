#include <iostream>

using namespace std;

int main()
{
    int n ,m ,sum ,temp ,maxx ,minn;

    do{

        sum = 0 ;
        cin >> n >> m ;
        if(n <= 0 || m <= 0)
            return 0 ;
        maxx = n ;
        minn = m ;
        if(m > n){
            maxx = m ;
            minn = n ;
        }


        for(int i = minn ; i <= maxx ; i++){
            sum = sum + i ;
            cout << i << " ";
        }
        cout << "sum =" <<sum << endl;
    }while(n > 0 && m > 0);

    return 0;
}
