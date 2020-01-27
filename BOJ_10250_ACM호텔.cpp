#include<iostream>
using namespace std;
int main() {
	int T, H, W, N;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		int floor = N % H == 0 ? H : N % H;
		int dist = N % H == 0 ? N / H : N / H + 1;
		if (dist / 10 < 1) {
			cout << floor << "0" << dist << endl;
		}
		else {
			cout << floor << dist << endl;
		}
	}
	return 0;
}