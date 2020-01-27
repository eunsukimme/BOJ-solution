#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#define PATH 1
#define VISITED 2
using namespace std;
void DFS(int s);
void BFS(vector<vector<int>> map);
int N, M, start;
vector<vector<int>> map;
queue<int> q;
int main() {
	cin >> N >> M >> start;
	map.assign(N+1, vector<int>(N+1, 0));
	// 牢立 青纺 积己
	for (int i = 0; i < M; i++) {
		int s, e;
		cin >> s >> e;
		map[s][e] = PATH;
		map[e][s] = PATH;
	}
	vector<vector<int>> map2(map);
	DFS(start); cout << endl;
	BFS(map2); cout << endl;

	return 0;
}
void DFS(int s) {
	cout << s << " ";
	for (int i = 1; i <= N; i++) {
		map[i][s] = VISITED;
	}
	for (int i = 1; i <= N; i++) {
		if (map[s][i] == PATH) {
			DFS(i);
		}
	}
}
void BFS(vector<vector<int>> map) {
	q.push(start);
	while (!q.empty()) {
		int cur = q.front();
		cout << cur << " ";
		q.pop();
		for (int i = 1; i <= N; i++) {
			if (map[cur][i] == PATH) {
				map[i][cur] = VISITED;
				for (int j = 1; j <= N; j++) {
					map[j][i] = VISITED;
				}
				q.push(i);
			}
		}
	}
}