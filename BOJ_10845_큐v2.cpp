#include<iostream>
#include<string>
#include<queue>
#include<sstream>
using namespace std;
int main() {
	int N;
	queue<int> q;
	cin >> N;
	cin.ignore(256, '\n');
	for (int i = 0; i < N; i++) {
		int cnt = 0;
		string s;
		getline(cin, s);

		stringstream ss(s);
		string buf;
		string tokens[2];
		while (ss >> buf) {
			tokens[cnt] = buf;
			cnt++;
		}
		if (tokens[0].compare("push") == 0) {
			int val = atoi(tokens[1].c_str());
			q.push(val);
		}
		if (tokens[0].compare("pop") == 0) {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		if (tokens[0].compare("size") == 0) {
			cout << q.size() << endl;
		}
		if (tokens[0].compare("empty") == 0) {
			if (q.empty()) {
				cout << 1 << endl;
			}
			else cout << 0 << endl;
		}
		if (tokens[0].compare("front") == 0) {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else cout << q.front() << endl;
		}
		if (tokens[0].compare("back") == 0) {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else cout << q.back() << endl;
		}
	}
	return 0;
}