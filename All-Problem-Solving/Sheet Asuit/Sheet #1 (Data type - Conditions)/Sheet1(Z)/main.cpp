#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /** \brief
     * ألكود ده مش هيرن بسبب انو لما بييجي يحسب الباور بيطلع اوفر فلو ف انا هاخد لوج للطرفين
       long long a,b,c,d;
        cin>>a>>b>>c>>d;

        if(pow(a,b) > pow(c,d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;


        log(pow(a,b) = b*log(a)
        log(pow(c,d) = d*log(c)
     *
     */


    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    if(b*log(a) > d*log(c))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
