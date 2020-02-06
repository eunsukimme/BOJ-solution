#include<iostream>
using namespace std;
int boj_2439(){
    int N;
    cin >> N;
    for(int i = N-1 ; i >= 0 ; i--){
        int j = 0;
        for(j = 0 ; j < i ; j++){
            cout << " ";
        }
        for(j = j; j < N ; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
