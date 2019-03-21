#include<stdio.h>
#include<vector>
#define MAX 10001
using namespace std;
int main() {
	int N;
	scanf("%d", &N);
	vector<short> c(MAX, 0);
	for (int i = 0; i < N; i++) {
		int n;
		scanf("%d", &n);
		c[n]++;
	}
	for (int i = 0; i < c.size(); i++) {
		for (int j = 0; j < c[i]; j++) {
			printf("%d\n", i);
		}
	}
	return 0;
}