#include <iostream>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    char wo[t] ;
    int pfx[3][t+1] = {0}; // can't make 2d array equal to 0
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < t+1; ++j) {
            pfx[i][j] = 0 ;
        }
    }
    for (int i = 0; i < t; ++i) {
        cin >> wo[i];
        if(i == 0){
            if (wo[i] == 'a'){
                pfx[0][i]++;
            }
            else if (wo[i] == 'l'){
                pfx[1][i]++;
            }
            else if (wo[i] == 'i'){
                pfx[2][i]++;
            }
        }
        else{
            if (wo[i] == 'a'){
                pfx[0][i]= pfx[0][i-1]+1;
                pfx[1][i] = pfx[1][i-1];
                pfx[2][i] = pfx[2][i-1];
            }
            else if (wo[i] == 'l'){
                pfx[1][i]= pfx[1][i-1]+1;
                pfx[0][i] = pfx[0][i-1];
                pfx[2][i] = pfx[2][i-1];
            }
            else if (wo[i] == 'i'){
                pfx[2][i] = pfx[2][i-1]+1;
                pfx[0][i] = pfx[0][i-1];
                pfx[1][i] = pfx[1][i-1];
            }
            else{
                pfx[0][i] = pfx[0][i-1];
                pfx[1][i] = pfx[1][i-1];
                pfx[2][i] = pfx[2][i-1];
            }
        }
    }

    int q , l , r , res[3] ,cnt = 0;
    cin >> q ;
    for (int i = 0; i < q; ++i) {
        cin >> l >> r ;
        if (l == 1) {
            for (int j = 0; j < 3; ++j) {
                res[j] = pfx[j][r - 1];
            }
        }
        else{
            for (int j = 0; j < 3; ++j) {
                res[j] = pfx[j][r-1] - pfx[j][l-1-1] ;
            }
        }
        if(res[0] > 0 && res[1] > 0 && res[2] > 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n' ;
    }

    return 0;
}
