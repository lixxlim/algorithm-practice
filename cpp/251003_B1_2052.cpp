/**
 * https://www.acmicpc.net/problem/2052
 */
#include <bits/stdc++.h>
using namespace std;

string mul2(const string &s) {
    string res = s;
    int carry = 0;
    for (int i = res.size() - 1; i >= 0; i--) {
        int val = (res[i] - '0') * 2 + carry;
        res[i] = (val % 10) + '0';
        carry = val / 10;
    }
    if (carry) res.insert(res.begin(), carry + '0');
    return res;
}

int divOnce(string &num, const string &den) {
    int q = 0;
    string cur = num;
    while (true) {
        if (cur.size() > den.size() || (cur.size() == den.size() && cur >= den)) {
            int carry = 0;
            string tmp = cur;
            int i = tmp.size() - 1, j = den.size() - 1;
            while (j >= 0) {
                int val = (tmp[i] - '0') - (den[j] - '0') - carry;
                if (val < 0) { val += 10; carry = 1; }
                else carry = 0;
                tmp[i] = val + '0';
                i--; j--;
            }
            while (i >= 0 && carry) {
                int val = (tmp[i] - '0') - carry;
                if (val < 0) { val += 10; carry = 1; }
                else carry = 0;
                tmp[i] = val + '0';
                i--;
            }
            int pos = 0; while (pos < (int)tmp.size()-1 && tmp[pos]=='0') pos++;
            tmp = tmp.substr(pos);
            cur = tmp;
            q++;
        } else break;
    }
    num = cur;
    return q;
}

int main() {
    int N;
    cin >> N;

    string den = "1";
    for (int i = 0; i < N; i++) den = mul2(den);

    string num = "1";
    string result = "0.";
    for (int i = 0; i < N; i++) {
        num.push_back('0');  // num *= 10
        int digit = divOnce(num, den);
        result.push_back(digit + '0');
    }

    while (result.size() > 2 && result.back() == '0') result.pop_back();

    cout << result << "\n";
    return 0;
}

