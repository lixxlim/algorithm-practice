/**
 * https://www.acmicpc.net/problem/24356
 */
#include <iostream>
using namespace std;

int main() {
	int t1, m1, t2, m2;
	int time, round;
	cin >> t1 >> m1 >> t2 >> m2;
	m1 += t1 * 60;
	m2 += t2 * 60;
	time = m1 > m2 ? (24 * 60 - m1) + m2 : m2 - m1;
	round = time / 30;
	cout << time << " " << round << endl;
}
