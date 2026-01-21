/**
 * https://www.acmicpc.net/problem/1213
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> cnt(26, 0);
    for (char c : s) cnt[c - 'A']++;

    int oddCount = 0;
    int oddIdx = -1;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 == 1) {
            oddCount++;
            oddIdx = i;
        }
    }

    if (oddCount > 1) {
        cout << "I'm Sorry Hansoo\n";
        return 0;
    }

    string left;
    for (int i = 0; i < 26; i++) {
        left.append(cnt[i] / 2, char('A' + i));
    }

    string mid = "";
    if (oddIdx != -1) mid.push_back(char('A' + oddIdx));

    string right = left;
    reverse(right.begin(), right.end());

    cout << left << mid << right << "\n";
    return 0;
}

