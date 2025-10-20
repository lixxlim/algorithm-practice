/**
 * https://www.acmicpc.net/problem/2804
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int crossA = -1, crossB = -1;

    for (int i = 0; i < A.size() && crossA == -1; i++) {
        for (int j = 0; j < B.size(); j++) {
            if (A[i] == B[j]) {
                crossA = i;
                crossB = j;
                break;
            }
        }
    }

    int N = A.size();
    int M = B.size();

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (i == crossB) {
                cout << A[j];
            } else if (j == crossA) {
                cout << B[i];
            } else {
                cout << '.';
            }
        }
        cout << '\n';
    }

    return 0;
}

