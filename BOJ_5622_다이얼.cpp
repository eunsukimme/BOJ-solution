#include<iostream>
#include<string>
#define MAX 10
using namespace std;
int main() {
	string str[MAX] = { " ", " ", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };
	int number[MAX] = { 11, };
	int sum = 0;
	for (int i = 1; i < MAX; i++) {
		number[i] = i + 1;
	}
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		for (int j = 2; j < MAX; j++) {
			if (str[j].find(s.at(i)) != string::npos) {
				sum += number[j];
			}
		}
	}
	cout << sum << endl;
	return 0;
}