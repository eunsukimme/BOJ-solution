#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int acc = 0, n, way = 0, i=1;
	cin >> n;
	while(way < n) {
		way = 6 * acc + 1;
		acc += i++;
	}
	cout << i-1 << endl;
	return 0;
}