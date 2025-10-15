/**
 * https://www.acmicpc.net/problem/2684
 */
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int P;
    cin >> P;
    while (P--) {
        string s;
        cin >> s;

        string patterns[8] = {"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
        int count[8] = {0};

        for (int i = 0; i + 2 < 40; i++) {
            string sub = s.substr(i, 3);
            for (int j = 0; j < 8; j++) {
                if (sub == patterns[j]) {
                    count[j]++;
                    break;
                }
            }
        }

        for (int j = 0; j < 8; j++) {
            cout << count[j];
            if (j != 7) cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}

