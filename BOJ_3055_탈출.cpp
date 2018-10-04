#include<iostream>
#include<deque>
#include<tuple>
#define MAX 50
#define X 0
#define Y 1
#define T 2
using namespace std;
char map[MAX][MAX];
int main() {
	int R, C;
	// 큐에 원소는 x좌표, y좌표, 좌표 정보, count 값으로 구성
	deque<tuple<int, int, int>> water;
	deque<tuple<int, int, int>> mole;
	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> map[i][j];
			if (map[i][j] == '*')
				water.push_back({ i, j, 0 });
			else if (map[i][j] == 'S')
				mole.push_back({ i, j, 0});
		}
	}
	// 큐에서 번갈아 빼면서 좌표 재정의
	int time = 0;	// 각 단계를 동기화 값. 이 값에 해당하는 원소만 꺼낸다
	bool result = false;
	while (!mole.empty()) {
		// 해당 단계의 물 먼저 빼서 채운다
		while (!water.empty() && get<T>(water.front()) == time) {
			// x, y 좌표가 범위를 벗어나면 그냥 패스한다
			if (get<X>(water.front()) < 0 || get<X>(water.front()) >= R ||
				get<Y>(water.front()) < 0 || get<Y>(water.front()) >= C ||
				map[get<X>(water.front())][get<Y>(water.front())] == 'D' || 
				map[get<X>(water.front())][get<Y>(water.front())] == 'X' ||
				map[get<X>(water.front())][get<Y>(water.front())] == '&') {
				water.pop_front();
				continue;
			}
			// 그게 아니라면 현재 좌표를 물로 채운다(&표시)
			// 그리고 4방향에 대한 정보를 큐에 넣는다
			// 이때 count를 자신의 count 값보다 1 증가시킨다
			else {
				map[get<X>(water.front())][get<Y>(water.front())] = '&';
				water.push_back({ get<X>(water.front()) - 1, get<Y>(water.front()) , get<T>(water.front()) + 1 });
				water.push_back({ get<X>(water.front()), get<Y>(water.front()) + 1 , get<T>(water.front()) + 1 });
				water.push_back({ get<X>(water.front()) + 1, get<Y>(water.front()) , get<T>(water.front()) + 1 });
				water.push_back({ get<X>(water.front()), get<Y>(water.front()) - 1, get<T>(water.front()) + 1 });
				water.pop_front();
			}
		}
		// 이제 두더지가 이동한다
		while (!mole.empty() && get<T>(mole.front()) == time) {
			if (get<X>(mole.front()) < 0 || get<X>(mole.front()) >= R ||
				get<Y>(mole.front()) < 0 || get<Y>(mole.front()) >= C ||
				map[get<X>(mole.front())][get<Y>(mole.front())] == 'X' ||
				map[get<X>(mole.front())][get<Y>(mole.front())] == '&' ||
				map[get<X>(mole.front())][get<Y>(mole.front())] == 'o') {
				mole.pop_front();
				continue;
			}
			// 목적지 도달하면 탈출
			else if (map[get<X>(mole.front())][get<Y>(mole.front())] == 'D') {
				result = true;
				break;
			}
			// 아니라면 두더지가 이동한다
			else {
				// 원래 자리에는 'o'를 남겨서 지나간 자리임을 표시
				map[get<X>(mole.front())][get<Y>(mole.front())] = 'o';
				mole.push_back({ get<X>(mole.front()) - 1, get<Y>(mole.front()), get<T>(mole.front()) + 1 });
				mole.push_back({ get<X>(mole.front()), get<Y>(mole.front()) + 1, get<T>(mole.front()) + 1 });
				mole.push_back({ get<X>(mole.front()) + 1, get<Y>(mole.front()), get<T>(mole.front()) + 1 });
				mole.push_back({ get<X>(mole.front()), get<Y>(mole.front()) - 1, get<T>(mole.front()) + 1 });
				mole.pop_front();
			}
		}
		if (result)
			break;
		
		time++;
	}

	switch (result) {
	case true:
		cout << time;
		break;
	case false:
		cout << "KAKTUS";
		break;
	}

	return 0;
}