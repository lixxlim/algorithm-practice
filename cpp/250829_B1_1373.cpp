/**
 * https://www.acmicpc.net/problem/1373
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string bin;
    cin >> bin;

    int mod = bin.size() % 3;
    if (mod == 1) bin = "00" + bin;
    else if (mod == 2) bin = "0" + bin;

    string octal;
    for (int i = 0; i < bin.size(); i += 3) {
        int val = (bin[i] - '0') * 4 + (bin[i + 1] - '0') * 2 + (bin[i + 2] - '0');
        octal.push_back(val + '0');
    }

    if (octal[0] == '0') octal.erase(0, 1);

    cout << octal << "\n";
    return 0;
}

