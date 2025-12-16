/**
 * https://www.acmicpc.net/problem/17413
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    string result;
    string buffer;
    bool inTag = false;

    for (char c : s) {
        if (c == '<') {
            reverse(buffer.begin(), buffer.end());
            result += buffer;
            buffer.clear();
            inTag = true;
            result += c;
        } else if (c == '>') {
            inTag = false;
            result += c;
        } else if (inTag) {
            result += c;
        } else {
            if (c == ' ') {
                reverse(buffer.begin(), buffer.end());
                result += buffer;
                buffer.clear();
                result += c;
            } else {
                buffer += c;
            }
        }
    }

    reverse(buffer.begin(), buffer.end());
    result += buffer;

    cout << result;
    return 0;
}

