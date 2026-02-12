#include <bits/stdc++.h>
using namespace std;

long long ceil_div(long long a, long long b){
    return (a + b - 1) / b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long RH, RV, SH, SV;
    cin >> RH >> RV >> SH >> SV;

    int n;
    cin >> n;

    long long ans = LLONG_MAX;

    for(int i=0;i<n;i++){
        long long rh, rv, sh, sv, p;
        cin >> rh >> rv >> sh >> sv >> p;

        for(int t=0;t<2;t++){
            long long cols = max(ceil_div(RH, rh), ceil_div(SH, sh));
            long long rows = max(ceil_div(RV, rv), ceil_div(SV, sv));
            long long total = cols * rows;
            ans = min(ans, total * p);

            swap(rh, rv);
            swap(sh, sv);
        }
    }

    cout << ans << "\n";
}

