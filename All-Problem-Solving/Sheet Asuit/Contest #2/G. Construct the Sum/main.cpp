#include <iostream>

using namespace std;

long long res[1000000];

int main()
{
    long long t , n , s , cou = 0;
    cin >> t ;
    for(long long i = 1 ; i <= t ; i++){
        cin >> n >> s;
        if(n * (n+1) / 2 < s){
            cout << -1 << endl;
        }
        else{
            cou = 0;
            long long sum =0;
            for(long long k = n ; k >= 1 ; k--){
                if(sum + k <= s){
                    sum += k;
                    res[cou] = k;
                    cou++ ;
                }
                if(sum == s){
                    break;
                }
            }
            for(long long q = 0; q < cou ; q++){
                cout << res[q] << " ";
            }
            cout << '\n';
        }

    }

    return 0;
}
