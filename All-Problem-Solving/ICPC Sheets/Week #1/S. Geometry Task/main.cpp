#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    long long diameter_ci , r , s;
    cin >> r >> s;

    diameter_ci = r*2;
    double diameter_sq = sqrt(pow(s,2.0)+pow(s,2));

    if(diameter_ci <= s){
            cout << "Square";
        }
    else if(diameter_ci >= diameter_sq ){
        cout << "Circle";
    }

    else{
        cout << "Complex";
    }


    return 0;
}



// square inside circle -> if qotr el circle >= qotr el sqaure
// circle inside square -> if qotr el circle <= side length of square
