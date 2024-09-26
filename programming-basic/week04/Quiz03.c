#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

// factorial 을 구하는 함수의 원형을 작성하고, 1 ~ 10 사이의 임의의 수 n 의 factorial 을 구하는 코드를 자유롭게 작성

int fac(int);

int main(){

    int a;

    srand(time(NULL));
    a = rand() % 10 + 1;

    printf("a = %d, fac(%d) = %d \n", a, a, fac(a));

    return 0;
}

int fac(int i){
    if (i <= 1){
        return 1;
    } else{
        return i * fac(i - 1);
    }
}