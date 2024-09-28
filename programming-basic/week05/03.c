#include <stdio.h>

 /* 
    다음의 조건에 따라 포인터의 연산을 해보세요 
     +, - 가능
    – int *ip;
    int val=10;
    ip=&val;
    ip++; // ip와 val 값 출력해보기
    (*ip)++; // ip와 val 값 출력해보기
 
 */

int main(){
    int *ip;
    int val = 10;

    ip = &val;
    ip++; // ip와 val 값 출력해보기
    printf("ip = %p val = %d \n", *ip, val);

    (*ip)++; // ip와 val 값 출력해보기
    printf("ip = %p val = %d \n", *ip, val);

    return 0;
}