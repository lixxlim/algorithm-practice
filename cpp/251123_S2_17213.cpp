/**
 * https://www.acmicpc.net/problem/17213
 */
#include <bits/stdc++.h>
using namespace std;
long long comb(int n,int k){
    if(k>n) return 0;
    if(k>n-k) k=n-k;
    long long res=1;
    for(int i=0;i<k;++i){
        res = res * (n-i) / (i+1);
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    if(!(cin>>N>>M)) return 0;
    cout<<comb(M-1,N-1)<<"\n";
    return 0;
}

