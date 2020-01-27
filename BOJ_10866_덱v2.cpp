#include<iostream>
#include<string>
#include<sstream>
#include<deque>
using namespace std;
int main() {
	int N;
	deque<int> dq;
	cin >> N;
	cin.ignore(256, '\n');
	for (int i = 0; i < N; i++) {
		string s;
		getline(cin, s);

		string buf;
		stringstream ss(s);
		string tokens[2];
		int cnt = 0;
		while (ss >> buf) {
			tokens[cnt++] = buf;
		}
		if (tokens[0].compare("push_front") == 0) {
			int val = atoi(tokens[1].c_str());
			dq.push_front(val);
		}
		if (tokens[0].compare("push_back") == 0) {
			int val = atoi(tokens[1].c_str());
			dq.push_back(val);
		}
		if (tokens[0].compare("pop_front") == 0) {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		if (tokens[0].compare("pop_back") == 0) {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else{
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		if (tokens[0].compare("size") == 0) {
			cout << dq.size() << endl;
		}
		if (tokens[0].compare("empty") == 0) {
			if (dq.empty()) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		if (tokens[0].compare("front") == 0) {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else cout << dq.front() << endl;
		}
		if (tokens[0].compare("back") == 0) {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else cout << dq.back() << endl;
		}
	}
	return 0;
}