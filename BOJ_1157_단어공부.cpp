#include<iostream>
#include<string>
#include<algorithm>
#define MAX 26
int list[MAX] = { 0, };
using namespace std;
int main() {
	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::toupper);

	for (int i = 0; i < s.size(); i++) {
		list[s.at(i) - 'A']++;
	}
	int max = list[0];
	int max_id = 0;
	for (int i = 1; i < MAX; i++) {
		if (max < list[i]) {
			max = list[i];
			max_id = i;
		}
	}
	for (int i = 0; i < MAX; i++) {
		if (list[i] == max && max_id != i) {
			cout << "?" << endl;
			return 0;
		}
	}
	cout << char('A'+max_id) << endl;
	return 0;
}