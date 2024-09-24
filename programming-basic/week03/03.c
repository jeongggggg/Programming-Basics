#include <stdio.h>

// 출력 결과는?
/*
st[0] = 0
st[1] = 0
st[2] = 0
st[3] = 0
st[4] = 0
*/
int main(){
    int i, st[5] = {0};
    for(i = 0; i < 5; i++){
        printf("st[%d] = %d\n",i,st[i]);
    }

    return 0;
}