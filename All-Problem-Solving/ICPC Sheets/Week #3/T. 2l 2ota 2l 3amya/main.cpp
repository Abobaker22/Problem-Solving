//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int x , y;
//    cin >> x >> y ;
//    char arr[x][y] ;
//
//    for(int i = 0 ; i < x ; i++){
//        for(int j = 0 ; j < y ; j++){
//            cin >> arr[i][j];
//        }
//    }
//
//    for(int i = 0 ; i < x ; i++){
//        for(int j = 0 ; j < y ; j++){
//
//        }
//    }
//
//    return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<vector<char>> grid;
vector<vector<bool>> visited;
vector<vector<char>> directions;
pair<int, int> start_pos;
pair<int, int> end_pos;

void dfs(int x, int y) {
    visited[x][y] = true;

    if (grid[x][y] == 'E') {
        return;
    }

    if (x > 0 && !visited[x - 1][y] && grid[x - 1][y] != '#') {
        directions[x - 1][y] = 'U';
        dfs(x - 1, y);
    }

    if (x < N - 1 && !visited[x + 1][y] && grid[x + 1][y] != '#') {
        directions[x + 1][y] = 'D';
        dfs(x + 1, y);
    }

    if (y > 0 && !visited[x][y - 1] && grid[x][y - 1] != '#') {
        directions[x][y - 1] = 'L';
        dfs(x, y - 1);
    }

    if (y < M - 1 && !visited[x][y + 1] && grid[x][y + 1] != '#') {
        directions[x][y + 1] = 'R';
        dfs(x, y + 1);
    }
}

int main() {
    cin >> N >> M;

    grid.resize(N, vector<char>(M));
    visited.resize(N, vector<bool>(M, false));
    directions.resize(N, vector<char>(M, ' '));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'S') {
                start_pos = make_pair(i, j);
            } else if (grid[i][j] == 'E') {
                end_pos = make_pair(i, j);
            }
        }
    }

    dfs(start_pos.first, start_pos.second);

    int x = end_pos.first;
    int y = end_pos.second;
    string path = "";
    while (grid[x][y] != 'S') {
        path += directions[x][y];
        if (directions[x][y] == 'U') {
            x += 1;
        } else if (directions[x][y] == 'D') {
            x -= 1;
        } else if (directions[x][y] == 'L') {
            y += 1;
        } else if (directions[x][y] == 'R') {
            y -= 1;
        }
    }

    reverse(path.begin(), path.end());

    cout << path << endl;

    return 0;
}
