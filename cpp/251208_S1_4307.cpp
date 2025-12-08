/**
 * https://www.acmicpc.net/problem/4307
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if(!(cin>>T)) return 0;
    while(T--){
        int l,n;
        cin>>l>>n;
        int earliest = 0;
        int latest = 0;
        for(int i=0;i<n;i++){
            int p; cin>>p;
            earliest = max(earliest, min(p, l-p));
            latest = max(latest, max(p, l-p));
        }
        cout<<earliest<<" "<<latest<<"\n";
    }
    return 0;
}

