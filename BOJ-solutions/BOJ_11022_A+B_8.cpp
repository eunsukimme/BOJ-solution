#include<stdio.h>
int boj_11022(){
    int T;
    scanf("%d", &T);
    for(int i = 1 ;i  <= T ;i++){
        int A, B;
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d + %d = %d\n", i, A, B, A+B);
    }
    return 0;
}