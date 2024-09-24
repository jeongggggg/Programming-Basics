#include <stdio.h>

// 출력 결과는? 
/*
st[0] = 1
st[1] = 2
st[2] = 3
st[3] = 0
st[4] = 0
*/
int main(){
    int i, st[5] = {1,2,3};
    for(i = 0; i < 5; i++){
        printf("st[%d] = %d\n",i,st[i]);
    }

    return 0;
}