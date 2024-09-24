#include <stdio.h>

/*
    다음의 배열의 원소를 각각 출력해봅시다
    - int test1[10] = {1,2,3};
    - int test2[10];
    - int test3[] = {1,2,3}
*/
int main(){

    int test1[10] = {1,2,3};
    int test2[10];
    int test3[] = {1,2,3};

    int i,j;

    // 1)
    for (i = 0; i < 10; i++){
        printf("test1[%d] = %d \n", i, test1[i]);
    }

    // 2)
   printf("\n");

   for (i = 0; i < 10; i++){
        printf("test2[%d] = %d \n", i, test1[i]);
    }

    // 3)
    printf("\n");

    j = sizeof(test3) / sizeof(test3[0]);
    for (i = 0; i < j; i++){
        printf("test3[%d] = %d \n", i, test1[i]);
    }

    return 0;
}