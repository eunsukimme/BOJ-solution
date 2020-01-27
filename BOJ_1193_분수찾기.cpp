#include<iostream>
#define UP 1
#define DOWN -1
using namespace std;
int main() {
	int X;
	cin >> X;
	int a = 1, b = 1, cnt = 1, dir = UP;
	while (cnt++ < X) {
		if (dir == UP && a == 1) {
			b += 1; dir = DOWN;
			continue;
		}
		if (dir == DOWN && b == 1) {
			a += 1; dir = UP;
			continue;
		}
		a += -dir;
		b += dir;
	}
	cout << a << "/" << b << endl;
	return 0;
}