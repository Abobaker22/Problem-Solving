#include <iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
    int n;
    long long x ;
    string res1 ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++){
        cin >> x;
        stringstream s1;
        s1 << x;
        s1 >> res1;
        for(int j = res1.size()-1 ; j >= 0 ; j--){
            cout << res1[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
