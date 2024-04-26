#include <iostream>

using namespace std;

int main()
{
    int no , x , even , odd , pos , neg;
    even = odd = pos = neg = 0;
    cin >> no ;

    for(int i = 1 ; i <= no; i++){
        cin >> x;
       if(x % 2 == 0)
        even++;
       else
        odd++;
       if(x > 0)
        pos++;
       else if(x < 0)
        neg++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}
