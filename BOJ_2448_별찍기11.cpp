#include<iostream>
using namespace std;
#define MAX_WIDTH 6143
#define MAX_HEIGHT 3072
char map[MAX_HEIGHT][MAX_WIDTH];

void drawMap(int N);
void drawStar(int x, int y);
void printStar(int N, int x, int y);

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2*N - 1; j++) {
			map[i][j] = ' ';
		}
	}
	printStar(N, N - 1, 0);
	drawMap(N);
	return 0;
}
void drawMap(int N) {
	for (int i = 0; i < N ; i++) {
		for (int j = 0; j < 2 * N - 1; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}
}
void drawStar(int x, int y) {
	map[y][x] = '*';
	map[y + 1][x - 1] = '*'; map[y + 1][x + 1] = '*';
	map[y + 2][x - 2] = '*'; map[y + 2][x - 1] = '*';
	map[y + 2][x] = '*'; map[y + 2][x + 1] = '*'; map[y + 2][x + 2] = '*';
}
void printStar(int N, int x, int y) {
	if (N == 3) {
		drawStar(x, y);
	}
	else {
		printStar(N / 2, x, y);
		printStar(N / 2, x - (N / 2), y + (N / 2));
		printStar(N / 2, x + (N / 2), y + (N / 2));
	}
}