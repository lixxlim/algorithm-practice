/**
 * https://www.acmicpc.net/problem/1356
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

    int len = N.size();

    if (len == 1) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < len - 1; i++) {
        long long leftProduct = 1, rightProduct = 1;

        for (int j = 0; j <= i; j++) {
            leftProduct *= (N[j] - '0');
        }

        for (int j = i + 1; j < len; j++) {
            rightProduct *= (N[j] - '0');
        }

        if (leftProduct == rightProduct) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}

