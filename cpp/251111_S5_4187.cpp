/**
 * https://www.acmicpc.net/problem/4187
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; 
    if (!(cin >> n)) return 0;
    while (n--) {
        int k, w;
        cin >> k >> w;
        vector<string> v(w);
        for (int i = 0; i < w; ++i) cin >> v[i];
        
        int ans = k;
        for (int i = 1; i < w; ++i) {
            int add = k;
            for (int t = k; t >= 0; --t) {
                if (v[i-1].substr(k - t) == v[i].substr(0, t)) {
                    add = k - t;
                    break;
                }
            }
            ans += add;
        }
        cout << ans << "\n";
    }
    return 0;
}

