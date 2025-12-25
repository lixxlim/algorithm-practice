/**
 * https://www.acmicpc.net/problem/1747
 */
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

int makePalindrome(int x) {
    int res = x;
    x /= 10;
    while (x > 0) {
        res = res * 10 + x % 10;
        x /= 10;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    if (N <= 11 && N <= 11 && isPrime(11)) {
        if (N <= 2) { cout << 2; return 0; }
        if (N <= 3) { cout << 3; return 0; }
        if (N <= 5) { cout << 5; return 0; }
        if (N <= 7) { cout << 7; return 0; }
        if (N <= 11) { cout << 11; return 0; }
    }

    for (int i = 1; ; i++) {
        int p = makePalindrome(i);
        if (p < N) continue;
        if (isPrime(p)) {
            cout << p;
            break;
        }
    }

    return 0;
}

