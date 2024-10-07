#include <stdio.h>

/*
    다음 조건에 맞도록 C언어의 프로토 타입을 구성하고 코드를 완성해보세요
    - int max(int a, int b);
    - 정수형 변수 a, b를 인수로 하여 두 수 중 max값을 반환하기
 */

int max(int a, int b);
int main(){
    int a = 10, b = 20;
    int max_val;
    max_val = max(a,b);
    printf(“max = %d \n”, max_val);
    return 0; 
}

int max(int a, int b){
    if (a>b)
    return a;
    else
    return b; 
}

