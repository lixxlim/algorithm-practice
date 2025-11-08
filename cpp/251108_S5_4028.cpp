/**
 * https://www.acmicpc.net/problem/4028
 */
#include <bits/stdc++.h>
using namespace std;

long long egcd(long long a, long long b, long long &x, long long &y){
    if(b==0){ x=1; y=0; return a; }
    long long x1,y1; long long g=egcd(b,a%b,x1,y1);
    x=y1; y=x1-(a/b)*y1; return g;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long s,c,p,l;
    int tc=1;
    while(cin>>s>>c>>p>>l){
        if(s==0&&c==0&&p==0&&l==0) break;
        long long a=(s-p)%s; if(a<0) a+=s;
        long long b=(c-l)%c; if(b<0) b+=c;
        long long x,y;
        long long g=egcd(s,c,x,y);
        if((a-b)%g!=0){
            cout<<"Case "<<tc++<<": Never\n";
            continue;
        }
        long long s1=s/g, c1=c/g;
        long long rhs=(b-a)/g;
        long long inv = ( (x%c1)+c1 )%c1;
        long long k = ( (rhs%c1)+c1 )%c1;
        k = (k*inv)%c1;
        long long t = (a + s*k) % (s*c1);
        long long r = t / s;
        long long m = t % s;
        cout<<"Case "<<tc++<<": "<<r<<" "<<m<<"/"<<s<<"\n";
    }
    return 0;
}

