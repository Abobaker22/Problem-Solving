#include <iostream>
#include<string>
#include<cmath>
#include<sstream>
using namespace std;

int main()
{
    int siz , counter = 0 , res1 ,res2;
    string n1;  //"125"  n2 -> ['5','2','1']
    cin >> n1;
    siz = n1.size()-1;
    char n2[siz];

    for(int i = siz ; i >=0 ; i--){
        n2[counter] = n1[i];
        counter++;
    }
    stringstream s1;
    s1 << n1 ;
    s1 >> res1;
    stringstream s2;
    s2 << n2 ;
    s2 >> res2;

    cout << res2 << endl;

    if(res1 == res2)
        cout << "YES" ;
    else
        cout << "NO";

    return 0;
}
