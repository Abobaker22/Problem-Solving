#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    long long sum = 0;
    long long id  , d ;
    cin >> id;


    d =id ;
    while(d > 0){ // sum
        sum += d % 10;
        d /= 10;
    }

    string s = to_string(id);
    string rev = s;
    reverse( rev.begin(),rev.end() );


    if(rev == s){
        if(id % sum == 0){
            cout << "Best mentor.";
        }
        else{
            cout << "He's good.";
        }

    }
    else{
        if(id % sum == 0){
            cout << "He's good.";
        }
        else{
            cout << "He'll be fired.";
        }
    }

    return 0;
}
