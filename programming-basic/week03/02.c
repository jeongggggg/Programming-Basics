#include <stdio.h>

// 출력 결과는? - 쓰레기값 나옴
int main(){
    int i, st[5];
    for(i = 0; i < 5; i++){
        printf("st[%d] = %d\n",i,st[i]);
    }

    return 0;
}