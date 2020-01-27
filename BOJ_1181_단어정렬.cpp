#include<iostream>
#include<string>
#include<vector>
#define SWAP(x, y, tmp) ((tmp)=(x)), ((x)=(y)), ((y)=(tmp))
using namespace std;
void quicksort(vector<string> &v, int s, int e);
int partition(vector<string> &v, int s, int e);
int main() {
	int N;
	vector<string> v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}
	/* quick sort */
	quicksort(v, 0, v.size() - 1);

	for (int i = 0; i < v.size(); i++) {
		if (i != 0 && v[i].compare(v[i - 1])==0) {
			continue;
		}
		cout << v[i] << endl;
	}
	return 0;
}
void quicksort(vector<string> &v, int s, int e) {
	if (s < e) {
		int m = partition(v, s, e);
		quicksort(v, s, m - 1);
		quicksort(v, m + 1, e);
	}
}
int partition(vector<string> &v, int s, int e) {
	int j = s, i = j - 1;
	string pivot = v[e], tmp;
	while (j <= e) {
		if (v[j].size() < pivot.size()) {
			i++;
			SWAP(v[i], v[j], tmp);
		}
		else if (pivot.size() == v[j].size()) {
			if (v[j].compare(pivot) < 0) {
				i++;
				SWAP(v[i], v[j], tmp);
			}
		}
		j++;
	}
	SWAP(v[i + 1], v[e], tmp);
	return i + 1;
}