#include <iostream>
using namespace std;
int main() {
    int no_of_rooms ,cnt = 0;
    cin >> no_of_rooms;
    int no_of_people[no_of_rooms] ,room_size[no_of_rooms] ,dif[no_of_rooms];
    for (int i = 0; i < no_of_rooms; ++i) {
        cin >> no_of_people[i] >> room_size[i];
        dif[i] = room_size[i] - no_of_people[i];
    }
    for (int i = 0; i < no_of_rooms; ++i) {
        if (dif[i] >= 2){
            cnt++;
        }
    }
    cout << cnt ;
    return 0;
}
