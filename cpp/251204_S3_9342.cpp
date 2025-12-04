/**
 * https://www.acmicpc.net/problem/9342
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T;
	if(!(cin>>T)) return 0;
	
	string s;
	getline(cin,s);
	regex re("^[A-F]?A+F+C+[A-F]?$");
	for(int i=0;i<T;i++){
		getline(cin,s);
		if(regex_match(s,re)) cout<<"Infected!\n"; else cout<<"Good\n";
	}
	
	return 0;
}

