/**
 * https://www.acmicpc.net/board/view/101729
 */
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int ret = 3;
	
	cin >> a >> b >> c;
	
	if(a + b == c || a + c == b || b + c == a) {
		ret = 1;
	}
	if(a * b == c || a * c == b || b * c == a) {
		ret = 2;
	}
	
	cout << ret << endl;
}
