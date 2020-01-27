#include<iostream>
#include<vector>
#define SWAP(x, y, tmp) ((tmp)=(x)), ((x)=(y)), ((y)=(tmp))
using namespace std;
int main() {
	int T, N, M;
	cin >> T;
	for (int i = 0; i < T; i++) {
		vector<int> v;
		cin >> N >> M;
		int tmp, cnt = 0;
		for (int j = 0; j < N; j++) {
			int n;
			cin >> n;
			v.push_back(n);
		}
		while (!v.empty()) {
			// 현재 대기 문서 중 중요도가 가장 큰 인덱스 찾는다
			int max = 0;
			for (int j = 1; j < v.size(); j++) {
				if (v[max] < v[j]) {
					max = j;
				}
			}
			// 현재 문서와 비교
			int front = v.front();
			// 현재 문서의 중요도가 나머지 중 큰 것보다 낮다면
			if (front < v[max]) {
				// 찾고자 하는 문서의 인덱스가 0이면 맨 뒤로 뺌
				if (M == 0) {
					M = v.size() - 1;
				}
				// 찾고자 하는 문서 한칸 앞으로
				else {
					M--;
				}
				// 문서를 맨 뒤로 보낸다
				v.erase(v.begin());
				v.push_back(front);
			}
			// 현재 문서의 중요도가 가장 크다면 프린트한다
			else {
				cnt++;
				if (M == 0) {
					break;
				}
				v.erase(v.begin());
				M--;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}