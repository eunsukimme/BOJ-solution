#include<iostream>
#include<vector>
#include<deque>
#include<math.h>
#define LEFT -1
#define RIGHT 1
using namespace std;
void rotateVector(vector<int> &v, int dir);
void decVector(vector<int> &v);
deque<int> dq;
int main() {
	int N, M, cnt = 0;
	vector<int> v;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}
	for (int i = 0; i < M; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}
	for (int i = 0; i < M; i++) {
		// 인덱스가 빠져나갈 수 있다면
		if (v.front() == 1) {
			dq.pop_front();
			v.erase(v.begin());
			decVector(v);
		}
		// 오른쪽으로 도는게 더 빠른경우
		else if (dq.size() + 1 - v.front() < v.front() - 1) {
			while (v.front() != 1) {
				cnt++;
				int val = dq.back();
				dq.pop_back();
				dq.push_front(val);
				rotateVector(v, RIGHT);
			}
			dq.pop_front();
			v.erase(v.begin());
			decVector(v);
		}
		// 왼쪽으로 도는게 더 빠른경우
		else {
			while (v.front() != 1) {
				cnt++;
				int val = dq.front();
				dq.pop_front();
				dq.push_back(val);
				rotateVector(v, LEFT);
			}
			dq.pop_front();
			v.erase(v.begin());
			decVector(v);
		}
	}
	cout << cnt << endl;
	return 0;
}
void rotateVector(vector<int> &v, int dir) {
	if (dir == RIGHT) {
		for (int i = 0; i < v.size(); i++) {
			v[i] = v[i]%dq.size() + 1;
		}
	}
	else if (dir == LEFT) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == 1) {
				v[i] = dq.size();
			}
			else v[i]--;
		}
	}
}
void decVector(vector<int> &v) {
	for (int i = 0; i < v.size(); i++) {
		v[i]--;
	}
}