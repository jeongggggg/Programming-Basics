#include <stdio.h>

/*
    실수를 입력받고 반올림값을 출력하는 프로그램을 작성해 보세요.
    - 함수 원형으로 선언할 것
    - 함수명
    ㄴ int banolim(float) // float 형 매개변수를 입력받아 int 형 결과값 리턴
*/

int banolim(float); // 한개의 경우 원형은 자료형만 작성해도 됨

int main(){

    float r;
    int i;

    printf("실수를 입력하세요. 반올림되어 출력됩니다 : ");
    scanf("%f", &r);

    i = banolim(r);

    printf("%f의 반올림은 %d \n", r, i);

    return 0;
}

int banolim(float a){

    int b = a + 0.5;

    return b;
}