#include<iostream>
using namespace std;
int boj_1330(){
    int A, B;
    cin >> A >> B;
    cout << ( A > B ? ">" : ( A < B  ? "<" : "==" )) << endl;
    return 0;
}
