#include <iostream>
using namespace std;

int main() {
    int no , q , x ;
    cin >> no >> q;
    int arr[no] , freq[100001] = {0};
    for (int i = 0; i < no; ++i) {
        cin >> arr[i] ;
        freq[arr[i]]++;
    }

    for (int i = 0; i < q; ++i) {
        cin >> x ;
        cout << freq[x] << '\n';
    }
    return 0;
}
