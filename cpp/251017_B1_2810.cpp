/**
 * https://www.acmicpc.net/problem/2810
 */
#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	string str;
	getline(cin, str);
	
	bool isRight = false;
	bool isCouple = false;
	int cnt = 0;
	for (char c : str) {
		if (c == 'S') {
			cnt++;
		}
		if (c == 'L') {
			if (isRight && isCouple) {
				cnt++;
			}
			if (!isRight) {
				cnt++;
				isRight = true;
			}
			isCouple = !isCouple;
		}
	}
	cout << cnt << endl;
	return 0;
}
