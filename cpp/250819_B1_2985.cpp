/**
 * https://www.acmicpc.net/problem/2985
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    if (!(cin >> a >> b >> c)) return 0;

    if (a + b == c) cout << a << "+" << b << "=" << c << "\n";
    else if (a - b == c) cout << a << "-" << b << "=" << c << "\n";
    else if (a * b == c) cout << a << "*" << b << "=" << c << "\n";
    else if (b != 0 && a % b == 0 && a / b == c) cout << a << "/" << b << "=" << c << "\n";
    else if (a == b + c) cout << a << "=" << b << "+" << c << "\n";
    else if (a == b - c) cout << a << "=" << b << "-" << c << "\n";
    else if (a == b * c) cout << a << "=" << b << "*" << c << "\n";
    else /* a == b / c, with exact division guaranteed by problem */ cout << a << "=" << b << "/" << c << "\n";
    return 0;
}

