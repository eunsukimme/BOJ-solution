#include<iostream>
using namespace std;
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    if(A >= B && A >= C){
        cout << (B >= C ? B : C) << endl;
    }
    else if(B >= A && B >= C){
        cout << (A >= C ? A : C) << endl;
    }
    else if(C >= A && C >= B){
        cout << (A >= B ? A : B) << endl;
    }
    return 0;
}
