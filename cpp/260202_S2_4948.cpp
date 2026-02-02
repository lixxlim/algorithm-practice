/**
 * https://www.acmicpc.net/problem/4948
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MAXN = 123456;
    const int M = 2 * MAXN;

    vector<bool> is_prime(M + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; 1LL * i * i <= M; i++) {
        if (!is_prime[i]) continue;
        for (int j = i * i; j <= M; j += i) is_prime[j] = false;
    }

    vector<int> pi(M + 1, 0);
    for (int i = 1; i <= M; i++) {
        pi[i] = pi[i - 1] + (is_prime[i] ? 1 : 0);
    }

    int n;
    while (cin >> n) {
        if (n == 0) break;
        cout << (pi[2 * n] - pi[n]) << '\n';
    }
    return 0;
}

