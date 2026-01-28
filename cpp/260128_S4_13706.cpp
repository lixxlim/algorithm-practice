/**
 * https://www.acmicpc.net/problem/13706
 */
#include <bits/stdc++.h>
using namespace std;

struct BigInt {
    static const uint32_t BASE = 1000000000u;
    vector<uint32_t> d;

    BigInt(uint64_t v = 0) {
        if (v == 0) d.push_back(0);
        else {
            while (v) {
                d.push_back((uint32_t)(v % BASE));
                v /= BASE;
            }
        }
    }

    void trim() {
        while (d.size() > 1 && d.back() == 0) d.pop_back();
    }

    static int cmp(const BigInt& a, const BigInt& b) {
        if (a.d.size() != b.d.size()) return a.d.size() < b.d.size() ? -1 : 1;
        for (int i = (int)a.d.size() - 1; i >= 0; --i) {
            if (a.d[i] != b.d[i]) return a.d[i] < b.d[i] ? -1 : 1;
        }
        return 0;
    }

    void mul_small(uint32_t m) {
        if (m == 0) {
            d.assign(1, 0);
            return;
        }
        uint64_t carry = 0;
        for (size_t i = 0; i < d.size(); ++i) {
            uint64_t cur = (uint64_t)d[i] * m + carry;
            d[i] = (uint32_t)(cur % BASE);
            carry = cur / BASE;
        }
        while (carry) {
            d.push_back((uint32_t)(carry % BASE));
            carry /= BASE;
        }
        trim();
    }

    void add_small(uint32_t a) {
        uint64_t carry = a;
        for (size_t i = 0; carry && i < d.size(); ++i) {
            uint64_t cur = (uint64_t)d[i] + carry;
            d[i] = (uint32_t)(cur % BASE);
            carry = cur / BASE;
        }
        while (carry) {
            d.push_back((uint32_t)(carry % BASE));
            carry /= BASE;
        }
        trim();
    }

    void sub(const BigInt& b) {
        uint64_t borrow = 0;
        for (size_t i = 0; i < d.size(); ++i) {
            uint64_t subtrahend = borrow + (i < b.d.size() ? b.d[i] : 0ULL);
            if ((uint64_t)d[i] >= subtrahend) {
                d[i] = (uint32_t)((uint64_t)d[i] - subtrahend);
                borrow = 0;
            } else {
                d[i] = (uint32_t)((uint64_t)d[i] + BASE - subtrahend);
                borrow = 1;
            }
        }
        trim();
    }

    string to_string() const {
        ostringstream oss;
        oss << d.back();
        for (int i = (int)d.size() - 2; i >= 0; --i) {
            oss << setw(9) << setfill('0') << d[i];
        }
        return oss.str();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> groups;
    int n = (int)s.size();
    int i = 0;
    if (n % 2 == 1) {
        groups.push_back(s[0] - '0');
        i = 1;
    }
    for (; i < n; i += 2) {
        groups.push_back((s[i] - '0') * 10 + (s[i + 1] - '0'));
    }

    BigInt P(0), R(0);

    for (int g : groups) {
        R.mul_small(100);
        R.add_small((uint32_t)g);

        int chosen = 0;
        for (int x = 9; x >= 0; --x) {
            BigInt A = P;
            A.mul_small(20);
            A.add_small((uint32_t)x);
            A.mul_small((uint32_t)x);
            if (BigInt::cmp(A, R) <= 0) {
                chosen = x;
                break;
            }
        }

        BigInt T = P;
        T.mul_small(20);
        T.add_small((uint32_t)chosen);
        T.mul_small((uint32_t)chosen);

        R.sub(T);
        P.mul_small(10);
        P.add_small((uint32_t)chosen);
    }

    cout << P.to_string() << "\n";
    return 0;
}

