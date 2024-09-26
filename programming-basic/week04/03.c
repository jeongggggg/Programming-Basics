#include <stdio.h>

/*
    서로 같지 않은 두 값 a, b 중 max 값을 구하기
    - 함수명 : int max(int a, int b)
    - max 값을 찾아 반환
    - 함수 원형 사용할 것

    리턴하지 않고 선언한다면 void max(int a, int b) 로 선언
*/

int max(int a, int b);

int main(){
    int a = 10, b = 20;
    int max_val;

    max_val = max(a, b);

    printf("max = %d \n", max_val);

    return 0;
}

int max(int a, int b){
    if(a > b)
        return a;
    else 
        return b;
}