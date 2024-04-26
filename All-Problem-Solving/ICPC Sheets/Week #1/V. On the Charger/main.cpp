#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int s , e , sf;
    cin >> s >> e >> sf ;

    if(e >= s){
        if(sf >= s && sf < e)
            cout << "YES";
        else
            cout << "NO";
    }
    else{
        swap(e,s);

        if(sf >= s && sf < e)
            cout << "NO";
        else
            cout << "YES";
    }




    return 0;
}
