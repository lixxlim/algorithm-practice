/**
 * https://www.acmicpc.net/problem/2527
 */
#include <bits/stdc++.h>
using namespace std;

class Squere {
	private:
		int x, y, p, q;
		
	public:
		Squere(int x, int y, int p, int q) : x(x), y(y), p(p), q(q) {}
		int getX() const { return x; }
		int getY() const { return y; }
		int getP() const { return p; }
		int getQ() const { return q; }
};

void check(const Squere& s1, const Squere& s2) {
	int dx = min(s1.getP(), s2.getP()) - max(s1.getX(), s2.getX());
	int dy = min(s1.getQ(), s2.getQ()) - max(s1.getY(), s2.getY());
	if (dx < 0 || dy < 0) { cout << "d\n"; return; } 
	if (dx == 0 && dy == 0) { cout << "c\n"; return; } 
	if (dx == 0 || dy == 0) { cout << "b\n"; return; } 
	cout << "a\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	for (int i = 0; i < 4; ++i) {
		int x1, y1, p1, q1, x2, y2, p2, q2;
		cin >> x1 >> y1 >> p1 >> q1 >> x2 >> y2 >> p2 >> q2;
		Squere sq1(x1, y1, p1, q1);
		Squere sq2(x2, y2, p2, q2);
		check(sq1, sq2);
	}
	
	return 0;
}
