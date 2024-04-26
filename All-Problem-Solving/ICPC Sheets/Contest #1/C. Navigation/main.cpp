#include <iostream>

using namespace std;

int main()
{
    long long x1 , y1 , x2 , y2 ;
    cin >> x1 >> y1 >> x2 >> y2 ;


    if(x1 == x2 && y2 > y1){
        cout << "North";
    }
    else if(x2 == x1 && y2 < y1){
        cout << "South";
    }
    else if(x2 < x1 && y2 == y1){
        cout << "West";
    }
    else if(x2 > x1 && y2 == y1){
        cout << "East";
    }
    else if(x2 == x1 && y2 == y1){
        cout << "Arrived";
    }
    else if(x2 > x1 && y2 > y1){
        cout << "Northeast";
    }
    else if(x2 > x1 && y2 < y1){
        cout << "Southeast";
    }
    else if(x2 < x1 && y2 > y1){
        cout << "Northwest";
    }
    else{
        cout << "Southwest";
    }

    return 0;
}
