/**
 * https://www.acmicpc.net/problem/1459
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long X, Y, W, S;
	cin >> X >> Y >> W >> S;
	
	long long minn = min(X, Y), maxx = max(X, Y), diff = maxx - minn;
	long long dist = W * 2 <= S 
		? (X + Y) * W
		: W <= S
			? minn * S + diff * W
			: minn * S + diff / 2 * 2 * S + diff % 2 * W;
	
	cout << dist << endl;
	return 0;
}
