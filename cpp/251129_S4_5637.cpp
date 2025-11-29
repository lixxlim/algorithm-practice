/**
 * https://www.acmicpc.net/problem/5637
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, longest = "";
    while (true) {
        if (!getline(cin, s)) break;
        if (s.find("E-N-D") != string::npos) break;

        string cur = "";
        for (char c : s) {
            if (isalpha(c) || c == '-') {
                cur += c;
            } else {
                if (cur.size() > longest.size()) longest = cur;
                cur = "";
            }
        }
        if (cur.size() > longest.size()) longest = cur;
    }

    for (auto &c : longest) c = tolower(c);
    cout << longest;
}

