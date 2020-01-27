#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
deque<pair<int, int>> dq;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상
	int N, L;
	cin >> N >> L;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		while (!dq.empty() && dq.front().second <= i-L) dq.pop_front();
		while (!dq.empty() && dq.back().first >= tmp) dq.pop_back();
		dq.push_back({ tmp, i });
		cout << dq.front().first << " ";
	}
	return 0;
}