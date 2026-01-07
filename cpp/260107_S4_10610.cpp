/**
 * https://www.acmicpc.net/problem/10610
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    cin >> N;

    int sum = 0;
    bool hasZero = false;

    for (char c : N) {
        int d = c - '0';
        sum += d;
        if (d == 0) hasZero = true;
    }

    if (!hasZero || sum % 3 != 0) {
        cout << -1;
        return 0;
    }

    sort(N.begin(), N.end(), greater<char>());
    cout << N;
    return 0;
}

