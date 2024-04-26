#include <iostream>

using namespace std;

int main()
{
    int n ,x ,y , sum ,maxx ,minn;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        cin >> x >> y ;
        maxx = y ;
        minn = x ;
        if(x > y){
            maxx = x ;
            minn = y ;
        }
        sum = 0 ;
        for(int j = minn+1 ; j < maxx ; j++){
            if(j % 2 != 0){
                sum = sum + j;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
