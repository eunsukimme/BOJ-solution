#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	int test_case;
	cin >> test_case;
	cin.ignore();
	for (int t = 0; t < test_case; t++) {
		string s;
		getline(cin, s);
		stack<char> left;	// 커서 왼쪽 문자 스택
		stack<char> right;	// 커서 오른쪽 문자 스택
		for (int i = 0; i < s.length(); i++) {
			switch (s[i]) {
			case '<':
				if (left.empty())
					break;
				right.push(left.top());
				left.pop();
				break;
			case '>':
				if (right.empty())
					break;
				left.push(right.top());
				right.pop();
				break;
			case '-':
				if (left.empty())
					break;
				left.pop();
				break;
			default:
				left.push(s[i]);
				break;
			}
		}
		while (!left.empty()) {
			right.push(left.top());
			left.pop();
		}
		while (!right.empty()) {
			cout << right.top();
			right.pop();
		}
		cout << endl;
	}


	return 0;
}