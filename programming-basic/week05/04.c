#include <stdio.h>

/*
    함수의 전달인자로 값을 전달해봅시다
    - 서로 다른 주소의 i, j
    - 함수가 끝나면, 지역변수는 사라짐
    - i = 100 -> 120 번지 --> 150번지
    - j = 200 -> 220 번지 --> 290번지
    -           temp = 100 -> 500번지
*/

void swap(int, int);
int main(){
    int i = 100, j = 200;

    printf("i = %d, j = %d \n", i, j);

    swap(i, j);

    printf("i = %d, j = %d \n", i, j);

    return 0;
}

void swap(int i, int j){
    int temp;

    printf("----- swap function start ----- \n");
    printf("i = %d, j = %d \n", i, j);

    temp = i;
    i = j;
    j = temp;

    printf("i = %d, j = %d \n", i, j);
    printf("----- swap function end ----- \n");
}