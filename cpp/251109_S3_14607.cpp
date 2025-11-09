/**
 * https://www.acmicpc.net/problem/14607
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    if (!(cin >> N)) return 0;
    cout << (N * (N - 1)) / 2 << '\n';
}

