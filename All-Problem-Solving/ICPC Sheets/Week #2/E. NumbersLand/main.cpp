#include <iostream>

using namespace std;

int main()
{
    int no , co = 0;
    cin >> no ;

    for(int i = 2 ; i <= no ; i++){
        if(no % i == 0){
            co++;
        }
    }

    if(co <= 1)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
