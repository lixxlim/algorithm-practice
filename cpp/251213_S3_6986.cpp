/**
 * https://www.acmicpc.net/problem/6986
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        double x;
        cin >> x;
        a[i] = int(x * 10 + 0.5);
    }

    sort(a.begin(), a.end());

    long long trimmedSum = 0;
    for (int i = K; i < N - K; i++) trimmedSum += a[i];
    int trimmedCnt = N - 2 * K;

    long long adjustedSum = 0;
    int low = a[K];
    int high = a[N - K - 1];

    for (int i = 0; i < N; i++) {
        if (i < K) adjustedSum += low;
        else if (i >= N - K) adjustedSum += high;
        else adjustedSum += a[i];
    }

    long long trimmedResult = (trimmedSum * 100 + trimmedCnt * 5) / (trimmedCnt * 10);
    long long adjustedResult = (adjustedSum * 100 + N * 5) / (N * 10);

    cout << trimmedResult / 100 << "." << setw(2) << setfill('0') << trimmedResult % 100 << "\n";
    cout << adjustedResult / 100 << "." << setw(2) << setfill('0') << adjustedResult % 100 << "\n";

    return 0;
}

