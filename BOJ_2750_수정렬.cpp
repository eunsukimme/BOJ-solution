#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int *num = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	/* sorting */
	for (int i = 1; i < N; i++) {
		int j = i - 1, key = num[i];
		while (j >= 0 && num[j] > key) {
			num[j + 1] = num[j];
			j--;
		}
		num[j + 1] = key;
	}
	/* Ãâ·Â */
	for (int i = 0; i < N; i++) {
		cout << num[i] << endl;
	}
	return 0;
}