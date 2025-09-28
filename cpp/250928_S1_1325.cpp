/**
 * https://www.acmicpc.net/problem/1325
 */
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int bfs(vector<vector<int>>& graph, int N, int i) {
	int ret = 1;
	vector<bool> visited(N+1, false);
	queue<int> q;
	
	visited[i] = true;
	q.push(i);
	
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int nxt: graph[cur]) {
			if (!visited[nxt]) {
				visited[nxt] = true;
				q.push(nxt);
				ret += 1;
			}
		}
	}
	
	return ret;
}

int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<int>> graph(N+1);
	for (int i = 0; i < M; ++i) {
		int A, B;
		cin >> A >> B;
		graph[B].push_back(A);
	}
	int max = 0;
	vector<int> result;
	for (int i = 1; i <= N; ++i) {
		int ret = bfs(graph, N, i);
		if (ret == max) {
			result.push_back(i);
		}
		if (ret > max) {
			max = ret;
			result.clear();
			result.push_back(i);
		}
	}
	sort(result.begin(), result.end());
	for (int r : result) {
		cout << r << " ";
	}
	cout << endl;
	return 0;
}
