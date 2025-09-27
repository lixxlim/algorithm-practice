/**
 * https://www.acmicpc.net/problem/1942
 */
#include <bits/stdc++.h>
using namespace std;

struct Time {
    int h, m, s;
    int toSeconds() const {
        return h * 3600 + m * 60 + s;
    }
    int toClockInt() const {
        return h * 10000 + m * 100 + s;
    }
};

Time parseTime(const string &s) {
    Time t;
    t.h = stoi(s.substr(0, 2));
    t.m = stoi(s.substr(3, 2));
    t.s = stoi(s.substr(6, 2));
    return t;
}

Time fromSeconds(int sec) {
    Time t;
    t.h = sec / 3600;
    sec %= 3600;
    t.m = sec / 60;
    t.s = sec % 60;
    return t;
}

long long countMultiplesOf3(int startSec, int endSec) {
    long long cnt = 0;
    if (startSec <= endSec) {
        for (int cur = startSec; cur <= endSec; cur++) {
            Time t = fromSeconds(cur);
            if (t.toClockInt() % 3 == 0) cnt++;
        }
    } else { 
        for (int cur = startSec; cur < 86400; cur++) {
            Time t = fromSeconds(cur);
            if (t.toClockInt() % 3 == 0) cnt++;
        }
        for (int cur = 0; cur <= endSec; cur++) {
            Time t = fromSeconds(cur);
            if (t.toClockInt() % 3 == 0) cnt++;
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 3; i++) {
        string a, b;
        cin >> a >> b;
        Time start = parseTime(a);
        Time end = parseTime(b);

        int startSec = start.toSeconds();
        int endSec = end.toSeconds();

        cout << countMultiplesOf3(startSec, endSec) << "\n";
    }

    return 0;
}

