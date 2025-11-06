/**
 * https://www.acmicpc.net/problem/3974
 */
#include <bits/stdc++.h>
using namespace std;

pair<int,int> norm_info(long long c){
    while(c%10==0) c/=10;
    long long x=c;
    int a=0;
    while(x){ a++; x/=10; }
    return {a,(int)(c%10)};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if(!(cin>>t)) return 0;

    vector<long long> pow10(20,1);
    for(int i=1;i<(int)pow10.size();i++) pow10[i]=pow10[i-1]*10LL;

    while(t--){
        long long c; cin>>c;
        auto [a,d]=norm_info(c);

        long long L=(19*c+19)/20;
        long long R=(21*c)/20;

        bool absurd=false;

        if(a>=2){
            for(int k=0; k<=12 && !absurd; k++){
                long long base=pow10[k];
                long long A=(L+base-1)/base;
                long long B=R/base;
                if(A>B) continue;
                long long left=max(1LL, A);
                long long right=min(B, pow10[a-1]-1);
                if(left>right) continue;
                long long y = (left%10==0)? left+1 : left;
                if(y<=right) absurd=true;
            }
        }

        if(!absurd && d!=5){
            for(int k=0; k<=12 && !absurd; k++){
                long long base=pow10[k];
                long long A=(L+base-1)/base;
                long long B=R/base;
                if(A>B) continue;
                long long left=max<long long>(A, pow10[a-1]);
                long long right=min<long long>(B, pow10[a]-1);
                if(left>right) continue;
                long long rem=(5 - (left%10) + 10)%10;
                long long y=left+rem;
                if(y<=right) absurd=true;
            }
        }

        cout<<(absurd? "absurd":"not absurd")<<"\n";
    }
    return 0;
}

