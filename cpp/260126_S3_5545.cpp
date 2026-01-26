/**
 * https://www.acmicpc.net/problem/5545
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int A, B;
    cin >> A >> B;

    int C;
    cin >> C;

    vector<int> D(N);
    for (int i = 0; i < N; i++) cin >> D[i];

    sort(D.begin(), D.end(), greater<int>());

    int price = A;
    int cal = C;
    int ans = cal / price;

    for (int i = 0; i < N; i++) {
        cal += D[i];
        price += B;
        ans = max(ans, cal / price);
    }

    cout << ans << "\n";
    return 0;
}

