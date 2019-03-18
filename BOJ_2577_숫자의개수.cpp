#include<iostream>
#include<string>
#define MAX 10
using namespace std;
int main() {
	int A, B, C;
	int freq[MAX] = { 0, };
	cin >> A >> B >> C;
	int mul = A * B * C;
	string s = to_string(mul);
	for (int i = 0; i < s.size(); i++) {
		int id = int(s.at(i) - '0');
		freq[id]++;
	}
	for (int i = 0; i < MAX; i++) {
		cout << freq[i] << endl;
	}
	return 0;
}