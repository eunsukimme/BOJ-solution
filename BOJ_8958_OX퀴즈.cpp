#include<iostream>
#include<string>
#define MAX 81
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int list[MAX] = { 0, };
		int sum = 0;
		string s;
		cin >> s;
		for (int j = 1; j <= s.size(); j++) {
			if (s.at(j-1) == 'X')
				continue;
			list[j] = list[j - 1] + 1;
			sum += list[j];
		}
		cout << sum << endl;
	}
	return 0;
}