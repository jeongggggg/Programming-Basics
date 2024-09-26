#include <stdio.h>

// draw_line : 입력한 길이만큼 _ 출력하기

void draw_line(int num){
    int i; // 지역 변수

    for(i = 1; i <= num; i++){
        printf("_");
    }
}

int main(){
    int i;

    scanf("%d", &i);

    draw_line(i);

    return 0;
}

/*
    i와 num의 변수 이름이 달라도 되는 이유?
    - main함수의 i값이 복사되어 num 변수에 대입됨
    - i와 num은 서로 다른 변수이므로 이름이 달라도 됨
    - 함수에 값을 전달할 때, 자료형과 복사되는 값의 개수는 일치해야 함.
*/