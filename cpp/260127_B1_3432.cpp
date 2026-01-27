/**
 * https://www.acmicpc.net/problem/3432
 */
#include <bits/stdc++.h>
using namespace std;

static vector<uint32_t> build_lines() {
    vector<uint32_t> lines;
    auto bit = [](int r, int c) -> uint32_t {
        return 1u << (r * 5 + c);
    };

    for (int r = 0; r < 5; ++r) {
        for (int c = 0; c + 2 < 5; ++c) {
            uint32_t m = bit(r, c) | bit(r, c + 1) | bit(r, c + 2);
            lines.push_back(m);
        }
    }

    for (int c = 0; c < 5; ++c) {
        for (int r = 0; r + 2 < 5; ++r) {
            uint32_t m = bit(r, c) | bit(r + 1, c) | bit(r + 2, c);
            lines.push_back(m);
        }
    }

    for (int r = 0; r + 2 < 5; ++r) {
        for (int c = 0; c + 2 < 5; ++c) {
            uint32_t m = bit(r, c) | bit(r + 1, c + 1) | bit(r + 2, c + 2);
            lines.push_back(m);
        }
    }

    for (int r = 0; r + 2 < 5; ++r) {
        for (int c = 2; c < 5; ++c) {
            uint32_t m = bit(r, c) | bit(r + 1, c - 1) | bit(r + 2, c - 2);
            lines.push_back(m);
        }
    }

    return lines;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Z;
    cin >> Z;

    vector<uint32_t> lines = build_lines();

    while (Z--) {
        uint32_t maskA = 0, maskB = 0;
        for (int r = 0; r < 5; ++r) {
            string s;
            cin >> s;
            for (int c = 0; c < 5; ++c) {
                uint32_t b = 1u << (r * 5 + c);
                if (s[c] == 'A') maskA |= b;
                else maskB |= b;
            }
        }

        bool aWin = false, bWin = false;
        for (uint32_t m : lines) {
            if (!aWin && (maskA & m) == m) aWin = true;
            if (!bWin && (maskB & m) == m) bWin = true;
            if (aWin && bWin) break;
        }

        if (aWin && !bWin) cout << "A wins\n";
        else if (bWin && !aWin) cout << "B wins\n";
        else cout << "draw\n";
    }

    return 0;
}

