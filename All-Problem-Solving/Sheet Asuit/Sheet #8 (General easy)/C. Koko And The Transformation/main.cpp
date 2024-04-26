#include <iostream>
using namespace std;

int main() {
    int n , m ;
    cin >> n >> m;
    int farr[n] ,sarr[m] ,sum_farr = 0 ,sum_sarr = 0;

    for (int i = 0; i < n; ++i) {
        cin >> farr[i];
        sum_farr += farr[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> sarr[i];
        sum_sarr += sarr[i];
    }

    if (sum_farr == sum_sarr)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

