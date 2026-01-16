/**
 * https://www.acmicpc.net/problem/3208
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    cin >> M >> N;

    if (M <= N) cout << 2 * M - 2 << "\n";
    else cout << 2 * N - 1 << "\n";
    return 0;
}

