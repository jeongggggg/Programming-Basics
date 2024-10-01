#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

// SIZE 만큼의 메모리를 동적할당

int main(){

    int *pt;

    pt = (int *)malloc(SIZE * sizeof(int)); // 메모리의 시작주소를 pt에 대입

    if(pt == NULL){ // 주소가 NULL이면
        printf("error");
    }

    pt[0] = 1;
    pt[1] = 2;
    pt[2] = 3;

    printf("pt list = %d %d %d \n", pt[0], pt[1], pt[2]);

    free(pt);

    return 0;
}