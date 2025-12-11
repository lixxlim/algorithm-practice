/**
 * https://www.acmicpc.net/problem/2578
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    pair<int,int> pos[26];
    bool mark[5][5] = {};
    for(int i=0;i<5;i++) for(int j=0;j<5;j++){ cin>>a; pos[a]={i,j}; }
    vector<int> calls;
    for(int i=0;i<25;i++){ cin>>a; calls.push_back(a); }
    for(int k=0;k<25;k++){
        auto [r,c] = pos[calls[k]];
        mark[r][c]=true;
        int lines=0;
        for(int i=0;i<5;i++){
            bool ok=true;
            for(int j=0;j<5;j++) if(!mark[i][j]){ ok=false; break; }
            if(ok) lines++;
        }
        for(int j=0;j<5;j++){
            bool ok=true;
            for(int i=0;i<5;i++) if(!mark[i][j]){ ok=false; break; }
            if(ok) lines++;
        }
        bool ok=true;
        for(int i=0;i<5;i++) if(!mark[i][i]){ ok=false; break; }
        if(ok) lines++;
        ok=true;
        for(int i=0;i<5;i++) if(!mark[i][4-i]){ ok=false; break; }
        if(ok) lines++;
        if(lines>=3){ cout<<k+1<<"\n"; return 0; }
    }
    return 0;
}

