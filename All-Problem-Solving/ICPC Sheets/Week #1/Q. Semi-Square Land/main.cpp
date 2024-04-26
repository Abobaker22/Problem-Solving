#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double area;
    int a,b,c,d;
    cin >> a >> b>> c >>d;

    area = a*b - 0.5*(a-c)*(b-d);
    //area = a*d + c*c + 0.5*(a-c)*(b-d);
    cout << fixed << setprecision(6) << area;
    return 0;
}
