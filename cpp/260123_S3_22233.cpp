/**
 * https://www.acmicpc.net/problem/22233
 */
#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
#include <sstream>
#include <limits>

int  main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int N, M;
	std::cin >> N >> M;
	std::unordered_set<std::string> keywords;
	std::vector<int> res;
	
	for(int i = 0; i < N; ++i) {
		std::string str;
		std::cin >> str;
		keywords.insert(str);
	}
	
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for(int i = 0; i < M; ++i) {
		std::string line;
		std::getline(std::cin, line);
		
		std::stringstream ss(line);
		std::string word;
		while (std::getline(ss, word, ',')) {
			keywords.erase(word);
		}
		res.push_back((int)keywords.size());
	}
	
	for(auto &x : res) {
		std::cout << x << "\n";
	}
	return 0;
}
