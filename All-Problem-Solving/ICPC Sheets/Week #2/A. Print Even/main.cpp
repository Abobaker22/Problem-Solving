#include <iostream>

using namespace std;

int main(){
    int m,n;
    cin >> m >> n ;
    if(m > n){
        int tmp =m;
        m = n;
        n = tmp;
    }
    for(int i=m;i<=n;i++){
        if(i % 2 == 0)
            cout << i <<" ";
    }
    return 0;
}
