#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    n명 학생의 달리기 결과를 '*' 로 나타내 보세요
    - 함수 원형으로 사용할 것
    - n명 학생의 10m 달리기 결과를 초 단위로 측정하기
    ㄴ 난수 이용(1 ~ 10초로 제한)
    - 함수명
    ㄴ int esti_sec(void); // 초 측정
    ㄴ void display_sec(int number, int distance); //  거리에 따라 '*' 로 나타내기
*/

int esti_sec(void);
void display_sec(int, int); 

int main(){

    int i, num, score;

    printf("학생 수 : ");
    scanf("%d",&num);

    for(i = 1 ;i <= num; i++){
        score = esti_sec();
        display_sec(i,score);
    }

    return 0;
}

int esti_sec(){

    return rand() % 10 + 1;
}

void display_sec(int number, int distance){

    int i;

    printf("number %d :", number);

    for(i = 0; i < distance; i++ ) {
        printf("*");
    }

    printf("\n");
    
}