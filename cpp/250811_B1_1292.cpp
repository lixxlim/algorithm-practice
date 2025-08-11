/**
 * https://www.acmicpc.net/problem/1292
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    vector<int> seq;
    int num = 1;

    while (seq.size() < B) {
        for (int i = 0; i < num; i++) {
            seq.push_back(num);
        }
        num++;
    }

    int sum = 0;
    for (int i = A - 1; i < B; i++) {
        sum += seq[i];
    }

    cout << sum << endl;
    return 0;
}
