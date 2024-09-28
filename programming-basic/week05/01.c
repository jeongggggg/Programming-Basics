#include <stdio.h>

// 다음의 주소연산자와 간접참조 연산자를 사용하여 프로그램을 실행해봅시다.
int main(){
    int *ip;
    int val = 10;
    ip = &val;

    printf("val의 주소 : %p, val 값 : %d \n", &val, val);
    printf("ip에 저장된 값 : %p, ip가 가리키는 값 : %d \n", ip, *ip);
}