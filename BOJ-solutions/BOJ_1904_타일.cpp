#include<iostream>
#define MAX 1000001
using namespace std;
int f[MAX] = {0};
int boj_1904(){
    f[1] = 1; f[2] = 2;
    int N;
    cin >> N;
    if(N <= 2){
        cout << f[N] << endl;
        return 0;
    }
    for(int i = 3 ; i <= N ; i++){
        f[i] = ( f[i-1] + f[i-2] ) % 15746;
    }
    cout << f[N] % 15746 << endl;
    return 0;
}
