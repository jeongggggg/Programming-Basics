#include <stdio.h>
#include <stdlib.h>

// 동적할당의 개념과 활동

int main(){

    int *ptr;

    ptr = (int*)malloc(sizeof(int) * 10);

    printf("동적할당 메모리의 시작주소 : %p \n", ptr);

    free(ptr);
}