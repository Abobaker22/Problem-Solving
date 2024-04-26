#include <iostream>

using namespace std;

int main()
{
    long long fac = 1;
    int no , sum = 0 ;
    cin >> no;

    for(int i = 1 ; i <= no ; i++){
        fac = fac*i;
    }

    do{
        sum += fac % 10 ;
        fac /= 10 ;
    }while(fac > 0);

    if(sum % 2 == 0)
        cout << "Kholy";
    else
        cout << "Adham";

    return 0;
}
