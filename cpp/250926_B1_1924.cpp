/**
 * https://www.acmicpc.net/problem/1924
 */
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
	const vector<string> DAYS = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	map<int, int> MONTHS = {{1, 31},{2, 28},{3, 31},{4, 30},{5, 31},{6, 30},{7, 31},{8, 31},{9, 30},{10, 31},{11, 30},{12, 31}};
	int X, Y;
	cin >> X >> Y;
	int days = Y;
	for (int i = 1; i < X; ++i) {
		days += MONTHS[i];
	}
	cout << DAYS[days % 7] << endl;
	return 0;
}
