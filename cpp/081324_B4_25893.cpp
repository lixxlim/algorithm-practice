/**
 * https://www.acmicpc.net/problem/25893
 */
#include <iostream>
using namespace std;

int main() {
	int n;
	int i;
	int a, b, c;
	int cnt;
	const char* map[] = {
		"zilch",
		"double",
		"double-double",
		"triple-double"
	};
	
	cin >> n;
	for(i = 0; i < n; i++) {
		cin >> a >> b >> c;
		cnt = 0;
		if(a > 9) cnt++;
		if(b > 9) cnt++;
		if(c > 9) cnt++;
		cout << a << " " << b << " " << c << "\n" << map[cnt] << "\n" << endl;
	}
}
