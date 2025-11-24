/**
 * https://www.acmicpc.net/problem/14235
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if(!(cin>>n)) return 0;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==0){
            if(pq.empty()) cout<<-1<<"\n";
            else{ cout<<pq.top()<<"\n"; pq.pop(); }
        } else {
            for(int j=0;j<a;j++){
                int x; cin>>x;
                pq.push(x);
            }
        }
    }
    return 0;
}

