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
			// ���� ��� ���� �� �߿䵵�� ���� ū �ε��� ã�´�
			int max = 0;
			for (int j = 1; j < v.size(); j++) {
				if (v[max] < v[j]) {
					max = j;
				}
			}
			// ���� ������ ��
			int front = v.front();
			// ���� ������ �߿䵵�� ������ �� ū �ͺ��� ���ٸ�
			if (front < v[max]) {
				// ã���� �ϴ� ������ �ε����� 0�̸� �� �ڷ� ��
				if (M == 0) {
					M = v.size() - 1;
				}
				// ã���� �ϴ� ���� ��ĭ ������
				else {
					M--;
				}
				// ������ �� �ڷ� ������
				v.erase(v.begin());
				v.push_back(front);
			}
			// ���� ������ �߿䵵�� ���� ũ�ٸ� ����Ʈ�Ѵ�
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