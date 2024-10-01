#include <stdio.h>

/*
    다음 조건에 알맞은 코드를 작성해보세요.
    - int a[10] = {0};
    - int *pt;
    - 포인터 변수 pt를 통하여 배열 a의 10개 값을 입력 받고, 배열 a의 값을 출력해 봅시다.
*/

int main(){

    int i, a[10] = {0};
    int *pt;

    pt = a;

    for(i = 0; i < 10; i++){
        scanf("%d",(pt + i));
    }

    for (i = 0; i < 10; i++){
        printf("a[%d] = %d \n", i, a[i]);
    }

    return 0;
}