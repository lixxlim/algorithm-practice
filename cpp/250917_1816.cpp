/*
 * https://www.acmicpc.net/problem/1816
 */
#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
using i128 = __int128_t;

vector<int> sieve(int limit) {
    vector<int> primes;
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= limit; i++)
        if (isPrime[i]) primes.push_back(i);
    return primes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<long long> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];

    vector<int> primes = sieve(1000000);

    for (auto num : S) {
        bool ok = true;
        for (int p : primes) {
            if ((i128)p * p > num) break;
            if (num % p == 0) { 
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}

