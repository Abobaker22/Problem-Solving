#include <iostream>

using namespace std;

int main()
{
    long long num, s1 ,s2 ,s3;
    int fd ,sd ,td;
    cin >> num; // 123

    s1 = num ; //123
    td = num % 10;  //3
    sd = (num / 10) %10; //2
    fd = num / 100; // 1
    s2 = sd*100 + td*10 + fd;
    s3 = td*100 + fd*10 + sd;
    cout << s1+s2+s3 << endl;

    return 0;
}
