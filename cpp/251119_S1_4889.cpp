/**
 * https://www.acmicpc.net/problem/4889
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int case_num = 1;
	string s;
	
	while (true) {
		getline(cin, s);
		if (s[0] == '-') break;
		
		int balance = 0, operations = 0;
		for (char c : s) {
			if (c == '{') {
				++balance;
			} else {
				--balance;
				if (balance < 0) {
					++operations;
					balance = 1;
				}
			}
		}
		
		operations += balance / 2;
		cout << case_num << ". " << operations << endl;
		++case_num;
	}
	return 0;
}
