#include<iostream>
#include<vector>
using namespace std;
int map[9][9];
vector<pair<int, int>> blank;
bool result;

vector<int> getCandidateNumber(int x, int y);
void print_map();
void dfs(int idx, int cnt);

int main() {
	// 지도 입력
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> map[i][j];
			if(map[i][j] == 0)
				blank.push_back({ i, j });
		}
	}
	dfs(0, 0);

	return 0;
}
void dfs(int idx, int cnt) {
	if (result) return;
	if(cnt == blank.size()) {
		print_map();
		result = true;
		return;
	}
	if (idx >= blank.size())
		return;

	int x = blank[idx].first;
	int y = blank[idx].second;

	vector<int> candidates = getCandidateNumber(x, y);

	for (int i = 0; i < candidates.size(); i++) {
		int num = candidates[i];
		map[x][y] = num;
		dfs(idx+1, cnt+1);
		map[x][y] = 0;
	}
}
void print_map() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
vector<int> getCandidateNumber(int x, int y) {
	vector<int> candidates;
	int n[10] = { 0, };
	for (int i = 0; i < 9; i++) {
		n[map[x][i]]++;
	}
	for (int i = 0; i < 9; i++) {
		n[map[i][y]]++;
	}
	int _x = (x / 3) * 3;
	int _y = (y / 3) * 3;
	for (int i = _x; i < _x + 3; i++) {
		for (int j = _y; j < _y + 3; j++) {
			n[map[i][j]]++;
		}
	}
	for (int i = 1; i < 10; i++) {
		if (n[i] == 0)
			candidates.push_back(i);
	}
	return candidates;
}