#include<iostream>
using namespace std;
int boj_2753(){
    int N;
    cin >> N;
    cout << ( ( (N % 4 == 0 && N % 100 != 0) || N % 400 == 0 ) ? 1 : 0 ) << endl;
    return 0;
}
