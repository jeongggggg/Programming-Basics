#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    <결과> 는 주사위 5번 던진 결과에 대한 출력입니다. 
    <결과> 와 같이 출력되도록 다음의 코드를 완성해보세요.
*/

int main(){
    srand(time(NULL));
    int a[5] = {0};
    int i, j;
    for (i = 0; i < 5; i++){
        a[i] = rand() % 6 + 1;
        for (j = 0; j < a[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}