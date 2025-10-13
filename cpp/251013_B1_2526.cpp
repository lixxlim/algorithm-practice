/**
 * https://www.acmicpc.net/problem/2526
 */
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;

    unordered_map<int, int> seen;
    int current = N;
    int index = 0;

    while (true) {
        if (seen.find(current) != seen.end()) {
            cout << index - seen[current] << endl;
            break;
        }

        seen[current] = index;
        current = (current * N) % P;
        index++;
    }

    return 0;
}

