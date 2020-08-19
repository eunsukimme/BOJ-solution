#include <iostream>
#include <vector>
using namespace std;
int boj_10871(){
    int N, X;
    cin >> N >> X;
    vector<int> v;
    for(int i = 0 ;i < N ; i++){
        int n;
        cin >> n;
        v.push_back(n);
    }
    for(int i = 0 ;i < N ;i++){
        if(v[i] < X){
            cout << v[i] << " ";
        }
    }
    return 0;
}
