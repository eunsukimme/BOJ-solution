#include<iostream>
#include<string>
#define MAX 26
int alphabet[MAX];
using namespace std;
int main() {
	string s;
	cin >> s;
	for (int i = 0; i < MAX; i++) {
		alphabet[i] = -1;
	}
	for (int i = 0; i < s.size(); i++) {
		if (alphabet[s.at(i)-'a'] == -1) {
			alphabet[s.at(i)-'a'] = i;
		}
	}
	for (int i = 0; i < MAX; i++) {
		cout << alphabet[i] << " ";
	}
	cout << endl;
	return 0;
}