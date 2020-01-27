#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string str[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string s;
	int cnt = 0;
	cin >> s;
	for (int i = 0; i < 8; i++) {
		int pos = 0;
		while ((pos = s.find(str[i], pos)) != string::npos) {
			s.replace(pos, str[i].length(), " ");
			cnt++;
		}
	}
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
	cnt += s.size();
	cout << cnt << endl;
	
	return 0;
}