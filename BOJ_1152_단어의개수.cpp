#include<iostream>
#include<string.h>
#define MAX 1000000
using namespace std;
int main() {
	char str[MAX];
	int sum = 0;
	cin.getline(str, MAX, '\n');

	char * token = strtok(str, " ");
	while (token != NULL) {
		sum++;
		token = strtok(NULL, " ");
	}
	cout << sum << endl;

	return 0;
}