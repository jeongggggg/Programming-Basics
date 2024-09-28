#include <stdio.h>

/*
    다음의 조건과 같은 프로그램을 작성해보세요
    - int x = 10, y = 20;
    - int *ip;
    - 포인터변수 ip가 x의 주소를 저장하고, ip를 통하여 x 값을 20으로 변환
    - 포인터변수 ip가 y의 주소를 저장하고, ip를 통하여 y의 값을 100으로 변환
    - 최종 ip의 값(%u, %p 비교해볼것)과 x, y의 값을 출력
*/
int main(){
    int x = 10, y = 20;
    int *ip;

    ip = &x;
    *ip = 20;
    printf("x = %d \n",  x);

    ip = &y;
    *ip = 100;
    printf("y = %d \n",  y);
    printf("ip = %u ip = %p \n");

    return 0;
}

/*
    다음의 조건과 같을 때 발생하는 오류는?

    int i;
    double *test2;
    test2 = &i;
    *test2 = 3.14;

    포인터 변수의 자료형과 참조하는 자료형이 일치하지 않음

 */