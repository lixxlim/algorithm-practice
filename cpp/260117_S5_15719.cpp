/**
 * https://www.acmicpc.net/problem/15719
 */
#include <iostream>
#include <vector>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int N;
	std::cin >> N;
	
	int x;
	std::vector<int> v(N+1, 0);
	for (int i = 0; i < N+1; ++i) {
		std::cin >> x;
		if (v[x] == 1) {
			std::cout << x << "\n";
			break;
		}
		v[x] = 1;
	}
	return 0;
}
