/**
 * https://www.acmicpc.net/problem/2456
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> sum(4, 0);
    vector<int> cnt3(4, 0);
    vector<int> cnt2(4, 0);

    for (int i = 0; i < N; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        sum[1] += a; sum[2] += b; sum[3] += c;

        if (a == 3) cnt3[1]++;
        if (b == 3) cnt3[2]++;
        if (c == 3) cnt3[3]++;

        if (a == 2) cnt2[1]++;
        if (b == 2) cnt2[2]++;
        if (c == 2) cnt2[3]++;
    }

    int winner = 0;
    int maxScore = max(sum[1], max(sum[2], sum[3]));

    vector<int> candidates;
    for (int i = 1; i <= 3; i++) {
        if (sum[i] == maxScore)
            candidates.push_back(i);
    }

    if (candidates.size() == 1) {
        winner = candidates[0];
    } else {
        int max3 = 0;
        for (int c : candidates)
            max3 = max(max3, cnt3[c]);

        vector<int> tmp;
        for (int c : candidates)
            if (cnt3[c] == max3)
                tmp.push_back(c);

        if (tmp.size() == 1) {
            winner = tmp[0];
        } else {
            int max2 = 0;
            for (int c : tmp)
                max2 = max(max2, cnt2[c]);

            vector<int> tmp2;
            for (int c : tmp)
                if (cnt2[c] == max2)
                    tmp2.push_back(c);

            if (tmp2.size() == 1)
                winner = tmp2[0];
            else
                winner = 0;
        }
    }

    cout << winner << " " << maxScore << "\n";
    return 0;
}

