/**
 * https://www.acmicpc.net/problem/10253
 */
#include <iostream>
#include <numeric>

long long get_gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void solve() {
    long long a, b;
    std::cin >> a >> b;

    while (a != 1) {
        long long x = (b / a) + 1;
        long long numerator = a * x - b;
        long long denominator = b * x;
        long long common = get_gcd(numerator, denominator);
        
        a = numerator / common;
        b = denominator / common;
    }

    std::cout << b << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

