#include <stdio.h>

/*
    함수의 원형
    - main 함수 시작 전 선언
    - 세미콜론으로 마침
    - 함수에 값을 전달
*/

// 01.c 사용자 정의 함수에 대하여 원형으로 작성

void draw_line(int num); // 먼저 선언 // int num = int 로 작성 가능

int main(){
    int i;

    scanf("%d", &i);

    draw_line(i);

    return 0;
}

void draw_line(int num){ // 메인 뒤에 상세 선언
    int i;

    for(i = 1; i <= num; i++){
        printf("_");
    }
}