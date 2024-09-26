#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

// 1 ~ 100 사이의 난수 값을 총 5회 발생시켜 해당 난수들의 합을 구하는 코드를 작성해보세요.
int main(){

    srand(time(NULL));

    int a[5] = {0};
    int i, sum = 0;

    for (i = 0; i < 5; i++){

        a[i] = rand() % 100 + 1;

        printf("a[%d] = %d \t", i, a[i]);

        sum = sum + a[i];
    }

    printf("\n sum = %d \n", sum);

    return 0;
    
}
