#include <stdio.h>

/*
    다음 조건에 알맞은 코드를 작성해보세요.
    - int a[10] = {0};
    - 다음의 함수를 통하여 배열 a의 값을 입력 받고 main 함수에서 배열의 값을 출력
    - 다음의 함수원형을 사용할 것 -> void get_val(int *);
*/

void get_val(int *);

int main(){

    int i, a[10] = {0};

    printf("before excute function \n");

    for (i = 0; i < 10; i++){
        printf("a[%d] = %d \n", i, a[i]);
    }

    get_val(a);

    printf("after excute function \n");

    for (i = 0; i < 10; i++){
        printf("a[%d] = %d \n", i, a[i]); // *(a + i) 도 가능
    }
    
    return 0;
};

void get_var(int *val){
    int i;

    printf("start \n");

    for (i = 0; i < 10; i++){
        printf("a[%d] = ", i);
        scanf("%d", &val[i]); // (val + i) 가능
    }
}