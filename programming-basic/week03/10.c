#include <stdio.h>
/*
    다음의 문제를 해결하는 코드를 작성해보세요.

    - 10명의 학생 대상, 각 학생의 반(1,2,3 중 선택)을 입력하고, 학생별 반을 출력하는 프로그램
    - ban[10]은 0으로 초기화
    - 반 입력 시 , 1~3반의 값이 아닐 경우 다시 입력
    - 변수(int) : ban, I, j 사용
*/

int main(){

    int ban[10] = {0}; // 초기화
    int i, k;

    printf("enter class (choose. 1~3) \n");

    for (i = 0; i < 10; i++){
        printf("ban[%d] : ", i);
        scanf("%d", &ban[i]);

        if(ban[i] > 3 || ban[i] < 0){
            while(ban[i] > 3 || ban[i] < 1){
                printf("error. \n ban[%d] : ", i);
                scanf("%d", &ban[i]);
            }
        }
    }

    for (i = 0; i < 10; i++){
        printf("class[%d] : %d\n", i, ban[i]);
    }
    
    return 0;
}