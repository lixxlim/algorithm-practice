/**
 * https://www.acmicpc.net/problem/1051
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    if(!(cin>>N>>M)) return 0;
    vector<string> a(N);
    for(int i=0;i<N;i++) cin>>a[i];
    int ans = 1;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int maxk = min(N - i, M - j);
            for(int k=1;k<maxk;k++){
                if(a[i][j]==a[i][j+k] && a[i][j]==a[i+k][j] && a[i][j]==a[i+k][j+k]){
                    int area = (k+1)*(k+1);
                    if(area>ans) ans = area;
                }
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}

