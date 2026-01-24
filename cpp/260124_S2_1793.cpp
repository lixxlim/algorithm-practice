/**
 * https://www.acmicpc.net/problem/1793
 */
#include <bits/stdc++.h>
using namespace std;

string addStr(const string& a, const string& b) {
    int i = (int)a.size() - 1;
    int j = (int)b.size() - 1;
    int carry = 0;
    string res;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        res.push_back(char('0' + (sum % 10)));
        carry = sum / 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

string mul2(const string& a) {
    int carry = 0;
    string res;
    for (int i = (int)a.size() - 1; i >= 0; --i) {
        int v = (a[i] - '0') * 2 + carry;
        res.push_back(char('0' + (v % 10)));
        carry = v / 10;
    }
    if (carry) res.push_back(char('0' + carry));
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MAXN = 250;
    vector<string> dp(MAXN + 1);
    dp[0] = "1";
    dp[1] = "1";
    for (int i = 2; i <= MAXN; ++i) {
        dp[i] = addStr(dp[i - 1], mul2(dp[i - 2]));
    }

    int n;
    while (cin >> n) {
        cout << dp[n] << "\n";
    }
    return 0;
}

