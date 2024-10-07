#include <stdio.h>

// 입출력함수를 사용하여 코드 자유 작성

int main(){
    int i;
    int *pi;
    pi=&i;
    char c;
    char name[30];

    printf("scanf를 사용하여 정수하나, 문자하나 입력하게:\n");
    
    scanf("%d %c",&i,&c);

    printf("i=%d, c=%c\n",i,c);

    getchar();

    printf("etchar, putchar를 사용하여 문자하나 입력받고 출력하기:\n");
    c = getchar();
    putchar(c);
    printf("\n");
    getchar();
    printf("gets_s puts를 사용하여 name입력하고 출력하기 :\n");
    gets_s(name,30);
    puts(name);
    printf("\n");


    return 0;
}
