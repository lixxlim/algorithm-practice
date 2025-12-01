/**
 * https://www.acmicpc.net/problem/2823
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int R,C; 
	if(!(cin>>R>>C)) return 0;
	
	vector<string> a(R);
	for(int i=0;i<R;i++) cin>>a[i];
	
	int dr[4]={-1,1,0,0}, dc[4]={0,0,-1,1};
	for(int r=0;r<R;r++){
		for(int c=0;c<C;c++){
			if(a[r][c]=='.'){
				int deg=0;
				for(int k=0;k<4;k++){
					int nr=r+dr[k], nc=c+dc[k];
					if(nr>=0 && nr<R && nc>=0 && nc<C && a[nr][nc]=='.') deg++;
				}
				if(deg==1){
					cout<<1<<"\n";
					return 0;
				}
			}
		}
	}
	cout<<0<<"\n";
	return 0;
}

