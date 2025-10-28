/**
 * https://www.acmicpc.net/problem/2897
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    vector<string> grid(R);
    for (int i = 0; i < R; ++i) cin >> grid[i];

    int count[5] = {0};

    for (int r = 0; r < R - 1; ++r) {
        for (int c = 0; c < C - 1; ++c) {
            bool hasBuilding = false;
            int car = 0;
            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < 2; ++j) {
                    char cell = grid[r + i][c + j];
                    if (cell == '#') hasBuilding = true;
                    else if (cell == 'X') car++;
                }
            }
            if (!hasBuilding) count[car]++;
        }
    }

    for (int i = 0; i <= 4; ++i) cout << count[i] << "\n";
    return 0;
}

