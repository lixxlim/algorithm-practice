/**
 * https://www.acmicpc.net/problem/1699
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    if(!(cin>>N)) return 0;
    auto is_square=[&](int x){
        int r = (int)floor(sqrt(x));
        return r*r==x;
    };
    if(is_square(N)){
        cout<<1<<"\n";
        return 0;
    }
    for(int i=1;i*i<=N;i++){
        if(is_square(N - i*i)){
            cout<<2<<"\n";
            return 0;
        }
    }
    int m=N;
    while(m%4==0) m/=4;
    if(m%8==7) cout<<4<<"\n";
    else cout<<3<<"\n";
    return 0;
}

