/**
 * https://www.acmicpc.net/problem/14650
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    if (N == 1) {
        cout << 0 << '\n';
        return 0;
    }

    int p = 1;
    for (int i = 0; i < N - 2; i++) p *= 3;

    cout << 2 * p << '\n';
    return 0;
}

