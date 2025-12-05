/**
 * https://www.acmicpc.net/problem/27964
 */
#include <bits/stdc++.h>
using namespace std;

bool endsWith(const string& s, const string& suffix) {
    if (s.size() < suffix.size()) return false;
    return std::equal(s.end() - suffix.size(), s.end(), suffix.begin());
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N;
	if (!(cin >> N)) return 0;
	
	string s;
	set<string> cheeses;
	for (int i = 0; i < N; ++i) {
		cin >> s;
		if (endsWith(s, "Cheese")) {
			cheeses.insert(s);
		}
	}
	
	string result = cheeses.size() > 3 ? "yummy" : "sad";
	cout << result << endl;
	return 0;
}
