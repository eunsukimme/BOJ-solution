#include <iostream>

using namespace std;

int boj_10952(){
    int A, B;
    
    cin >> A >> B;
    while(A != 0 && B != 0){
        cout << A + B << endl;
        cin >> A >> B;
    }
    return 0;
}
