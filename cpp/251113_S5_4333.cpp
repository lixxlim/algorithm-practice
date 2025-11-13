/**
 * https://www.acmicpc.net/problem/4333
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> names = {"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};
    unordered_map<string,int> idx;
    for (int i = 0; i < 12; ++i) idx[names[i]] = i;

    vector<int> majorSteps = {0,2,4,5,7,9,11};

    string line;
    while (true) {
        if (!getline(cin, line)) break;
        if (line == "END") break;

        vector<string> notes;
        {
            istringstream iss(line);
            string t;
            while (iss >> t) notes.push_back(t);
        }

        vector<string> ans;
        for (int key = 0; key < 12; ++key) {
            bool ok = true;
            for (auto &n : notes) {
                auto it = idx.find(n);
                if (it == idx.end()) { ok = false; break; }
                int v = it->second;
                bool in = false;
                for (int st : majorSteps) {
                    if ((key + st) % 12 == v) { in = true; break; }
                }
                if (!in) { ok = false; break; }
            }
            if (ok) ans.push_back(names[key]);
        }

        for (int i = 0; i < (int)ans.size(); ++i) {
            if (i) cout << ' ';
            cout << ans[i];
        }
        cout << "\n";
    }
    return 0;
}

