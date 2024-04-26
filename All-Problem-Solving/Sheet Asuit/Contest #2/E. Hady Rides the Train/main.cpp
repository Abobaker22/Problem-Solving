#include <iostream>

using namespace std;

int main()
{
    long long seat ,row , column = 0;
    cin >> seat;
    // Row
    row = seat / 4;

    // Column
    if(row % 2 == 0)
        column = seat % 4;
    else
        column = (3*seat % 4) - 1;
    if(column == -1)
        column = 3;
    cout << row << " " << column;
    return 0;
}
