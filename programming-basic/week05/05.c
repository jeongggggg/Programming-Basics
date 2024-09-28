#include <stdio.h>

/*
    함수의 전달인자로 포인터를 전달해봅시다
    - 변수의 주소를 함수에 넘겨줌
    - i = 100 -> 120 번지 --> 120 --> 150번지
    - j = 200 -> 220 번지 --> 220 --> 290번지
    -           temp = 100 -> 500번지
*/

void swap(int *, int *);
int main(){
    int i = 100, j = 200;

    printf("i = %d, j = %d \n", i, j);

    swap(&i, &j);

    printf("i = %d, j = %d \n", i, j);

    return 0;
}

void swap(int *i, int *j){
    int temp;

    printf("----- swap function start ----- \n");
    printf("i = %d, j = %d \n", *i, *j);

    temp = *i;
    *i = *j;
    *j = temp;

    printf("i = %d, j = %d \n", *i, *j);
    printf("----- swap function end ----- \n");
}