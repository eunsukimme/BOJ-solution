#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
int time[MAX];
int compare(const void *a, const void *b);
int main()
{
	int N; int total = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &time[i]);
	qsort(time, N, sizeof(time[0]), compare);
	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = 0; j <= i; j++) {
			sum += time[j];
		}
		total += sum;
	}
	printf("%d", total);

	return 0;
}
int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if (num1 < num2)
		return -1;
	else if (num1 > num2)
		return 1;
	return 0;
}