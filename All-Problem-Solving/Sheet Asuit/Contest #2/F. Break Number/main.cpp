#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int maxCount = 0;
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;

        int count = 0;
        while (x % 2 == 0) {
            x /= 2;
            count++;
        }

        maxCount = max(maxCount, count);
    }

    cout << maxCount << endl;

    return 0;
}
