/**
 * https://www.acmicpc.net/problem/17626
 */
#include <bits/stdc++.h>
using namespace std;
bool is_square(int x){
    int r = (int)floor(sqrt(x));
    return r*r==x || (r+1)*(r+1)==x;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if(!(cin>>n)) return 0;
    if(is_square(n)){
        cout<<1<<"\n";
        return 0;
    }
    for(int i=1;i*i<=n;i++){
        int rem = n - i*i;
        if(is_square(rem)){
            cout<<2<<"\n";
            return 0;
        }
    }
    int m = n;
    while(m%4==0) m/=4;
    if(m%8==7) cout<<4<<"\n";
    else cout<<3<<"\n";
    return 0;
}

