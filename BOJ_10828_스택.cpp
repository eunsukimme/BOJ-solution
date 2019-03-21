#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#define MAX 12
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<int> stack;
	cin.ignore(256, '\n');
	for (int i = 0; i < N; i++) {
		string s;
		getline(cin, s);
		
		string buf;
		vector<string> tokens;
		stringstream ss(s);
		while (ss >> buf) {
			tokens.push_back(buf);
		}
		if (tokens[0].compare("push") == 0) {
			int val = atoi(tokens[1].c_str());
			stack.push_back(val);
		}
		else if (tokens[0].compare("pop") == 0) {
			if (!stack.empty()) {
				cout << stack.back() << endl;
				stack.pop_back();
			}
			else cout << "-1" << endl;
		}
		else if (tokens[0].compare("size") == 0) {
			cout << stack.size() << endl;
		}
		else if (tokens[0].compare("empty") == 0) {
			if (stack.empty()) {
				cout << "1" << endl;
			}
			else cout << "0" << endl;
		}
		else if (tokens[0].compare("top") == 0) {
			if (stack.empty()) {
				cout << "-1" << endl;
			}
			else cout << stack.back() << endl;
		}

	}
	return 0;
}