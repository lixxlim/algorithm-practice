/**
 * https://www.acmicpc.net/problem/25640
 */
#include <iostream>
using namespace std;

int main() {
	
	string mbti;
	int n;
	int cnt = 0;
	
	cin >> mbti >> n;
	for (int i = 0; i < n; i++) {
		string m;
		cin >> m;
		if (mbti == m) cnt++;
	}
	
	cout << cnt << endl;
}
