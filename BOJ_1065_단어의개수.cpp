#include<iostream>
#define MAX 6
using namespace std;
bool isHansoo(int n);
int main0() {
	int N, sum = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		if (isHansoo(i)) {
			sum += 1;
		}
	}
	cout << sum << endl;
	return 0;
}
bool isHansoo(int n) {
	if (n < 100) {
		return true;
	}
	else {
		int digits[MAX] = { 0, };
		int id = 0;
		int diff = 0;
		while (n > 0) {
			int digit = n % 10;
			n /= 10;
			digits[id] = digit;
			if (id == 1) {
				diff = digits[id] - digits[id - 1];
			}
			if (id > 1) {
				int _diff = digits[id] - digits[id - 1];
				if (diff != _diff) {
					return false;
				}
			}
			id++;
		}
		return true;
	}

}