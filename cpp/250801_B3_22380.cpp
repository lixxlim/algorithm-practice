/**
 * https://www.acmicpc.net/problem/22380
 */
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> res; // 정답보관 벡터
	
	while (true) {
		int N; // 참가자
		int M; // 전체비용
		int per; // 명당 수금필요금액
		int money = 0; // 수금된 금액
		
		std::cin >> N >> M;
		if (N == 0 && M == 0) {
			break;
		}
		
		per = M / N;
		for (int i = 0; i < N; ++i) {
			int inp;
			std::cin >> inp;
			money += std::min(inp, per);
		}
		
		res.push_back(money);
	}
	
	for (int num: res) {
		std::cout << num << std::endl;
	}
}

