#include<iostream>
#include<string>
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int R;
		cin >> R;
		string str;
		cin >> str;
		for (int i = 0; i < str.size(); i++) {
			for (int j = 0; j < R; j++) {
				cout << str.at(i);
			}
		}
		cout << endl;
	}
	return 0;
}