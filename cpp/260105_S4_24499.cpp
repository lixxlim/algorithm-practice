/**
 * https://www.acmicpc.net/problem/24499
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> A(2 * N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A[i + N] = A[i];
    }

    int currentSum = 0;
    for (int i = 0; i < K; i++) {
        currentSum += A[i];
    }

    int answer = currentSum;

    for (int i = K; i < N + K; i++) {
        currentSum += A[i];
        currentSum -= A[i - K];
        answer = max(answer, currentSum);
    }

    cout << answer << "\n";
    return 0;
}

