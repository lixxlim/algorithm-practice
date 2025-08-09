/**
 * https://www.acmicpc.net/problem/6118
 */
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <ios>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M;
	cin >> N >> M;
	vector<vector<int>> graph(N + 1);
	
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	
	vector<int> dist(N + 1);
	vector<bool> visited(N + 1);
	queue<int> q;
	
	q.push(1);
	visited[1] = true;
	while(!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int neighbor : graph[cur]) {
			if (!visited[neighbor]) {
				visited[neighbor] = true;
				dist[neighbor] = dist[cur] + 1;
				q.push(neighbor);
			}
		}
	}
	
	int max_dist = *max_element(dist.begin(), dist.end());
	vector<int> result;
	
	for (int i = 1; i <= N; ++i) {
		if (dist[i] == max_dist) {
			result.push_back(i);
		}
	}
	
	cout << result[0] << " " << max_dist << " " << result.size() << endl;
}
