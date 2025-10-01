/**
 * https://www.acmicpc.net/problem/2033
 */
#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    for (long long i = 10; i <= N; i *= 10) {
        N = ( (N + i/2) / i ) * i;
    }

    cout << N << "\n";
    return 0;
}

