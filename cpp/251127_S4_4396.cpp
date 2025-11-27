/**
 * https://www.acmicpc.net/problem/4396
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if(!(cin>>n)) return 0;
    vector<string> mines(n), opened(n);
    for(int i=0;i<n;i++) cin>>mines[i];
    for(int i=0;i<n;i++) cin>>opened[i];
    bool dead=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(opened[i][j]=='x' && mines[i][j]=='*') dead=true;
        }
    }
    vector<string> out(n, string(n,'.'));
    int dx[8]={-1,-1,-1,0,0,1,1,1}, dy[8]={-1,0,1,-1,1,-1,0,1};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(opened[i][j]=='x'){
                if(mines[i][j]=='*'){
                    // will reveal all mines later if dead
                } else {
                    int cnt=0;
                    for(int k=0;k<8;k++){
                        int ni=i+dx[k], nj=j+dy[k];
                        if(0<=ni && ni<n && 0<=nj && nj<n && mines[ni][nj]=='*') cnt++;
                    }
                    out[i][j]=char('0'+cnt);
                }
            }
        }
    }
    if(dead){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mines[i][j]=='*') out[i][j]='*';
            }
        }
    }
    for(int i=0;i<n;i++) cout<<out[i]<<"\n";
    return 0;
}

