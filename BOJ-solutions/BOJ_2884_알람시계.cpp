#include<iostream>
using namespace std;
int main(){
    int H, M;
    cin >> H >> M;
    if(M >= 45){
        M -= 45;
    }
    // M 이 45보다 작으면 H가 1 줄어든다
    else {
        M = 60 - (45 - M);
        if(H == 0){
            H = 23;
        }
        else {
            H -= 1;
        }
    }
    cout << H << " " << M << endl;
    return 0;
}
