/**
 * https://www.acmicpc.net/problem/1246
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> P(M);
    for (int i = 0; i < M; i++) cin >> P[i];

    sort(P.begin(), P.end());

    long long bestRevenue = 0;
    int bestPrice = 0;

    for (int i = 0; i < M; i++) {
        int price = P[i];
        int cnt = M - i;
        int sell = min(cnt, N);
        long long revenue = 1LL * price * sell;

        if (revenue > bestRevenue ||
            (revenue == bestRevenue && price < bestPrice)) {
            bestRevenue = revenue;
            bestPrice = price;
        }
    }

    cout << bestPrice << " " << bestRevenue;
    return 0;
}

