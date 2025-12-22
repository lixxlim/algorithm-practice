/**
 * https://www.acmicpc.net/problem/11582
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    int k;
    cin >> k;

    int target = N / k;
    vector<long long> temp(N);

    for (int size = 1; size < target; size <<= 1) {
        for (int i = 0; i < N; i += size * 2) {
            int l = i;
            int m = min(i + size, N);
            int r = min(i + size * 2, N);

            int p = l, q = m, idx = l;
            while (p < m && q < r) {
                if (a[p] <= a[q]) temp[idx++] = a[p++];
                else temp[idx++] = a[q++];
            }
            while (p < m) temp[idx++] = a[p++];
            while (q < r) temp[idx++] = a[q++];
        }
        a = temp;
    }

    for (int i = 0; i < N; i++) {
        cout << a[i] << (i + 1 < N ? ' ' : '\n');
    }

    return 0;
}

