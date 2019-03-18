#include<iostream>
using namespace std;
int main() {
	int list[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> list[i];
		if (list[i] < 40) {
			list[i] = 40;
		}
		sum += list[i];
	}
	int avg = sum / 5;
	cout << avg << endl;
	return 0;
}