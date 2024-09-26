#include <stdio.h>

/*
    정수 n의 팩토리얼을 구해 보세요.
    - 함수 원형으로 선언할 것
    - n의 팩토리얼 구하기
    ㄴ factorial : n * (n - 1) * (n - 2) * ... 1
    - 함수명
    ㄴ int fac(int n);
*/

int fac(int n);

int main(){

    int n;
    
    printf("n : "); 

    scanf("%d", &n);

    printf("%d! : %d. \n", n, fac(n));

    return 0;
}

int fac(int n){
    
    int i, result = 1;

    for (i = 1; i <= n; i++){
        result *= i;
    }

    return result;
    
}