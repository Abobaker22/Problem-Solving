#include <iostream>

using namespace std;

int main()
{
    char a1 , a2 , b1 ,b2 ;
    long long sum , sum1 , sum2 , day1 , month1 , year1 , day2 , month2 ,year2;
    cin >> day1 >> a1 >> month1 >> a2 >>  year1 ;
    cin >> day2 >> b1 >> month2 >> b2 >>  year2 ;




    sum1 = ((year1*12+month1) * 30 +day1);

    sum2 = ((year2*12+month2) * 30 +day2);

    if(sum1 > sum2){
        long long tmp = sum1 ;
        sum1 = sum2 ;
        sum2 = tmp;
    }

    sum = sum2 - sum1 - 1  ;


    cout << sum *24*60*60;
    return 0;
}
