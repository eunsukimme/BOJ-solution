#include <iostream>
#include <cmath>
using namespace std;
int boj_2588(){
    int A, B, sum = 0;
    cin >> A;
    cin >> B;
    for(int i = 0; i < 3 ; i++){
        int digit = (B / int(pow(10, i))) % 10;
        int mul = A * digit;
        cout << mul << endl;
        sum += mul * pow(10, i);
    }
    cout << sum << endl;
    return 0;
}
