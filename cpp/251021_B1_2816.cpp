/**
 * https://www.acmicpc.net/problem/2816
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> channels(N);
    for (int i = 0; i < N; i++) cin >> channels[i];

    string result;

    int idx1 = 0;
    for (int i = 0; i < N; i++) {
        if (channels[i] == "KBS1") {
            idx1 = i;
            break;
        }
    }
    result.append(idx1, '1');
    result.append(idx1, '4');

    string temp = channels[idx1];
    for (int i = idx1; i > 0; i--) {
        channels[i] = channels[i - 1];
    }
    channels[0] = temp;

    int idx2 = 0;
    for (int i = 0; i < N; i++) {
        if (channels[i] == "KBS2") {
            idx2 = i;
            break;
        }
    }
    result.append(idx2, '1');
    result.append(idx2 - 1, '4');

    cout << result << endl;
    return 0;
}

