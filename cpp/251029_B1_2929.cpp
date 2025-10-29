/**
 * https://www.acmicpc.net/problem/2929
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> param;
    int n = s.size();
    int i = 0, pos = 0, nop = 0;

    while (i < n) {
        if (!isupper(s[i])) { i++; continue; }

        char cmd = s[i];
        if (param.find(cmd) == param.end()) {
            int j = i + 1;
            while (j < n && islower(s[j])) j++;
            param[cmd] = j - (i + 1);
        }

        int plen = param[cmd];
        int total_len = 1 + plen;

        if (pos % 4 != 0) {
            int add = 4 - (pos % 4);
            nop += add;
            pos += add;
        }

        pos += total_len;
        i += total_len;
    }

    cout << nop << endl;
}

