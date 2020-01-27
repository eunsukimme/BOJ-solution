#include<iostream>
#include<stack>
#include<sstream>
using namespace std;
int main() {
	int N;
	stack<int> st;
	cin >> N;
	cin.ignore(256, '\n');
	for (int i = 0; i < N; i++) {
		int j = 0;
		string s;
		getline(cin, s);

		string buf;
		string tokens[2];
		stringstream ss(s);
		while (ss >> buf) {
			tokens[j++] = buf;
		}
		if (tokens[0].compare("push") == 0) {
			int val = atoi(tokens[1].c_str());
			st.push(val);
		}
		if (tokens[0].compare("pop") == 0) {
			if (st.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << st.top() << endl;
				st.pop();
			}
		}
		if (tokens[0].compare("size") == 0) {
			cout << st.size() << endl;
		}
		if (tokens[0].compare("empty") == 0) {
			if (st.empty()) {
				cout << "1" << endl;
			}
			else cout << "0" << endl;
		}
		if (tokens[0].compare("top") == 0) {
			if (st.empty()) {
				cout << "-1" << endl;
			}
			else cout << st.top() << endl;
		}
	}
	return 0;
}