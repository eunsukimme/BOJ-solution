#include<stdio.h>
#define MAX 10
int money[MAX];
int main()
{
	int N, K;
	int count = 0;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%d", &money[i]);
	}
	for (int i = N - 1; i >= 0; i--) {
		if (money[i] > K)
			continue;
		else if (money[i] <= K) {
			K -= money[i];
			count++; i++;
		}
		if (K == 0)
			break;
	}
	printf("%d", count);
	return 0;
}