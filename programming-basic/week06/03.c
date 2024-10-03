#include <stdio.h>

int main(){
    int a[4] = {0};
    int *ptr, i;
    ptr = a;

    // 배열형태로 데이터 대입하기
    a[0] = 1;
    ptr[1] = 2;

    // 포인터로 데이터 대입하기
    *(a + 2) = 3;
    *(ptr + 3) = 4;
    for (i = 0; i < 4; i++){
        printf("*a[%d] = %d \t", i, a[i]);
        printf("*a[%d] = %d \t", i, ptr[i]);
        printf("*a[%d] = %d \t", i, *(a + i));
        printf("*a[%d] = %d \t", i, *(ptr + i));
    }

    return 0;
}