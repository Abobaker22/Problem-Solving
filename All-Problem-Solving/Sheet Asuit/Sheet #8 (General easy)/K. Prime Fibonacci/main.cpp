#include <iostream>
using namespace std;

/*int fib(int x){
    if(x <= 1){
        return x;
    }
    return fib(x-1) + fib(x-2);
}*/

int main() {
    long long test_cases ,tmp ,cnt = 1;
    cin >> test_cases;
    long long arr[test_cases] ,fib[100001] ,prime[51] = {0,1,1,1,0,1,0,1,0,0,0
                                                         ,1,0,1,0,0,0,1,0,1,0
                                                         ,0,0,1,0,0,0,0,0,1,0
                                                         ,1,0,0,0,0,0,1,0,0,0
                                                         ,1,0,1,0,0,0,1,0,0,0};
    fib[0] = 0 ;
    fib[1] = 1 ;
    for (int i = 2; i < 100001; ++i) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for (int i = 0; i < test_cases; ++i) {
        cin >> arr[i];
        fib[]
    return 0;
}
