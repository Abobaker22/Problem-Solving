#include <iostream>
#include <string>
#include<cmath>
using namespace std;


int xfloor (float res){
    return (int)res;
}

int xceil (float res){

    if(res != 1 )
        return (int)res + 1 ;
    else
        return 1;
}

int around (float res){
    return round(res);
}



int main() {

    float a , b , result;

    cin >> a >> b ;

    result = a / b ;
    cout << "floor " << a << " / " << b << " = " << xfloor(result) << endl;
    cout << "ceil " << a << " / " << b << " = " << xceil(result) << endl;
    cout << "round " << a << " / " << b << " = " << around(result) << endl;


    return 0;
}
