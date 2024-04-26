#include <iostream>

using namespace std;

int main(){
    int m,n,counter = 0;
    cin >> m >> n ;
    if(m > n){
        int tmp =m;
        m = n;
        n = tmp;
    }
    for(int i=m;i<=n;i++){
        int flag = 0;
        for(int k = i ; k > 0 ; k/=10){
            int d = k % 10;
            if(d == 7 || d == 4){
                flag = 1;
            }
            else {
                flag = 0;
                break;
            }
        }
        if(flag){
            cout << i <<" ";
            counter++;
        }
    }
    if (counter == 0)
        cout << -1 << endl;
    return 0;
}
