#include <stdio.h>

/*
    다음 조건에 알맞은 코드를 작성해보세요.
   - int i = 10, j = 20, k = 30, l = 40;
   - // i와 j값을 서로 변경, j와 l값을 서로 변경하는 프로그램
    -// void swap() 사용자 정의함수 만들기
*/

void swap(int *, int *, int *, int *);
int main(){
    int i = 10, j = 20, k = 30, l = 40;

    printf("i = %d, j = %d, k = %d, l = %d \n", i, j, k, l);

    swap(&i,&j, &k, &l);

    printf("i = %d, j = %d, k = %d,l = %d \n", i, j, k, l);

    return 0;
}

void swap(int *a, int *b, int *c, int *d){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
    temp = *c;
    *c = *d;
    *d = temp;
}