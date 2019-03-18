#include<iostream>
#include<string>
#define MAX 26
#define OPEN 0
#define CLOSE -1
using namespace std;
int main() {
	int T, sum = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string s;
		int alphabet[MAX] = { 0, };
		bool isGroup = true;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (i == s.size() - 1) {
				alphabet[s.at(i) - 'a'] == CLOSE ? isGroup = false : isGroup = true;
				break;
			}
			if (alphabet[s.at(i) - 'a'] == CLOSE) {
				isGroup = false;
				break;
			}
			if (s.at(i) == s.at(i + 1)) {
				alphabet[s.at(i) - 'a'] = OPEN;
				continue;
			}
			alphabet[s.at(i) - 'a'] = CLOSE;
		}
		if (isGroup)
			sum++;
	}
	cout << sum << endl;
}