/**
 * https://www.acmicpc.net/problem/1303
 */
#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> board;
bool visited[101][101];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int bfs(int y, int x, char team) {
    queue<pair<int,int>> q;
    q.push({y, x});
    visited[y][x] = true;
    int cnt = 1;

    while (!q.empty()) {
        auto [cy, cx] = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = cy + dy[i];
            int nx = cx + dx[i];
            if (ny < 0 || nx < 0 || ny >= M || nx >= N) continue;
            if (!visited[ny][nx] && board[ny][nx] == team) {
                visited[ny][nx] = true;
                q.push({ny, nx});
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    board.resize(M);
    for (int i = 0; i < M; i++) {
        cin >> board[i];
    }

    long long white = 0, blue = 0;

    for (int y = 0; y < M; y++) {
        for (int x = 0; x < N; x++) {
            if (!visited[y][x]) {
                char team = board[y][x];
                int size = bfs(y, x, team);
                if (team == 'W') white += (long long)size * size;
                else blue += (long long)size * size;
            }
        }
    }

    cout << white << " " << blue << "\n";
    return 0;
}
