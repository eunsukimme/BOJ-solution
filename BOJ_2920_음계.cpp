#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main() {
	int list[8];
	int diff;
	string s;
	for (int i = 0; i < 8; i++) {
		cin >> list[i];
	}
	int sub;
	for (int i = 1; i < 8; i++) {
		if (i == 1) {
			sub = list[i] - list[i - 1];
			continue;
		}
		int _sub = list[i] - list[i - 1];
		if (sub != _sub) {
			s = "mixed";
			break;
		}
		else if (i == 7) {
			switch (sub) {
			case 1:
				s = "ascending";
				break;
			case -1:
				s = "descending";
				break;
			}
		}
	}
	cout << s << endl;
	return 0;
}