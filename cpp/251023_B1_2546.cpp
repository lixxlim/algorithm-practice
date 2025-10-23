/**
 * https://www.acmicpc.net/problem/2546
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        cin >> ws;
        int N, M;
        cin >> N >> M;

        vector<int> C(N), E(M);
        long long sumC = 0, sumE = 0;

        for (int i = 0; i < N; i++) {
            cin >> C[i];
            sumC += C[i];
        }
        for (int i = 0; i < M; i++) {
            cin >> E[i];
            sumE += E[i];
        }

        double avgC = (double)sumC / N;
        double avgE = (double)sumE / M;

        int count = 0;
        for (int iq : C) {
            if (iq > avgE && iq < avgC) count++;
        }

        cout << count << '\n';
    }

    return 0;
}

