#include <iostream>

using namespace std;

int main()
{
    char s;
    long long a,b;
    cin >> a >> s >> b;
    if(s == '+'){
        cout << a+b;
    }
    if(s == '-'){
        cout << a-b;
    }
    if(s == '*'){
        cout << a*b;
    }
    if(s == '/'){
        cout << a/b;
    }

    return 0;
}
