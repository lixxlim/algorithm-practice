/**
 * https://www.acmicpc.net/problem/3041
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> board(4);
    for (int i = 0; i < 4; i++) cin >> board[i];
    
    int result = 0;
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 4; c++) {
            char ch = board[r][c];
            if (ch == '.') continue;
            int idx = ch - 'A';
            int tr = idx / 4;
            int tc = idx % 4;
            result += abs(r - tr) + abs(c - tc);
        }
    }
    cout << result;
}

