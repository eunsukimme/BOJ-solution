#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	int* T = new int[N + 1];
	int* P = new int[N + 1];
	int* D = new int[N + 2];
	for (int i = 1; i <= N; i++) {
		cin >> T[i] >> P[i];
		D[i] = 0;
	}
	D[N + 1] = 0;
	for (int i = N; i >= 1; i--) {
		if (i + T[i] > N+1)
			D[i] = D[i + 1];
		else
			D[i] = max(D[i + 1], D[i + T[i]] + P[i]);
	}
	cout << D[1];
	return 0;
}