/**
 * https://www.acmicpc.net/problem/25494
 */
#include <iostream>
using namespace std;

int main() {
	int t;
	int a, b, c;
	int ret;
	
	cin >> t;
	while(t--) {
		cin >> a >> b >> c;
		ret = 0;
		for(int x = 1; x <= a; x++) {
			for(int y = 1; y <= b; y++) {
				for(int z = 1; z <= c; z++) {
					if(x % y == y % z && y % z == z % x) {
						ret++;
					}
				}
			}
		}
		cout << ret << endl;
	}
}
