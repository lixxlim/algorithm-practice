/**
 * https://www.acmicpc.net/problem/2947
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a(5);
    for (int i = 0; i < 5; i++) cin >> a[i];

    while (true) {
        bool swapped = false;
        for (int i = 0; i < 4; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                for (int j = 0; j < 5; j++) cout << a[j] << " ";
                cout << "\n";
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    return 0;
}

