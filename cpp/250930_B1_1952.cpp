/**
 * https://www.acmicpc.net/problem/1952
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<bool>> visited(M, vector<bool>(N, false));
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int x = 0, y = 0;
    int dir = 0;
    int turns = 0;

    for (int step = 0; step < M * N - 1; step++) {
        visited[x][y] = true;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 0 || nx >= M || ny < 0 || ny >= N || visited[nx][ny]) {
            dir = (dir + 1) % 4;
            turns++;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }
        x = nx;
        y = ny;
    }

    cout << turns << endl;
    return 0;
}

