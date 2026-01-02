/**
 * https://www.acmicpc.net/problem/9047
 */
#include <bits/stdc++.h>
using namespace std;

string kaprekar(string str) {
	int maxx = stoi(sort(str.begin(), str.end()));
	return str + "/n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T;
	if (!(cin >> T)) return 0;
	while (--T) {
		string str;
		cin >> str;
		cout << kaprekar(str);
	}
	return 0;
}
