/**
 * https://www.acmicpc.net/problem/30156
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t >> ws;
	for(int i = 0; i < t; i++) {
		int a = 0, b = 0;
		string str;
		getline(cin, str);
		for(char ch : str) {
			a += (ch == 'a') ? 1 : 0;
			b += (ch == 'b') ? 1 : 0;
		}
		cout << min(a, b) << endl;
	}
}
