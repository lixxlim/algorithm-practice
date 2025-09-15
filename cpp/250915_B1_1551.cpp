/*
 * https://www.acmicpc.net/problem/1551
 */
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    string line;
    cin >> line;

    vector<int> A;
    stringstream ss(line);
    string temp;
    while (getline(ss, temp, ',')) {
        A.push_back(stoi(temp));
    }

    for (int k = 0; k < K; k++) {
        vector<int> B;
        for (int i = 0; i < (int)A.size() - 1; i++) {
            B.push_back(A[i+1] - A[i]);
        }
        A = B;
    }

    for (int i = 0; i < (int)A.size(); i++) {
        if (i > 0) cout << ",";
        cout << A[i];
    }
    cout << "\n";

    return 0;
}

