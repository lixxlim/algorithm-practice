/**
 * https://www.acmicpc.net/problem/17269
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    string A, B;
    cin >> A >> B;

    int stroke[26] = {
        3,2,1,2,4,3,1,3,1,1,3,1,3,
        2,1,2,2,2,1,2,1,1,1,2,2,1
    };

    vector<int> seq;
    int i = 0;
    while (i < N || i < M) {
        if (i < N) seq.push_back(stroke[A[i] - 'A']);
        if (i < M) seq.push_back(stroke[B[i] - 'A']);
        i++;
    }

    while (seq.size() > 2) {
        vector<int> next;
        for (int i = 0; i < seq.size() - 1; i++) {
            next.push_back((seq[i] + seq[i + 1]) % 10);
        }
        seq = next;
    }

    if (seq[0] == 0)
        cout << seq[1] << "%\n";
    else
        cout << seq[0] << seq[1] << "%\n";

    return 0;
}

