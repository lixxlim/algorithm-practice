/**
 * https://www.acmicpc.net/problem/17087
 */
#include <iostream>
#include <cstdlib>
using namespace std;

long long my_gcd(long long a, long long b) {
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long S;
    cin >> N >> S;

    long long g = 0;
    for (int i = 0; i < N; i++) {
        long long A;
        cin >> A;
        long long d = llabs(A - S);
        g = my_gcd(g, d);
    }

    cout << g << "\n";
    return 0;
}

