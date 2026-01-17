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
	
	int size = N + 1;
	int blocks = (size + 63) / 64;
	std::vector<unsigned long long> bits(blocks, 0);
	
	for (int i = 0; i < size; ++i) {
		int x;
		std::cin >> x;
		
		int block = x >> 6;
		int offset = x & 63;
		unsigned long long mask = 1ULL << offset;
		
		if (bits[block] & mask) {
			std::cout << x << "\n";
			return 0;
		}
		
		bits[block] |= mask;
	}
	return 0;
}
