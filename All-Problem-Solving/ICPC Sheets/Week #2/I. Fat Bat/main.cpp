#include <iostream>

using namespace std;

int main()
{
    long long weight , year , r , d ;
    cin >> r >> d >> weight >> year ;

    for(long long i = 0 ; i < year-1 ; i++){
        weight = r * weight - d;
    }
    cout << weight << endl;

    return 0;
}
