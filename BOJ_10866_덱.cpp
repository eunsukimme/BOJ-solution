#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int N;
	vector<int> v;
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
			v.insert(v.begin(), val);
		}
		if (tokens[0].compare("push_back") == 0) {
			int val = atoi(tokens[1].c_str());
			v.push_back(val);
		}
		if (tokens[0].compare("pop_front") == 0) {
			if (v.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << v.front() << endl;
				v.erase(v.begin());
			}
		}
		if (tokens[0].compare("pop_back") == 0) {
			if (v.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << v.back() << endl;
				v.pop_back();
			}
		}
		if (tokens[0].compare("size") == 0) {
			cout << v.size() << endl;
		}
		if (tokens[0].compare("empty") == 0) {
			if (v.empty()) {
				cout << 1 << endl;
			}
			else cout << 0 << endl;
		}
		if (tokens[0].compare("front") == 0) {
			if (v.empty()) {
				cout << -1 << endl;
			}
			else cout << v.front() << endl;
		}
		if (tokens[0].compare("back") == 0) {
			if (v.empty()) {
				cout << -1 << endl;
			}
			else cout << v.back() << endl;
		}
	}
	return 0;
}